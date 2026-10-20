                                                      export default App;
                                                    </div>
                                                      );
                                                      }

                                    <div>
                                          <UserProfile name="Alice" age={25} />
                                                <UserProfile name="Bob" age={30} />
                              // Step 3 & 4: Render UserProfile twice in App with different props
                              function App() {
                                return (
            <h2>User Profile:</h2>
                  <p>Name: {props.name}</p>
                        <p>Age: {props.age}</p>
                            </div>
                              );
                              }

function UserProfile(props) {
  return (
      <div>
import React from 'react';

// Step 1 & 2: Define UserProfile component