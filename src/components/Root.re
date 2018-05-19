[@bs.module "native-base"]
external root : ReasonReact.reactClass = "Root";

let make = (~style=?, children) =>
      ReasonReact.wrapJsForReason(
        ~reactClass=root,
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
