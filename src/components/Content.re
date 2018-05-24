[@bs.module "native-base"]
external content : ReasonReact.reactClass = "Content";

let make =
    (
      ~style=?,
      ~padder: option(bool)=?,
      ~disableKBDismissScroll: option(bool)=?,
      ~enableResetScrollToCoords: option(bool)=?,
      ~keyboardShouldPersistTaps: option(bool)=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=content,
    ~props=
      Js.Undefined.(
        {
          "style": fromOption(style),
          "padder": fromOption(padder),
          "disableKBDismissScroll": fromOption(disableKBDismissScroll),
          "enableResetScrollToCoords": fromOption(enableResetScrollToCoords),
          "keyboardShouldPersistTaps": fromOption(keyboardShouldPersistTaps),
        }
      ),
    children,
  );
