import { main } from "@quench-lang/core";

(async () => {
  document.getElementById("p").innerText = await main();
})();
