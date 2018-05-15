type routeConfig = {
  .
  "screen": ReasonReact.reactClass
};

type routesConfig = {
  .
  "welcome": routeConfig,
};

[@bs.module "react-navigation"]
external createStackNavigator : (routesConfig) => ReasonReact.reactClass = "";

[@bs.module "react-navigation"] external tabBarBottom : ReasonReact.reactClass = "TabBarBottom";

let create = (~routeConfig) => createStackNavigator(routeConfig);
