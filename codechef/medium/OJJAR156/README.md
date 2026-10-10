# OJJAR156

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Task - Optimize Function Props with useCallback

Problem: A parent component (Parent) passes an increment handler to a memoized child button (ChildButton). Every time the counter updates, the child re-renders unnecessarily because the function reference changes. Use useCallback to stabilize the function reference and prevent child re-renders.

 **Key Success Signs:** 

- Counter increments correctly (Count: 3 after 3 clicks)
- Console shows "Child rendered!" only once
- Button remains interactive with proper styling

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-10T16:49:42.383Z  

```cpp
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
```

---

[View on CodeChef](https://www.codechef.com/problems/OJJAR156)