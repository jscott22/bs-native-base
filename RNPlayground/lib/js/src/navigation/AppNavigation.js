// Generated by BUCKLESCRIPT VERSION 3.0.0, PLEASE EDIT WITH CARE
'use strict';

var Welcome$RnPlayground = require("../screens/Welcome.js");
var StackNavigator$RnPlayground = require("../types/StackNavigator.js");

var routeConfig = {
  welcome: {
    screen: Welcome$RnPlayground.jsComponent
  }
};

var component = StackNavigator$RnPlayground.create(routeConfig);

exports.routeConfig = routeConfig;
exports.component = component;
/* component Not a pure module */
