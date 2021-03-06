// Generated by BUCKLESCRIPT VERSION 3.0.0, PLEASE EDIT WITH CARE
'use strict';

var List = require("bs-platform/lib/js/list.js");
var $$Array = require("bs-platform/lib/js/array.js");
var ReasonReact = require("reason-react/lib/js/src/ReasonReact.js");
var NativeBase = require("native-base");
var Js_undefined = require("bs-platform/lib/js/js_undefined.js");
var UtilsRN$BsNativeBase = require("../private/utilsRN.js");

function make(style, button, dataArray, selected, noIndent, itemDivider, itemHeade, first, last, icon, avata, thumbnai, renderRow, enableEmptySection, accessibilityLabel, accessible, hitSlop, onAccessibilityTap, onLayout, onMagicTap, pointerEvents, removeClippedSubviews, testID, accessibilityComponentType, accessibilityLiveRegion, collapsable, importantForAccessibility, needsOffscreenAlphaCompositing, renderToHardwareTextureAndroid, accessibilityTraits, accessibilityViewIsModal, shouldRasterizeIOS, alwaysBounceVertical, contentContainerStyle, keyboardDismissMode, keyboardShouldPersistTaps, onContentSizeChange, onMomentumScrollBegin, onMomentumScrollEnd, onScroll, onScrollBeginDrag, onScrollEndDrag, pagingEnabled, refreshControl, scrollEnabled, showsHorizontalScrollIndicator, showsVerticalScrollIndicator, stickyHeaderIndices, endFillColor, overScrollMode, scrollPerfTag, alwaysBounceHorizontal, horizontal, automaticallyAdjustContentInsets, bounces, bouncesZoom, canCancelContentTouches, centerContent, contentInset, contentInsetAdjustmentBehavior, contentOffset, decelerationRate, directionalLockEnabled, indicatorStyle, maximumZoomScale, minimumZoomScale, pinchGestureEnabled, scrollEventThrottle, scrollIndicatorInsets, scrollsToTop, snapToAlignment, snapToInterval, zoomScale, children) {
  return ReasonReact.wrapJsForReason(NativeBase.List, {
              style: Js_undefined.fromOption(style),
              button: Js_undefined.fromOption(button),
              dataArray: Js_undefined.fromOption(dataArray),
              selected: Js_undefined.fromOption(selected),
              noIndent: Js_undefined.fromOption(noIndent),
              itemDivider: Js_undefined.fromOption(itemDivider),
              itemHeade: Js_undefined.fromOption(itemHeade),
              first: Js_undefined.fromOption(first),
              last: Js_undefined.fromOption(last),
              icon: Js_undefined.fromOption(icon),
              avata: Js_undefined.fromOption(avata),
              thumbnai: Js_undefined.fromOption(thumbnai),
              renderRow: Js_undefined.fromOption(renderRow),
              enableEmptySection: Js_undefined.fromOption(enableEmptySection),
              accessibilityLabel: Js_undefined.fromOption(accessibilityLabel),
              accessible: Js_undefined.fromOption(UtilsRN$BsNativeBase.optBoolToOptJsBoolean(accessible)),
              hitSlop: Js_undefined.fromOption(hitSlop),
              onAccessibilityTap: Js_undefined.fromOption(onAccessibilityTap),
              onLayout: Js_undefined.fromOption(onLayout),
              onMagicTap: Js_undefined.fromOption(onMagicTap),
              removeClippedSubviews: Js_undefined.fromOption(UtilsRN$BsNativeBase.optBoolToOptJsBoolean(removeClippedSubviews)),
              pointerEvents: Js_undefined.fromOption(UtilsRN$BsNativeBase.option_map((function (x) {
                          if (x >= 416112227) {
                            if (x >= 427151639) {
                              return "box-only";
                            } else {
                              return "box-none";
                            }
                          } else if (x >= -922086728) {
                            return "none";
                          } else {
                            return "auto";
                          }
                        }), pointerEvents)),
              testID: Js_undefined.fromOption(testID),
              accessibilityComponentType: Js_undefined.fromOption(UtilsRN$BsNativeBase.option_map((function (x) {
                          if (x >= 310731477) {
                            if (x >= 735392028) {
                              return "radiobutton_unchecked";
                            } else {
                              return "radiobutton_checked-none";
                            }
                          } else if (x >= -639606286) {
                            return "button";
                          } else {
                            return "none";
                          }
                        }), accessibilityComponentType)),
              accessibilityLiveRegion: Js_undefined.fromOption(UtilsRN$BsNativeBase.option_map((function (x) {
                          if (x !== -114955603) {
                            if (x >= 536661202) {
                              return "assertive";
                            } else {
                              return "none";
                            }
                          } else {
                            return "polite";
                          }
                        }), accessibilityLiveRegion)),
              collapsable: Js_undefined.fromOption(UtilsRN$BsNativeBase.optBoolToOptJsBoolean(collapsable)),
              importantForAccessibility: Js_undefined.fromOption(UtilsRN$BsNativeBase.option_map((function (prop) {
                          if (prop >= 24641) {
                            if (prop >= 6039847) {
                              return "yes";
                            } else {
                              return "no";
                            }
                          } else if (prop >= -1017075213) {
                            return "noHideDescendants";
                          } else {
                            return "auto";
                          }
                        }), importantForAccessibility)),
              needsOffscreenAlphaCompositing: Js_undefined.fromOption(UtilsRN$BsNativeBase.optBoolToOptJsBoolean(needsOffscreenAlphaCompositing)),
              renderToHardwareTextureAndroid: Js_undefined.fromOption(UtilsRN$BsNativeBase.optBoolToOptJsBoolean(renderToHardwareTextureAndroid)),
              accessibilityTraits: Js_undefined.fromOption(UtilsRN$BsNativeBase.option_map((function (traits) {
                          var to_string = function (param) {
                            if (param >= -522290177) {
                              if (param >= -50329203) {
                                if (param !== 5343647) {
                                  if (param >= 829237851) {
                                    if (param >= 1030299483) {
                                      return "image";
                                    } else {
                                      return "selected";
                                    }
                                  } else if (param >= 15272742) {
                                    return "summary";
                                  } else {
                                    return "header";
                                  }
                                } else {
                                  return "key";
                                }
                              } else if (param >= -123392599) {
                                if (param >= -66829956) {
                                  return "disabled";
                                } else {
                                  return "adjustable";
                                }
                              } else if (param >= -487088280) {
                                return "search";
                              } else {
                                return "allowsDirectInteraction";
                              }
                            } else if (param >= -727597924) {
                              if (param >= -683287213) {
                                if (param >= -639606286) {
                                  return "button";
                                } else {
                                  return "startsMedia";
                                }
                              } else if (param >= -707934868) {
                                return "pageTurn";
                              } else {
                                return "frequentUpdates";
                              }
                            } else if (param >= -922086728) {
                              if (param >= -856044371) {
                                return "text";
                              } else {
                                return "none";
                              }
                            } else if (param >= -944564230) {
                              return "link";
                            } else {
                              return "plays";
                            }
                          };
                          return $$Array.of_list(List.map(to_string, traits));
                        }), accessibilityTraits)),
              accessibilityViewIsModal: Js_undefined.fromOption(UtilsRN$BsNativeBase.optBoolToOptJsBoolean(accessibilityViewIsModal)),
              shouldRasterizeIOS: Js_undefined.fromOption(UtilsRN$BsNativeBase.optBoolToOptJsBoolean(shouldRasterizeIOS)),
              alwaysBounceVertical: Js_undefined.fromOption(alwaysBounceVertical),
              contentContainerStyle: Js_undefined.fromOption(contentContainerStyle),
              keyboardDismissMode: Js_undefined.fromOption(keyboardDismissMode),
              keyboardShouldPersistTaps: Js_undefined.fromOption(keyboardShouldPersistTaps),
              onContentSizeChange: Js_undefined.fromOption(onContentSizeChange),
              onMomentumScrollBegin: Js_undefined.fromOption(onMomentumScrollBegin),
              onMomentumScrollEnd: Js_undefined.fromOption(onMomentumScrollEnd),
              onScroll: Js_undefined.fromOption(onScroll),
              onScrollBeginDrag: Js_undefined.fromOption(onScrollBeginDrag),
              onScrollEndDrag: Js_undefined.fromOption(onScrollEndDrag),
              pagingEnabled: Js_undefined.fromOption(pagingEnabled),
              refreshControl: Js_undefined.fromOption(refreshControl),
              scrollEnabled: Js_undefined.fromOption(scrollEnabled),
              showsHorizontalScrollIndicator: Js_undefined.fromOption(showsHorizontalScrollIndicator),
              showsVerticalScrollIndicator: Js_undefined.fromOption(showsVerticalScrollIndicator),
              stickyHeaderIndices: Js_undefined.fromOption(stickyHeaderIndices),
              endFillColor: Js_undefined.fromOption(endFillColor),
              overScrollMode: Js_undefined.fromOption(overScrollMode),
              scrollPerfTag: Js_undefined.fromOption(scrollPerfTag),
              alwaysBounceHorizontal: Js_undefined.fromOption(alwaysBounceHorizontal),
              horizontal: Js_undefined.fromOption(horizontal),
              automaticallyAdjustContentInsets: Js_undefined.fromOption(automaticallyAdjustContentInsets),
              bounces: Js_undefined.fromOption(bounces),
              bouncesZoom: Js_undefined.fromOption(bouncesZoom),
              canCancelContentTouches: Js_undefined.fromOption(canCancelContentTouches),
              centerContent: Js_undefined.fromOption(centerContent),
              contentInset: Js_undefined.fromOption(contentInset),
              contentInsetAdjustmentBehavior: Js_undefined.fromOption(contentInsetAdjustmentBehavior),
              contentOffset: Js_undefined.fromOption(contentOffset),
              decelerationRate: Js_undefined.fromOption(decelerationRate),
              directionalLockEnabled: Js_undefined.fromOption(directionalLockEnabled),
              indicatorStyle: Js_undefined.fromOption(indicatorStyle),
              maximumZoomScale: Js_undefined.fromOption(maximumZoomScale),
              minimumZoomScale: Js_undefined.fromOption(minimumZoomScale),
              pinchGestureEnabled: Js_undefined.fromOption(pinchGestureEnabled),
              scrollEventThrottle: Js_undefined.fromOption(scrollEventThrottle),
              scrollIndicatorInsets: Js_undefined.fromOption(scrollIndicatorInsets),
              scrollsToTop: Js_undefined.fromOption(scrollsToTop),
              snapToAlignment: Js_undefined.fromOption(snapToAlignment),
              snapToInterval: Js_undefined.fromOption(snapToInterval),
              zoomScale: Js_undefined.fromOption(zoomScale)
            }, children);
}

exports.make = make;
/* ReasonReact Not a pure module */
