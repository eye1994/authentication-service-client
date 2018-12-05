let component = ReasonReact.statelessComponent("NotFound");

let make = _children => {
  ...component,
  render: _self =>
    <div>
      <header>
        <h1>{ReasonReact.string("Page not found")}</h1>
      </header>
      <div>
        <span>
          (
            ReasonReact.string(
              "The page you're looking for can't be found. Go home by ",
            )
          )
        </span>
        <Link href="/"> (ReasonReact.string("clicking here!")) </Link>
      </div>
    </div>,
};