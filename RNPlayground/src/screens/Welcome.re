open ReasonReact;

open BsReactNative;
open BsNativeBase;

let styles =
  StyleSheet.create(
    Style.(
      {
        "container":
          style([
            flex(1.),
            alignItems(Center),
            justifyContent(Center),
          ]),
        "text":
          style([
            fontSize(Float(32.)),
            marginBottom(Pt(20.)),
            fontWeight(`Bold),
          ]),
      }
    ),
  );

let component = statelessComponent("Welcome");

let make = (_children) => {
  ...component,
  render: _self =>
    <Container>
      <Text style=styles##text> (string("Hello!")) </Text>
    </Container>,
};

let jsComponent = ReasonReact.wrapReasonForJs(~component, (_props) => make(()));
