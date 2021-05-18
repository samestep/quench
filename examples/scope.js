import Immutable from "https://example.com/quench.js";
const $main = $_ => (() => {
  const $x = "foo";
  const $y = "baz";
  (() => {
    const $x = "bar";
    console.log($x);
    console.log($y);
  })();
  console.log($x);
})();
$main();
