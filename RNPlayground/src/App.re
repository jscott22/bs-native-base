let routeConfig: StackNavigator.routesConfig = {
  "welcome": {
    "screen": Welcome.jsComponent
  }
};

let component = DrawerNavigator.create(~routeConfig);
