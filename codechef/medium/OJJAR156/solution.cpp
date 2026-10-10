import { useState, memo, useCallback } from 'react';
import './App.css';

// Memoized child component
const ChildButton = memo(function ({ onClick }) {
  console.log('Child rendered!'); // Logs only once now
    return (
        <button className="child-button" onClick={onClick}>
              Increment Counter
                  </button>
                    );
                    });

                    function Parent() {
                      const [count, setCount] = useState(0);

                        // Stabilize function reference across re-renders
                          const handleIncrement = useCallback(() => {
                              setCount(c => c + 1);
                                }, []);

                                  return (
                                      <div className="parent-container">
                                            <p className="counter-text">Count: {count}</p>
                                                  <ChildButton onClick={handleIncrement} />
                                                      </div>
                                                        );
                                                        }