type eventEmitter;
type keyboard;
[@bs.obj] external anyData: (~name: string, ~data: Js.t({..}), unit) => _;
module Events = {
  module EventEmitter = (E: {type t;}) => {
    type eventEmitterT;
    // type t = eventEmitterT;
    [@bs.send]
    external addEventListener:
      (E.t, string, [@bs.this] ('a => unit), 'a) => E.t =
      "addEventListener";
    [@bs.send]
    external once: (E.t, string, [@bs.this] ('a => unit), 'a) => E.t = "on";
    [@bs.send]
    external on: (E.t, string, [@bs.this] ('a => unit), 'a) => E.t = "on";
    [@bs.send]
    external off: (E.t, string, [@bs.this] ('a => unit), 'a, bool) => E.t =
      "on";
    [@bs.send] external offStr: (E.t, string) => E.t = "off";
    [@bs.send] external listeners: (E.t, string) => array('a) = "listeners";
    [@bs.send] external eventNames: E.t => array(string) = "eventNames";
    [@bs.send] external emit0: (E.t, string) => bool = "emit";
    [@bs.send] external emit1: (E.t, string, 'a) => bool = "emit";
    [@bs.send] external emit2: (E.t, string, 'a, 'b) => bool = "emit";
    [@bs.send] external destroy: E.t => unit = "destroy";
    [@bs.send] external shutdown: E.t => unit = "shutdown";
    [@bs.send]
    external removeAllListenersStr: (E.t, string) => E.t =
      "removeAllListeners";
    [@bs.send] external removeAllListeners: E.t => E.t = "removeAllListeners";
    [@bs.send]
    external removeListenerStr: (E.t, string) => E.t = "removeLIstener";
  };
};
module KeyCodes = {
  //   type keyboardT;
  type t = keyboard;

  [@bs.get] external a: t => int = "A";
  [@bs.get] external alt: t => int = "ALT";
  [@bs.get] external b: t => int = "B";
  [@bs.get] external backSlash: t => int = "BACK_SLASH";
  [@bs.get] external backSpace: t => int = "BACKSPACE";
  [@bs.get] external backTick: t => int = "BACKTICK";
  [@bs.get] external bracketLeftFFox: t => int = "BRACKET_LEFT_FIREFOX";
  [@bs.get] external bracketRightFFox: t => int = "BRACKET_RIGHT_FIREFOX";
  [@bs.get] external c: t => int = "C";
  [@bs.get] external capsLock: t => int = "CAPS_LOCK";
  [@bs.get] external closedBracket: t => int = "CLOSED_BRACKET";
  [@bs.get] external colon: t => int = "COLON";
  [@bs.get] external comma: t => int = "COMMA";
  [@bs.get] external commaFFox: t => int = "COMMA_FIREFOX";
  [@bs.get] external commaFFoxWindows: t => int = "COMMA_FIREFOX_WINDOWS";
  [@bs.get] external ctrl: t => int = "CTRL";
  [@bs.get] external d: t => int = "D";
  [@bs.get] external delete: t => int = "DELETE";
  [@bs.get] external down: t => int = "DOWN";
  [@bs.get] external e: t => int = "E";
  [@bs.get] external eight: t => int = "EIGHT";
  [@bs.get] external end_: t => int = "END";
  [@bs.get] external enter: t => int = "ENTER";
  [@bs.get] external esc: t => int = "ESC";
  [@bs.get] external f: t => int = "F";
  [@bs.get] external f1: t => int = "F1";
  [@bs.get] external f2: t => int = "F2";
  [@bs.get] external f3: t => int = "F3";
  [@bs.get] external f4: t => int = "F4";
  [@bs.get] external f5: t => int = "F5";
  [@bs.get] external f6: t => int = "F6";
  [@bs.get] external f7: t => int = "F7";
  [@bs.get] external f8: t => int = "F8";
  [@bs.get] external f9: t => int = "F9";
  [@bs.get] external f10: t => int = "F10";
  [@bs.get] external f11: t => int = "F11";
  [@bs.get] external f12: t => int = "F12";
  [@bs.get] external five: t => int = "FIVE";
  [@bs.get] external forwardSlash: t => int = "FORWARD_SLASH";
  [@bs.get] external four: t => int = "FOUR";
  [@bs.get] external g: t => int = "G";
  [@bs.get] external h: t => int = "H";
  [@bs.get] external home: t => int = "HOME";
  [@bs.get] external i: t => int = "I";
  [@bs.get] external insert: t => int = "INSERT";
  [@bs.get] external j: t => int = "J";
  [@bs.get] external k: t => int = "K";
  [@bs.get] external l: t => int = "L";
  [@bs.get] external left: t => int = "LEFT";
  [@bs.get] external m: t => int = "M";
  [@bs.get] external minus: t => int = "MINUS";
  [@bs.get] external n: t => int = "N";
  [@bs.get] external nine: t => int = "NINE";
  [@bs.get] external numpadEight: t => int = "NUMPAD_EIGHT";
  [@bs.get] external numpadFive: t => int = "NUMPAD_FIVE";
  [@bs.get] external numpadFour: t => int = "NUMPAD_FOUR";
  [@bs.get] external numpadNine: t => int = "NUMPAD_NINE";
  [@bs.get] external numpadOne: t => int = "NUMPAD_ONE";
  [@bs.get] external numpadSeven: t => int = "NUMPAD_SEVEN";
  [@bs.get] external numpadSix: t => int = "NUMPAD_SIX";
  [@bs.get] external numpadThree: t => int = "NUMPAD_THREE";
  [@bs.get] external numpadTwo: t => int = "NUMPAD_TWO";
  [@bs.get] external numpadZero: t => int = "NUMPAD_ZERO";
  [@bs.get] external p: t => int = "P";
  [@bs.get] external pageDown: t => int = "PAGE_DOWN";
  [@bs.get] external pageUp: t => int = "PAGE_UP";
  [@bs.get] external pause: t => int = "PAUSE";
  [@bs.get] external period: t => int = "PERIOD";
  [@bs.get] external plus: t => int = "PLUS";
  [@bs.get] external printScreen: t => int = "PRINT_SCREEN";
  [@bs.get] external q: t => int = "Q";
  [@bs.get] external quotes: t => int = "QUOTES";
  [@bs.get] external r: t => int = "R";
  [@bs.get] external right: t => int = "RIGHT";
  [@bs.get] external s: t => int = "S";
  [@bs.get] external semicolon: t => int = "SEMICOLON";
  [@bs.get] external semicolonFFox: t => int = "SEMICLON_FIREFOX";
  [@bs.get] external seven: t => int = "SEVEN";
  [@bs.get] external shift: t => int = "SHIFT";
  [@bs.get] external six: t => int = "SIX";
  [@bs.get] external space: t => int = "SPACE";
  [@bs.get] external t: t => int = "T";
  [@bs.get] external tab: t => int = "TAB";
  [@bs.get] external three: t => int = "THREE";
  [@bs.get] external two: t => int = "TWO";
  [@bs.get] external u: t => int = "U";
  [@bs.get] external up: t => int = "UP";
  [@bs.get] external v: t => int = "V";
  [@bs.get] external w: t => int = "W";
  [@bs.get] external x: t => int = "X";
  [@bs.get] external y: t => int = "Y";
  [@bs.get] external zero: t => int = "ZERO";
  include Events.EventEmitter({
    type nonrec t = t;
  });
};
