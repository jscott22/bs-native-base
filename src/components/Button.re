[@bs.module "native-base"] external button : ReasonReact.reactClass = "Button";

let make =
    (
      ~style=?,
      ~block: option(bool)=?,
      ~primary: option(bool)=?,
      ~transparent: option(bool)=?,
      ~success: option(bool)=?,
      ~danger: option(bool)=?,
      ~warning: option(bool)=?,
      ~info: option(bool)=?,
      ~bordered: option(bool)=?,
      ~disabled: option(bool)=?,
      ~rounded: option(bool)=?,
      ~large: option(bool)=?,
      ~small: option(bool)=?,
      ~active: option(bool)=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=button,
    ~props=
      Props.extendView(
        Js.Undefined.(
          {
            "style": fromOption(style),
            "block": fromOption(block),
            "primary": fromOption(primary),
            "transparent": fromOption(transparent),
            "success": fromOption(success),
            "danger": fromOption(danger),
            "warning": fromOption(warning),
            "info": fromOption(info),
            "bordered": fromOption(bordered),
            "disabled": fromOption(disabled),
            "rounded": fromOption(rounded),
            "large": fromOption(large),
            "small": fromOption(small),
            "active": fromOption(active),
          }
        ),
      ),
    children,
  );
