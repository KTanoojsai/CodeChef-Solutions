# VBHXB35

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### The Countdown Challenge!

You're building a countdown timer that:

1] Starts immediately after the program runs (setImmediate)
2] Prints a countdown every second (setInterval)
3] Prints a final message and stops the countdown after 3 seconds (setTimeout)

However, the code is incomplete. Fill in the blanks to complete it using the correct timer functions.

 **Expected Output:** 

```
Countdown is starting...
3 seconds left
2 seconds left
1 seconds left
Countdown complete!

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-18T06:49:56.157Z  

```cpp
                                                                                      }, 1000);
                                                                                        });
                                                                                        }

                                                                                        module.exports = { runCountdown };

                                                                                        if (require.main === module) {
                                                                                          runCountdown();
                                                                                          }

                      console.log(`${seconds} seconds left`);
                            seconds--;
                                  if (seconds === 0) {
                                          clearInterval(intervalId); // TODO: stop the repeated timer
                                                  // After last countdown, wait 1 second then print final message
                                                          setTimeout(() => { // TODO: run once after delay
                                                                    console.log("Countdown complete!");
                                                                            }, 1000);
                                                                                  }
            let seconds = 3;
                const intervalId = setInterval(() => { // TODO: run repeatedly
    setImmediate(() => { // TODO: run immediately after current code
        console.log("Countdown is starting...");
function runCountdown() {
```

---

[View on CodeChef](https://www.codechef.com/problems/VBHXB35)