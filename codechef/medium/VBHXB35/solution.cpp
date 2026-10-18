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