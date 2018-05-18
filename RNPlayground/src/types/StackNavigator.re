type routeConfig = {
  .
  "screen": ReasonReact.reactClass
};

type routesConfig = {
  .
  "drawer": routeConfig
};

type stackNavigatorConfig = {
  .
  "initialRouteName": string,
  "headerMode": string
};

[@bs.module "react-navigation"]
external createStackNavigator : (routesConfig, stackNavigatorConfig) => ReasonReact.reactElement = "";

[@bs.module "react-navigation"] external tabBarBottom : ReasonReact.reactElement = "TabBarBottom";

let create = (~routeConfig, ~stackNavigatorConfig) => createStackNavigator(routeConfig, stackNavigatorConfig);
