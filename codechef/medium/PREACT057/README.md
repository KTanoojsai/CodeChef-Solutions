# PREACT057

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Cleanup in React
#### Task: Window Size Tracker

Create a component that displays and updates the window size when the user resizes the browser. Follow these steps:

- Display Initial Size: Show the current window width and height when the component loads.
- Update on Resize: Automatically update the displayed size when the window is resized.

A toggle button is provided to show/hide your component. (Write code in the  **`WindowTracker`**  component where indicated)

 **Hint:**  Use  **`window.addEventListener('resize',...)`** .

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-08T07:01:07.840Z  

```cpp

              useEffect(() => {
                  // Define resize handler
                      function handleResize() {
                            setWindowSize({
                                    width: window.innerWidth,
                                            height: window.innerHeight,
                                                  });
                                                      }

                                                          // Add event listener
                                                              window.addEventListener("resize", handleResize);

                                                                  // Cleanup: remove listener when component unmounts
                                                                      return () => {
                                                                            window.removeEventListener("resize", handleResize);
                                                                                };
                                                                                  }, []);

                                                                                    return (
                                                                                        <div>
                                                                                              <p>Window Width: {windowSize.width}px</p>
                                                                                                    <p>Window Height: {windowSize.height}px</p>
                                                                                                        </div>
                                                                                                          );
                                                                                                          }

                                                                                                          export default function App() {
                                                                                                            const [showTracker, setShowTracker] = useState(true);
```

---

[View on CodeChef](https://www.codechef.com/problems/PREACT057)