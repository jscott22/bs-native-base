[@bs.module "native-base"]
external listItem : ReasonReact.reactClass = "ListItem";

let make =
    (
      ~style=?,
      ~itemDivider: option(bool)=?,
      ~button: option(bool)=?,
      ~noBorder: option(bool)=?,
      ~hitSlop=?,
      ~accessible=?,
      ~accessibilityComponentType=?,
      ~accessibilityTraits=?,
      ~onLayout=?,
      ~delayLongPress=?,
      ~delayPressIn=?,
      ~delayPressOut=?,
      ~disabled=?,
      ~onLongPress=?,
      ~onPress=?,
      ~onPressIn=?,
      ~onPressOut=?,
      ~pressRetentionOffset=?,
      ~activeOpacity=?,
      ~onHideUnderlay=?,
      ~onShowUnderlay=?,
      ~underlayColor=?,
      ~hasTVPreferredFocus=?,
      ~tvParallaxProperties=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=listItem,
    ~props=
      Js.Undefined.(
        {
          "style": fromOption(style),
          "accessible":
            fromOption(UtilsRN.optBoolToOptJsBoolean(accessible)),
          "hitSlop": fromOption(hitSlop),
          "onLayout": fromOption(onLayout),
          "accessibilityComponentType":
            fromOption(
              UtilsRN.option_map(
                x =>
                  switch (x) {
                  | `none => "none"
                  | `button => "button"
                  | `radiobutton_checked => "radiobutton_checked-none"
                  | `radiobutton_unchecked => "radiobutton_unchecked"
                  },
                accessibilityComponentType,
              ),
            ),
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
          "delayLongPress": fromOption(delayLongPress),
          "delayPressIn": fromOption(delayPressIn),
          "delayPressOut": fromOption(delayPressOut),
          "disabled": fromOption(disabled),
          "onLongPress": fromOption(onLongPress),
          "onPress": fromOption(onPress),
          "onPressIn": fromOption(onPressIn),
          "onPressOut": fromOption(onPressOut),
          "pressRetentionOffset": fromOption(pressRetentionOffset),
          "activeOpacity": fromOption(activeOpacity),
          "onHideUnderlay": fromOption(onHideUnderlay),
          "onShowUnderlay": fromOption(onShowUnderlay),
          "underlayColor": fromOption(underlayColor),
          "hasTVPreferredFocus": fromOption(hasTVPreferredFocus),
          "tvParallaxProperties": fromOption(tvParallaxProperties),
          "itemDivider": fromOption(itemDivider),
          "button": fromOption(button),
          "noBorder": fromOption(noBorder),
        }
      ),
    children,
  );
