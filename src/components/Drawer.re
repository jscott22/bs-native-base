[@bs.module "native-base"]
external drawer : ReasonReact.reactClass = "Drawer";

type drawerType = 
| Displace
| Overlay
| Static;

type callBack = (unit) => unit;

let make = (
  ~drawerType: option(drawerType)=?, 
  ~content: option(ReasonReact.reactElement)=?,
  ~onClose: option(callBack)=?, 
  ~onCloseStart: option(callBack)=?, 
  ~onOpen: option(callBack)=?, 
  ~onOpenStart: option(callBack)=?, 
  ~tapToClose: option(bool)=?,
  children) =>
      ReasonReact.wrapJsForReason(
        ~reactClass=drawer,
        ~props=Js.Undefined.(
              {
                "type": switch(drawerType) {
                | Some(Displace) => "displace"
                | Some(Overlay) => "overlay"
                | Some(Static) => "static"
                | None => ""
                },
                "content": fromOption(content),
                "onClose": fromOption(onClose),
                "onCloseStart": fromOption(onCloseStart),
                "onOpen": fromOption(onOpen),
                "onOpenStart": fromOption(onOpenStart),
                "tapToClose": fromOption(tapToClose)
              }
          ),
        children
        );
