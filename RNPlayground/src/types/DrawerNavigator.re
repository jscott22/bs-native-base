type routeConfig = {
  .
  "screen": ReasonReact.reactClass
};

type routesConfig = {
  .
  "welcome": routeConfig,
};

[@bs.module "react-navigation"]
external createDrawerNavigator : (routesConfig) => ReasonReact.reactElement = "";

[@bs.module "react-navigation"] external tabBarBottom : ReasonReact.reactElement = "TabBarBottom";

let create = (~routeConfig) => createDrawerNavigator(routeConfig);
