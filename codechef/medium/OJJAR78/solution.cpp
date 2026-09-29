import React from 'react';

export default function App() {
  function addPoints(points) {
      console.log(`Added ${points} points!`);
        }

          function subtractPoints(points) {
              console.log(`Subtracted ${points} points!`);
                }

                  function resetScore() {
                      console.log("Score reset!");
                        }

                          return (
                              <div>
                                    <button onClick={() => addPoints(5)}>+5 Points</button>
                                          <button onClick={() => subtractPoints(3)}>-3 Points</button>
                                                <button onClick={resetScore}>Reset</button>
                                                    </div>
                                                      );
                                                      }