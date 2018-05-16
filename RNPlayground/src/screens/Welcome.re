open BsReactNative;
open BsNativeBase;

type state = {
  ready: bool,
};

type action =
  | SetReady;

let component = ReasonReact.reducerComponent("Welcome");

let fontsPromise = BsExpo.Font.loadAll([
  ("Roboto",  BsReactNative.Packager.require("native-base/Fonts/Roboto.ttf")),
  ("Roboto_medium",  BsReactNative.Packager.require("native-base/Fonts/Roboto_medium.ttf")),
  ("Ionicons", BsReactNative.Packager.require("@expo/vector-icons/fonts/Ionicons.ttf")),
]);

let make = (_children) => {
  ...component,
  initialState: () => {ready: false},
  reducer: (action, _state) =>
    switch(action) {
    | SetReady => ReasonReact.Update({ready: true})
    },
  render: _self =>
  <StyleProvider>
    <View>
      <Text>{ReasonReact.string("Text in Welcome")}</Text>
    </View>
  </StyleProvider>
};

let jsComponent = ReasonReact.wrapReasonForJs(~component, _jsProps => make([||]));
