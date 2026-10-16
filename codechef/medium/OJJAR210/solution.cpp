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

