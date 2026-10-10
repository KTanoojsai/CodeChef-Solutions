import { useState, memo } from 'react';
import './App.css';

// Child Component wrapped with memo
const ExpensiveOperationChild = memo(function ExpensiveOperationChild({ data }) {
  // Heavy computation simulation
    let sum = 0;
      for (let i = 0; i < 1000000; i++) {
          sum += i;
            }

              console.log('Child rendered!');

                return (
                    <div className="child-container">
                          Heavy Calculation Result: {sum} (Data: {data})
                              </div>
                                );
                                });

                                // Parent Component
                                function ParentComponent() {
                                  const [count, setCount] = useState(0);

                                    return (
                                        <div className="parent-container">
                                              <button
                                                      className="counter-button"