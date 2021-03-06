// Generated by BUCKLESCRIPT VERSION 3.0.0, PLEASE EDIT WITH CARE
'use strict';

var List = require("bs-platform/lib/js/list.js");
var $$Array = require("bs-platform/lib/js/array.js");
var ReasonReact = require("reason-react/lib/js/src/ReasonReact.js");
var NativeBase = require("native-base");
var Js_undefined = require("bs-platform/lib/js/js_undefined.js");
var UtilsRN$BsNativeBase = require("../private/utilsRN.js");

function make(style, itemDivider, button, noBorder, hitSlop, accessible, accessibilityComponentType, accessibilityTraits, onLayout, delayLongPress, delayPressIn, delayPressOut, disabled, onLongPress, onPress, onPressIn, onPressOut, pressRetentionOffset, activeOpacity, onHideUnderlay, onShowUnderlay, underlayColor, hasTVPreferredFocus, tvParallaxProperties, children) {
  return ReasonReact.wrapJsForReason(NativeBase.ListItem, {
              style: Js_undefined.fromOption(style),
              accessible: Js_undefined.fromOption(UtilsRN$BsNativeBase.optBoolToOptJsBoolean(accessible)),
              hitSlop: Js_undefined.fromOption(hitSlop),
              onLayout: Js_undefined.fromOption(onLayout),
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
              delayLongPress: Js_undefined.fromOption(delayLongPress),
              delayPressIn: Js_undefined.fromOption(delayPressIn),
              delayPressOut: Js_undefined.fromOption(delayPressOut),
              disabled: Js_undefined.fromOption(disabled),
              onLongPress: Js_undefined.fromOption(onLongPress),
              onPress: Js_undefined.fromOption(onPress),
              onPressIn: Js_undefined.fromOption(onPressIn),
              onPressOut: Js_undefined.fromOption(onPressOut),
              pressRetentionOffset: Js_undefined.fromOption(pressRetentionOffset),
              activeOpacity: Js_undefined.fromOption(activeOpacity),
              onHideUnderlay: Js_undefined.fromOption(onHideUnderlay),
              onShowUnderlay: Js_undefined.fromOption(onShowUnderlay),
              underlayColor: Js_undefined.fromOption(underlayColor),
              hasTVPreferredFocus: Js_undefined.fromOption(hasTVPreferredFocus),
              tvParallaxProperties: Js_undefined.fromOption(tvParallaxProperties),
              itemDivider: Js_undefined.fromOption(itemDivider),
              button: Js_undefined.fromOption(button),
              noBorder: Js_undefined.fromOption(noBorder)
            }, children);
}

exports.make = make;
/* ReasonReact Not a pure module */
