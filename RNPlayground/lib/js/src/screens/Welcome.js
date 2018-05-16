// Generated by BUCKLESCRIPT VERSION 3.0.0, PLEASE EDIT WITH CARE
'use strict';

var Block = require("bs-platform/lib/js/block.js");
var Font$BsExpo = require("bs-expo/lib/js/src/font.js");
var ReasonReact = require("reason-react/lib/js/src/ReasonReact.js");
var Text$BsReactNative = require("bs-react-native/lib/js/src/components/text.js");
var View$BsReactNative = require("bs-react-native/lib/js/src/components/view.js");
var StyleProvider$BsNativeBase = require("bs-native-base/lib/js/src/components/StyleProvider.js");

var component = ReasonReact.reducerComponent("Welcome");

var fontsPromise = Font$BsExpo.loadAll(/* :: */[
      /* tuple */[
        "Roboto",
        require("native-base/Fonts/Roboto.ttf")
      ],
      /* :: */[
        /* tuple */[
          "Roboto_medium",
          require("native-base/Fonts/Roboto_medium.ttf")
        ],
        /* :: */[
          /* tuple */[
            "Ionicons",
            require("@expo/vector-icons/fonts/Ionicons.ttf")
          ],
          /* [] */0
        ]
      ]
    ]);

function make() {
  return /* record */[
          /* debugName */component[/* debugName */0],
          /* reactClassInternal */component[/* reactClassInternal */1],
          /* handedOffState */component[/* handedOffState */2],
          /* willReceiveProps */component[/* willReceiveProps */3],
          /* didMount */component[/* didMount */4],
          /* didUpdate */component[/* didUpdate */5],
          /* willUnmount */component[/* willUnmount */6],
          /* willUpdate */component[/* willUpdate */7],
          /* shouldUpdate */component[/* shouldUpdate */8],
          /* render */(function () {
              return ReasonReact.element(/* None */0, /* None */0, StyleProvider$BsNativeBase.make(/* None */0, /* array */[ReasonReact.element(/* None */0, /* None */0, View$BsReactNative.make(/* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0)(/* array */[ReasonReact.element(/* None */0, /* None */0, Text$BsReactNative.make(/* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* array */["Text in Welcome"]))]))]));
            }),
          /* initialState */(function () {
              return /* record */[/* ready */false];
            }),
          /* retainedProps */component[/* retainedProps */11],
          /* reducer */(function (_, _$1) {
              return /* Update */Block.__(0, [/* record */[/* ready */true]]);
            }),
          /* subscriptions */component[/* subscriptions */13],
          /* jsElementWrapped */component[/* jsElementWrapped */14]
        ];
}

var jsComponent = ReasonReact.wrapReasonForJs(component, (function () {
        return make(/* array */[]);
      }));

exports.component = component;
exports.fontsPromise = fontsPromise;
exports.make = make;
exports.jsComponent = jsComponent;
/* component Not a pure module */
