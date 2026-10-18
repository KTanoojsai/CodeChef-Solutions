                                                                      }
                                                                      }

                                                                      // 2. Promise .then() / .catch() version
                                                                      function getUserDataPromise() {
                                                                        fetchUserData()
                                                                            .then((userData) => {
                                                                                  console.log("Promise → User data:", userData);
                                                                                      })
                                                                                          .catch((error) => {
                                                                                                console.error("Promise → Error fetching user data:", error);
                                                                                                    });
                                                                                                    }

                                                                                                    // 3. Callback-based simulation
                                                                                                    function fetchUserDataCallback(callback) {
                                                                                                      setTimeout(() => {
                                                                                                          const success = Math.random() > 0.5;
                                                                                                              if (success) {
                                                                                                                    callback(null, { id: 123, name: "John Doe" });
                                                                                                                        } else {
                                                                                                                              callback("Failed to fetch user data.", null);
                                                                                                                                  }
                                                                                                                                    }, 50);
                                                                                                                                    }

                                                                                                                                    function getUserDataCallback() {
                                                                                                                                      fetchUserDataCallback((err, result) => {
                                                                                                                                          if (err) {