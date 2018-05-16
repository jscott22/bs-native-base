let routeConfig: StackNavigator.routesConfig = {
  "welcome": {
    "screen": Welcome.jsComponent
  }
};

let component = StackNavigator.create(~routeConfig);
