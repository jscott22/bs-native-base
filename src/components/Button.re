[@bs.module "native-base"] external button : ReasonReact.reactClass = "Button";

let make =
    (
      ~style=?,
      ~block: option(bool)=?,
      ~full: option(bool)=?,
      ~primary: option(bool)=?,
      ~transparent: option(bool)=?,
      ~success: option(bool)=?,
      ~danger: option(bool)=?,
      ~warning: option(bool)=?,
      ~info: option(bool)=?,
      ~bordered: option(bool)=?,
      ~rounded: option(bool)=?,
      ~large: option(bool)=?,
      ~small: option(bool)=?,
      ~active: option(bool)=?,
      ~light: option(bool)=?,
      ~dark: option(bool)=?,
      ~accessibilityLabel=?,
      ~accessible=?,
      ~hitSlop=?,
      ~onAccessibilityType=?,
      ~delayLongPress=?,
      ~delayPressIn=?,
      ~delayPressOut=?,
      ~disabled=?,
      ~accessibilityTraits=?,
      ~onLayout=?,
      ~onLongPress=?,
      ~onPress=?,
      ~onPressIn=?,
      ~onPressOut=?,
      ~pressRetentionOffset=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=button,
    ~props=
      Js.Undefined.(
        {
          "style": fromOption(style),
          "block": fromOption(block),
          "full": fromOption(full),
          "light": fromOption(light),
          "dark": fromOption(dark),
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
          "accessibilityLabel": fromOption(accessibilityLabel),
          "accessible":
            fromOption(UtilsRN.optBoolToOptJsBoolean(accessible)),
          "hitSlop": fromOption(hitSlop),
          "onAccessibilityType": fromOption(onAccessibilityType),
          "onLayout": fromOption(onLayout),
          "delayLongPress": fromOption(delayLongPress),
          "delayPressIn": fromOption(delayPressIn),
          "delayPressOut": fromOption(delayPressOut),
          "onLongPress": fromOption(onLongPress),
          "onPress": fromOption(onPress),
          "onPressIn": fromOption(onPressIn),
          "onPressOut": fromOption(onPressOut),
          "pressRetentionOffset": fromOption(pressRetentionOffset),
          "accessibilityTraits":
            fromOption(
              UtilsRN.option_map(
                traits => {
                  let to_string =
                    fun
                    | `none => "none"
                    | `button => "button"
                    | `link => "link"
                    | `header => "header"
                    | `search => "search"
                    | `image => "image"
                    | `selected => "selected"
                    | `plays => "plays"
                    | `key => "key"
                    | `text => "text"
                    | `summary => "summary"
                    | `disabled => "disabled"
                    | `frequentUpdates => "frequentUpdates"
                    | `startsMedia => "startsMedia"
                    | `adjustable => "adjustable"
                    | `allowsDirectInteraction => "allowsDirectInteraction"
                    | `pageTurn => "pageTurn";
                  traits |> List.map(to_string) |> Array.of_list;
                },
                accessibilityTraits,
              ),
            ),
        }
      ),
    children,
  );
