                                };
                                    
                                        window.addEventListener('keydown', handleKeyPress);
                                            return () => window.removeEventListener('keydown', handleKeyPress);
                                              }, []);

                                                return (
                                                    <div>
                                                          <button onClick={() => setIsOn(current => !current)}>
                                                                  Toggle Light (Button)
                                                                        </button>
                                                                              <p>Light is {isOn ? "ON 🌟" : "OFF 🌑"}</p>
                                                                                    <small>Press "L" key to toggle!</small>
                                                                                        </div>
                                                                                          );
                                                                                          }

                                                                                          export default LightSwitch;
                      setIsOn(current => !current);
                            }
              if (e.code === 'KeyL') {
        const handleKeyPress = (e) => {

    useEffect(() => {
function LightSwitch() {
  const [isOn, setIsOn] = useState(false);
import React, { useState, useEffect } from "react";
