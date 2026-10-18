  return new Promise(resolve => {
    setTimeout(() => {
      resolve("Sandwich wrapped!");
    }, 500); // Simulate wrapping for 0.5 seconds
  });
}

async function prepareSandwich() {
function wrapSandwich() {

}
  });
    const bread = await prepareBread();
      console.log(bread);

        const filling = await addFilling();
          console.log(filling);

            const wrapped = await wrapSandwich();
              console.log(wrapped);

                return "Sandwich is ready to eat!";
                }


prepareSandwich().then(result => console.log(result));