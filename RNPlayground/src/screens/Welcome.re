open BsReactNative;
open BsNativeBase;

type state = {
  ready: bool,
};

type action =
  | SetReady;


  let styles = StyleSheet.create(Style.({
    "imageContainer": style([flex(1.)]),
    "logo": style([width(Pt(90.)), alignSelf(Center), maxHeight(Pt(100.))]),
  }));

let component = ReasonReact.reducerComponent("Welcome");

let fontsPromise = BsExpo.Font.loadAll([
  ("Roboto",  Packager.require("native-base/Fonts/Roboto.ttf")),
  ("Roboto_medium",  Packager.require("native-base/Fonts/Roboto_medium.ttf")),
  ("Ionicons", Packager.require("@expo/vector-icons/fonts/Ionicons.ttf")),
]);


let make = (_children) => {
  ...component,
  initialState: () => {ready: false},
  didMount: (self) => {
    fontsPromise
    |> Js.Promise.then_((_value) => {
      self.send(SetReady);
      Js.Promise.resolve(());
    })
    |> Js.Promise.catch(err => {
      Js.log2("Error!", err);
      Js.Promise.resolve(());
    })
    |> ignore;
    ()
  },
  reducer: (action, _state) =>
    switch(action) {
    | SetReady => ReasonReact.Update({ready: true})
    },
  render: self => {
    if(self.state.ready) {
      <StyleProvider>
      <Container style=styles##imageContainer>
          <StatusBar barStyle=`lightContent />
          <ImageBackground style=styles##imageContainer source=Required(Packager.require("../../../../assets/launchscreen-bg.png")) />
      </Container>
    </StyleProvider>
    } else {
      <View>
        <Text>{ReasonReact.string("LOADING!!!")}</Text>
      </View>
    }
  }
};

let jsComponent = ReasonReact.wrapReasonForJs(~component, _jsProps => make([||]));
