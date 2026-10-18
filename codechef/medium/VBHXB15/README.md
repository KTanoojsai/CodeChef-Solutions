# VBHXB15

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Simulate Coffee Brewing Process

Let's create a worked example that simulates making a cup of coffee! We'll break the process down into asynchronous steps using Promises and chain them together. This will demonstrate how Promise chains can manage a sequence of operations.

Here's the scenario:

- Grind Beans: This asynchronous function will simulate grinding coffee beans. It will resolve with the string "Ground coffee beans".
- Brew Coffee: This asynchronous function will take the ground beans as input and simulate brewing the coffee. It will resolve with the string "Brewed coffee".
- Add Milk: This asynchronous function will take the brewed coffee as input and simulate adding milk. It will resolve with the string "Coffee with milk".

We'll use `setTimeout` to simulate the time each step takes. We'll also include a final `console.log` to confirm the entire process is asynchronous.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-18T06:37:06.712Z  

```cpp
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
```

---

[View on CodeChef](https://www.codechef.com/problems/VBHXB15)