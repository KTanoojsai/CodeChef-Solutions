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