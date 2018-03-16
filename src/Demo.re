[%raw "require('isomorphic-fetch')"];

let api = "https://api.github.com/emojis";

Js.Promise.(
  Fetch.fetch(api)
  |> then_(Fetch.Response.json)
  |> then_((json) => Js.log(Js.Json.decodeObject(json)) |> resolve)
);
