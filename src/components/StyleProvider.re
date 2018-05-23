[@bs.module "native-base"]
external styleProvider : ReasonReact.reactClass = "StyleProvider";

let make = (~style=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=styleProvider,
    ~props=Js.Undefined.({"style": fromOption(style)}),
    children,
  );
