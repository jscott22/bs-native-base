[@bs.module "native-base"]
external container : ReasonReact.reactClass = "Container";

let make = (~style=?, children) =>
      ReasonReact.wrapJsForReason(
        ~reactClass=container,
        ~props=
          Props.extendView(
            Js.Undefined.(
              {
                "style": fromOption(style)
              }
            )
          ),
        children
        );
