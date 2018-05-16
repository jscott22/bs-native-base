[@bs.module "native-base"]
external header : ReasonReact.reactClass = "Header";

let make = (~style=?, ~searchBar: bool, ~rounded: bool) =>
      ReasonReact.wrapJsForReason(
        ~reactClass=header,
        ~props=
          Props.extendView(
            Js.Undefined.(
              {
                "style": fromOption(style),
                "searchBar": searchBar,
                "rounded": rounded
              }
            )
          )
        );
