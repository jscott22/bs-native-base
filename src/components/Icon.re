[@bs.module "native-base"] external icon : ReasonReact.reactClass = "Icon";

type iconType =
  | Entypo
  | EvilIcons
  | Feather
  | FontAwesome
  | Foundation
  | Ionicons
  | MaterialCommunityIcons
  | MaterialIcons
  | Octicons
  | SimpleLineIcons
  | Zocial;

let make =
    (
      ~style=?,
      ~iconType: option(iconType)=?,
      ~name: option(string)=?,
      ~ios: option(string)=?,
      ~android: option(string)=?,
      ~active: option(bool)=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=icon,
    ~props=
      Js.Undefined.(
        {
          "style": fromOption(style),
          "type":
            switch (iconType) {
            | Some(Entypo) => "Entypo"
            | Some(EvilIcons) => "EvilIcons"
            | Some(Feather) => "Feather"
            | Some(FontAwesome) => "FontAwesome"
            | Some(Foundation) => "Foundation"
            | Some(Ionicons) => "Ionicons"
            | Some(MaterialCommunityIcons) => "MaterialCommunityIcons"
            | Some(MaterialIcons) => "MaterialIcons"
            | Some(Octicons) => "Octicons"
            | Some(SimpleLineIcons) => "SimpleLineIcons"
            | Some(Zocial) => "Zocial"
            | None => "Ionicons"
            },
          "name": fromOption(name),
          "ios": fromOption(ios),
          "android": fromOption(android),
          "active": fromOption(active),
        }
      ),
    children,
  );
