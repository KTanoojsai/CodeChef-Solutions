}

function freezeMixture(mixedIngredients) {
  return new Promise((resolve) => {
    setTimeout(() => {
      resolve("Ice cream frozen! using: " + mixedIngredients);
    }, 500);
  });
}

function addToppings(frozenIceCream) {
    return new Promise((resolve) => {
      setTimeout(() => {
        resolve("Ice cream with toppings: " + frozenIceCream);
      }, 500);
    });
  }

// Your code starts here: Create the Promise chain that calls these functions in order.
console.log("Ice cream making in progress...");

getIngredients()
  .then((ingredients) => {
      console.log(ingredients);
          return mixIngredients(ingredients);
            })
              .then((mixedIngredients) => {
                  console.log(mixedIngredients);
                      return freezeMixture(mixedIngredients);