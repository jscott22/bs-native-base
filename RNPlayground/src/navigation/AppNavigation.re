let drawerConfig: DrawerNavigator.routesConfig = {
  "welcome": {
    "screen": Welcome.jsComponent
  }
};

let drawerNavigatorConfig: DrawerNavigator.drawerNavigatorConfig = {
  "initialRouteName": "welcome",
  "contentOptions": {
    "activeTintColor": "#e91e63"
  }
};

let drawer = DrawerNavigator.create(~routeConfig=drawerConfig, ~drawerNavigatorConfig);
let routeConfig: StackNavigator.routesConfig = {
  "drawer": {
    screen: drawer
  }
};

let stackNavigatorConfig: StackNavigator.stackNavigatorConfig = {
    "initialRouteName": "drawer",
    "headerMode": "none"
};



let component = StackNavigator.create(~routeConfig, ~stackNavigatorConfig);
