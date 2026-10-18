            console.log("5. Notify customer (Immediate)");
              });

                setTimeout(() => {
                    console.log("4. Coffee ready after 0ms (Timeout)");
                      }, 0);

                        process.nextTick(() => {
                            console.log("2. Barista takes the order (nextTick)");
                              });

                                Promise.resolve().then(() => {
                                    console.log("3. Payment confirmed (Promise)");
                                      });

                                        console.log("6. Customer waits");
                                        }

                                        module.exports = { coffeeShopQueue };

                                        if (require.main === module) {
                                          coffeeShopQueue();
                                          }
