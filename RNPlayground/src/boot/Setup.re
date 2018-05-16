/* open BsReactNative;
open BsNativeBase;

type state = {
  ready: bool,
};

type action =
  | SetReady;

let component = ReasonReact.reducerComponent("Setup");

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
      <Text>{ReasonReact.string("Text in Setup")}</Text>
    </View>
  </StyleProvider>
};

let default = ReasonReact.wrapReasonForJs(~component, _jsProps => make([||])); */
