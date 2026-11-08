import { useState, useEffect } from "react";
import "./App.css";

function BackgroundChanger() {
  const [count, setCount] = useState(0);

    // useEffect to detect changes in count
      useEffect(() => {
          if (count >= 5) {
                document.body.style.backgroundColor = "lightblue";
                    } else {
                          document.body.style.backgroundColor = "";
                              }
                                }, [count]); // Dependency ensures effect runs when count changes

                                  return (
                                      <div className="container">
                                            <h1>Count: {count}</h1>
                                                  
                                                        <button 
                                                                className="btn" 
                                                                        onClick={() => setCount(count + 1)}
                                                                              >
                                                                                      Increase Count
                                                                                            </button>

                                                                                                  <button 
                                                                                                          className="btn reset-btn" 
                                                                                                                  onClick={() => setCount(0)}