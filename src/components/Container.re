[@bs.module "native-base"]
external container : ReasonReact.reactClass = "Container";

let make = (~style=?) =>
      ReasonReact.wrapJsForReason(
        ~reactClass=container,
        ~props=
          Props.extendView(
            Js.Undefined.(
              {
                "style": fromOption(style)
              }
            )
          )
        );
