let component = ReasonReact.statelessComponent("Home");

let make = (_children) => {
  ...component,
  render: _self =>
    <button>
      {ReasonReact.string("Hello!")}
    </button>
};

