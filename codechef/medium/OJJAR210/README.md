# OJJAR210

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### React Counter App

We're working on a  **React counter app**  that should display a small animated "fling" message (like `+5`) every time the user clicks the increment button.

 **Application should be working like this** 

However, the current implementation isn’t working as expected. You’re already familiar with the concept — now it’s time to fix the behavior.

#### What You Need to Do
- Ensure the fling message shows every time the user clicks an increment button — even if the same button is clicked quickly multiple times! Solution Hint: Use the key property to help React re-render the element.
- Ensure the fling message doesn't show on initial render, but only when the count is incremented.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-16T17:31:34.463Z  

```cpp
                                                                                                if (flingTimeoutRef.current) {
                                                                                                        clearTimeout(flingTimeoutRef.current);
                                                                                                              }
                                                                                                                  };
                                                                                                                    }, []); // Empty dependency array ensures this runs only on mount and unmount

                                                                                                                      console.log(`Rendering App. Count: ${count}, Fling Message: "${flingMessage}"`);

                                                                                                                        return (
                                                                                                                            <div className={styles.container}>
                                                                                                                                  <h1>Animated Counter</h1>

                                                                                                                                        {/* Counter Display Area - Relative positioning context for fling message */}
                                                                                                                                              <div key={count} className={styles.counterDisplayWrapper}>
                                                                                                                                                      <div className={styles.counterDisplay}>
                                                                                                                                                                {/* Animated count value */}
                                                                                                                                                                          <span className={styles.animatedValue}>
                                                                                                                                                                                      {count}
                                                                                                                                                                                                </span>
                                                                                                                                                                                                        </div>

                                                                                                                                                                                                                {/* ✅ Use key to reset animation on value change */}
                                                                                                                                                                                                                        {flingMessage && (
                                                                                                                                                                                                                                  <div key={count} className={styles.flingMessage}>
                                                                                                                                                                                                                                              {flingMessage}
                                                                                                                                                                                                                                                        </div>
                                                                                                                                                                                                                                                                )}
                                                                                                                                                                                                                                                                      </div>


```

---

[View on CodeChef](https://www.codechef.com/problems/OJJAR210)