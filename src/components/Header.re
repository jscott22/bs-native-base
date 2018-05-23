[@bs.module "native-base"] external header : ReasonReact.reactClass = "Header";

let make =
    (
      ~style=?,
      ~searchBar: option(bool)=?,
      ~rounded: option(bool)=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=header,
    ~props=
      Props.extendView(
        Js.Undefined.(
          {
            "style": fromOption(style),
            "searchBar": fromOption(searchBar),
            "rounded": fromOption(rounded),
          }
        ),
      ),
    children,
  );
