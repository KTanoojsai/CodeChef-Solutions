    return new Promise((resolve) => {
            setTimeout(() => {
                        console.log("Ground coffee beans");
                                    resolve("Ground coffee beans");
                                            }, 1000);
                                                });
                                                }

                                                // Function to simulate brewing coffee
                                                function brewCoffee(groundBeans) {
                                                    return new Promise((resolve) => {
                                                            setTimeout(() => {
                                                                        console.log("Brewed coffee");
                                                                                    resolve("Brewed coffee");
                                                                                            }, 1000);
                                                                                                });
                                                                                                }

                                                                                                // Function to simulate adding milk
                                                                                                function addMilk(brewedCoffee) {
                                                                                                    return new Promise((resolve) => {
                                                                                                            setTimeout(() => {
                                                                                                                        console.log("Coffee with milk");
                                                                                                                                    resolve("Coffee with milk");
                                                                                                                                            }, 1000);
                                                                                                                                                });
                                                                                                                                                }

                                                                                                                                                // Promise chain to simulate the coffee brewing process