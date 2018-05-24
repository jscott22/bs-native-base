[@bs.module "native-base"] external list : ReasonReact.reactClass = "List";

let make =
    (
      ~style=?,
      ~button=?,
      ~dataArray=?,
      ~selected=?,
      ~noIndent=?,
      ~itemDivider=?,
      ~itemHeade=?,
      ~first=?,
      ~last=?,
      ~icon=?,
      ~avata=?,
      ~thumbnai=?,
      ~renderRow=?,
      ~enableEmptySection=?,
      ~accessibilityLabel=?,
      ~accessible=?,
      ~hitSlop=?,
      ~onAccessibilityTap=?,
      ~onLayout=?,
      ~onMagicTap=?,
      ~pointerEvents=?,
      ~removeClippedSubviews=?,
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
      ~alwaysBounceVertical=?,
      ~contentContainerStyle=?,
      ~keyboardDismissMode=?,
      ~keyboardShouldPersistTaps=?,
      ~onContentSizeChange=?,
      ~onMomentumScrollBegin=?,
      ~onMomentumScrollEnd=?,
      ~onScroll=?,
      ~onScrollBeginDrag=?,
      ~onScrollEndDrag=?,
      ~pagingEnabled=?,
      ~refreshControl=?,
      ~scrollEnabled=?,
      ~showsHorizontalScrollIndicator=?,
      ~showsVerticalScrollIndicator=?,
      ~stickyHeaderIndices=?,
      ~endFillColor=?,
      ~overScrollMode=?,
      ~scrollPerfTag=?,
      ~alwaysBounceHorizontal=?,
      ~horizontal=?,
      ~automaticallyAdjustContentInsets=?,
      ~bounces=?,
      ~bouncesZoom=?,
      ~canCancelContentTouches=?,
      ~centerContent=?,
      ~contentInset=?,
      ~contentInsetAdjustmentBehavior=?,
      ~contentOffset=?,
      ~decelerationRate=?,
      ~directionalLockEnabled=?,
      ~indicatorStyle=?,
      ~maximumZoomScale=?,
      ~minimumZoomScale=?,
      ~pinchGestureEnabled=?,
      ~scrollEventThrottle=?,
      ~scrollIndicatorInsets=?,
      ~scrollsToTop=?,
      ~snapToAlignment=?,
      ~snapToInterval=?,
      ~zoomScale=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=list,
    ~props=
      Js.Undefined.(
        {
          "style": fromOption(style),
          "button": fromOption(button),
          "dataArray": fromOption(dataArray),
          "selected": fromOption(selected),
          "noIndent": fromOption(noIndent),
          "itemDivider": fromOption(itemDivider),
          "itemHeade": fromOption(itemHeade),
          "first": fromOption(first),
          "last": fromOption(last),
          "icon": fromOption(icon),
          "avata": fromOption(avata),
          "thumbnai": fromOption(thumbnai),
          "renderRow": fromOption(renderRow),
          "enableEmptySection": fromOption(enableEmptySection),
          "accessibilityLabel": fromOption(accessibilityLabel),
          "accessible":
            fromOption(UtilsRN.optBoolToOptJsBoolean(accessible)),
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
          "alwaysBounceVertical": fromOption(alwaysBounceVertical),
          "contentContainerStyle": fromOption(contentContainerStyle),
          "keyboardDismissMode": fromOption(keyboardDismissMode),
          "keyboardShouldPersistTaps": fromOption(keyboardShouldPersistTaps),
          "onContentSizeChange": fromOption(onContentSizeChange),
          "onMomentumScrollBegin": fromOption(onMomentumScrollBegin),
          "onMomentumScrollEnd": fromOption(onMomentumScrollEnd),
          "onScroll": fromOption(onScroll),
          "onScrollBeginDrag": fromOption(onScrollBeginDrag),
          "onScrollEndDrag": fromOption(onScrollEndDrag),
          "pagingEnabled": fromOption(pagingEnabled),
          "refreshControl": fromOption(refreshControl),
          "scrollEnabled": fromOption(scrollEnabled),
          "showsHorizontalScrollIndicator":
            fromOption(showsHorizontalScrollIndicator),
          "showsVerticalScrollIndicator":
            fromOption(showsVerticalScrollIndicator),
          "stickyHeaderIndices": fromOption(stickyHeaderIndices),
          "endFillColor": fromOption(endFillColor),
          "overScrollMode": fromOption(overScrollMode),
          "scrollPerfTag": fromOption(scrollPerfTag),
          "alwaysBounceHorizontal": fromOption(alwaysBounceHorizontal),
          "horizontal": fromOption(horizontal),
          "automaticallyAdjustContentInsets":
            fromOption(automaticallyAdjustContentInsets),
          "bounces": fromOption(bounces),
          "bouncesZoom": fromOption(bouncesZoom),
          "canCancelContentTouches": fromOption(canCancelContentTouches),
          "centerContent": fromOption(centerContent),
          "contentInset": fromOption(contentInset),
          "contentInsetAdjustmentBehavior":
            fromOption(contentInsetAdjustmentBehavior),
          "contentOffset": fromOption(contentOffset),
          "decelerationRate": fromOption(decelerationRate),
          "directionalLockEnabled": fromOption(directionalLockEnabled),
          "indicatorStyle": fromOption(indicatorStyle),
          "maximumZoomScale": fromOption(maximumZoomScale),
          "minimumZoomScale": fromOption(minimumZoomScale),
          "pinchGestureEnabled": fromOption(pinchGestureEnabled),
          "scrollEventThrottle": fromOption(scrollEventThrottle),
          "scrollIndicatorInsets": fromOption(scrollIndicatorInsets),
          "scrollsToTop": fromOption(scrollsToTop),
          "snapToAlignment": fromOption(snapToAlignment),
          "snapToInterval": fromOption(snapToInterval),
          "zoomScale": fromOption(zoomScale),
        }
      ),
    children,
  );
