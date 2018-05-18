type routeConfig = {
  .
  "screen": ReasonReact.reactClass
};

type routesConfig = {
  .
  "welcome": routeConfig,
};

type contentOptions = {
  .
  "activeTintColor": string
};

type drawerNavigatorConfig = {
  .
  "initialRouteName": string,
  "contentOptions": contentOptions
};

[@bs.module "react-navigation"]
external createDrawerNavigator : (routesConfig, drawerNavigatorConfig) => ReasonReact.reactClass = "";

let create = (~routeConfig, ~drawerNavigatorConfig) => createDrawerNavigator(routeConfig, drawerNavigatorConfig);
