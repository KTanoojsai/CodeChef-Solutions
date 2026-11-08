# VBHXB22

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Simulate File Processing with Error Handling

Let's practice how to handle errors in using different functions:

### Task:
- Complete the code to handle errors using async/await.
- Complete the code to handle errors using.then()/.catch().
- Complete the code to handle errors using callback function and print the result or error in the given way:

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-08T21:12:52.931Z  

```cpp
                                                                                                                                                                                                                // 3. Wrapper Functions

                                                                                                                                                                                                                // Using Callback
                                                                                                                                                                                                                function getWeatherCallback(city) {
                                                                                                                                                                                                                    fetchWeatherWithCallback(city, (error, result) => {
                                                                                                                                                                                                                            if (error) {
                                                                                                                                                                                                                                        console.log("Callback Error:", error.message || error);
                                                                                                                                                                                                                                                } else {
                                                                                                                                                                                                                                                            console.log("Callback:", result);
                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                        });
                                                                                                                                                                                                                                                                        }

                                                                                                                                                                                                                                                                        // Using Promise (.then / .catch)
                                                                                                                                                                                                                });
                                                                                                                                                                                                                }

                                                                                                                                                                                                            }, 50);
                                                                                                                                                                                                    }
                                                                                                                                                                                        reject(new Error(`Could not fetch weather for ${city}`));
                                                                                                                                                                        } else {
                                                                                                                                                            resolve({ city: city, temp: '30°C', condition: 'Sunny' });
                                                                                                                                            } else if (city) {
                                                                                                                                resolve(weatherData[city]);
                                                                                                                if (weatherData[city]) {
                                                                                                    setTimeout(() => {
                                                                                            return new Promise((resolve, reject) => {
                                                                                        function fetchWeatherWithPromise(city) {
                                                                                        // 2. Promise-based weather fetch
```

---

[View on CodeChef](https://www.codechef.com/problems/VBHXB22)