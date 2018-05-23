type insets = {
  .
  "left": int,
  "right": int,
  "top": int,
  "bottom": int,
};

type touchResponderHandlers = {
  onMoveShouldSetResponder:
    option(BsReactNative.RNEvent.NativeEvent.t => bool),
  onMoveShouldSetResponderCapture:
    option(BsReactNative.RNEvent.NativeEvent.t => bool),
  onResponderGrant: option(BsReactNative.RNEvent.NativeEvent.t => unit),
  onResponderMove: option(BsReactNative.RNEvent.NativeEvent.t => unit),
  onResponderReject: option(BsReactNative.RNEvent.NativeEvent.t => unit),
  onResponderRelease: option(BsReactNative.RNEvent.NativeEvent.t => unit),
  onResponderTerminate: option(BsReactNative.RNEvent.NativeEvent.t => unit),
  onResponderTerminationRequest:
    option(BsReactNative.RNEvent.NativeEvent.t => unit),
  onStartShouldSetResponder:
    option(BsReactNative.RNEvent.NativeEvent.t => bool),
  onStartShouldSetResponderCapture:
    option(BsReactNative.RNEvent.NativeEvent.t => bool),
};

let serialize = (handlers: option(touchResponderHandlers)) =>
  switch (handlers) {
  | None => Js.Obj.empty()
  | Some(handlers) =>
    Js.Undefined.(
      {
        "onMoveShouldSetResponder":
          fromOption(
            UtilsRN.option_map(
              (g, x) => g(x),
              handlers.onMoveShouldSetResponder,
            ),
          ),
        "onMoveShouldSetResponderCapture":
          fromOption(
            UtilsRN.option_map(
              (g, x) => g(x),
              handlers.onMoveShouldSetResponderCapture,
            ),
          ),
        "onResponderGrant": fromOption(handlers.onResponderGrant),
        "onResponderMove": fromOption(handlers.onResponderMove),
        "onResponderReject": fromOption(handlers.onResponderReject),
        "onResponderRelease": fromOption(handlers.onResponderRelease),
        "onResponderTerminate": fromOption(handlers.onResponderTerminate),
        "onResponderTerminationRequest":
          fromOption(handlers.onResponderTerminationRequest),
        "onStartShouldSetResponder":
          fromOption(
            UtilsRN.option_map(
              (g, x) => g(x),
              handlers.onStartShouldSetResponder,
            ),
          ),
        "onStartShouldSetResponderCapture":
          fromOption(
            UtilsRN.option_map(
              (g, x) => g(x),
              handlers.onStartShouldSetResponderCapture,
            ),
          ),
      }
    )
  };

let extendView =
    (
      ~accessibilityLabel=?,
      ~accessible=?,
      ~hitSlop=?,
      ~onAccessibilityTap=?,
      ~onLayout=?,
      ~onMagicTap=?,
      ~responderHandlers=?,
      ~pointerEvents=?,
      ~removeClippedSubviews=?,
      ~style=?,
      ~testID=?,
      ~accessibilityComponentType=?,
      ~accessibilityLiveRegion=?,
      ~collapsable=?,
      ~importantForAccessibility=?,
      ~needsOffscreenAlphaCompositing=?,
      ~renderToHardwareTextureAndroid=?,
      ~accessibilityTraits=?,
      ~accessibilityViewIsModal=?,
      ~shouldRasterizeIOS=?,
      moreProps,
    ) =>
  UtilsRN.objAssign2(
    Js.Undefined.(
      {
        "accessibilityLabel": fromOption(accessibilityLabel),
        "accessible": fromOption(UtilsRN.optBoolToOptJsBoolean(accessible)),
        "hitSlop": fromOption(hitSlop),
        "onAccessibilityTap": fromOption(onAccessibilityTap),
        "onLayout": fromOption(onLayout),
        "onMagicTap": fromOption(onMagicTap),
        "removeClippedSubviews":
          fromOption(UtilsRN.optBoolToOptJsBoolean(removeClippedSubviews)),
        "pointerEvents":
          fromOption(
            UtilsRN.option_map(
              x =>
                switch (x) {
                | `auto => "auto"
                | `none => "none"
                | `boxNone => "box-none"
                | `boxOnly => "box-only"
                },
              pointerEvents,
            ),
          ),
        "style": fromOption(style),
        "testID": fromOption(testID),
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
        "accessibilityLiveRegion":
          fromOption(
            UtilsRN.option_map(
              x =>
                switch (x) {
                | `polite => "polite"
                | `none => "none"
                | `assertive => "assertive"
                },
              accessibilityLiveRegion,
            ),
          ),
        "collapsable":
          fromOption(UtilsRN.optBoolToOptJsBoolean(collapsable)),
        "importantForAccessibility":
          fromOption(
            UtilsRN.option_map(
              prop =>
                switch (prop) {
                | `auto => "auto"
                | `yes => "yes"
                | `no => "no"
                | `noHideDescendants => "noHideDescendants"
                },
              importantForAccessibility,
            ),
          ),
        "needsOffscreenAlphaCompositing":
          fromOption(
            UtilsRN.optBoolToOptJsBoolean(needsOffscreenAlphaCompositing),
          ),
        "renderToHardwareTextureAndroid":
          fromOption(
            UtilsRN.optBoolToOptJsBoolean(renderToHardwareTextureAndroid),
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
        "accessibilityViewIsModal":
          fromOption(
            UtilsRN.optBoolToOptJsBoolean(accessibilityViewIsModal),
          ),
        "shouldRasterizeIOS":
          fromOption(UtilsRN.optBoolToOptJsBoolean(shouldRasterizeIOS)),
      }
    ),
    moreProps,
    serialize(responderHandlers),
  );

let extendTouchableWithoutFeedback =
    (
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
    ) =>
  UtilsRN.objAssign2(
    Js.Undefined.(
      {
        "accessibilityLabel": fromOption(accessibilityLabel),
        "accessible": fromOption(UtilsRN.optBoolToOptJsBoolean(accessible)),
        "hitSlop": fromOption(hitSlop),
        "onAccessibilityType": fromOption(onAccessibilityType),
        "onLayout": fromOption(onLayout),
        "delayLongPress": fromOption(delayLongPress),
        "delayPressIn": fromOption(delayPressIn),
        "delayPressOut": fromOption(delayPressOut),
        "disabled": fromOption(disabled),
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
  );

let extendTouchableOpacity =
    (
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
      ~activeOpacity=?,
      ~tvParallaxProperties=?,
      ~hasTVPreferredFocus=?,
    ) =>
  UtilsRN.objAssign2(
    Js.Undefined.(
      {
        "accessibilityLabel": fromOption(accessibilityLabel),
        "accessible": fromOption(UtilsRN.optBoolToOptJsBoolean(accessible)),
        "hitSlop": fromOption(hitSlop),
        "onAccessibilityType": fromOption(onAccessibilityType),
        "onLayout": fromOption(onLayout),
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
        "tvParallaxProperties": fromOption(tvParallaxProperties),
        "hasTVPreferredFocus": fromOption(hasTVPreferredFocus),
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
  );
