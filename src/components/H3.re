[@bs.module "native-base"] external h3 : ReasonReact.reactClass = "H3";

let make =
    (
      ~style=?,
      ~selectable=?,
      ~accessible=?,
      ~ellipsizeMode=?,
      ~nativeID=?,
      ~numberOfLines=?,
      ~onLayout=?,
      ~onLongPress=?,
      ~onPress=?,
      ~pressRetentionOffset=?,
      ~allowFontScaling=?,
      ~testID=?,
      ~disabled=?,
      ~selectionColor=?,
      ~textBreakStrategy=?,
      ~adjustsFontSizeToFit=?,
      ~minimumFontScale=?,
      ~suppressHighlighting=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=h3,
    ~props=
      Js.Undefined.(
        {
          "style": fromOption(style),
          "selectable": fromOption(selectable),
          "accessible": fromOption(accessible),
          "ellipsizeMode": fromOption(ellipsizeMode),
          "nativeID": fromOption(nativeID),
          "numberOfLines": fromOption(numberOfLines),
          "onLayout": fromOption(onLayout),
          "onLongPress": fromOption(onLongPress),
          "onPress": fromOption(onPress),
          "pressRetentionOffset": fromOption(pressRetentionOffset),
          "allowFontScaling": fromOption(allowFontScaling),
          "testID": fromOption(testID),
          "disabled": fromOption(disabled),
          "selectionColor": fromOption(selectionColor),
          "textBreakStrategy": fromOption(textBreakStrategy),
          "adjustsFontSizeToFit": fromOption(adjustsFontSizeToFit),
          "minimumFontScale": fromOption(minimumFontScale),
          "suppressHighlighting": fromOption(suppressHighlighting),
        }
      ),
    children,
  );
