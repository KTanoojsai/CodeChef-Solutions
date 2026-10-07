        useEffect(() => {
            // Timeout ID reference
                let timeoutId = null;

                    // Resize handler function
                        const handleResize = () => {
                              clearTimeout(timeoutId);
                                    timeoutId = setTimeout(() => {
                                            setWidth(window.innerWidth);
                                                  }, delay);
                                                      };

                                                          // Add event listener
                                                              window.addEventListener("resize", handleResize);

                                                                  // Cleanup function
                                                                      return () => {
                                                                            window.removeEventListener("resize", handleResize);
                                                                                  clearTimeout(timeoutId);
                                                                                      };
                                                                                        }, [delay]);

                                                                                          // Return current width
                                                                                            return width;
                                                                                            };

                                                                                            const ResponsiveComponent = () => {
                                                                                              const width = useWindowWidth();

                                                                                                return (
                                                                                                    <div style={{ padding: "20px", textAlign: "center" }}>
                                                                                                          <h2>Current Window Width:</h2>
                                                                                                                <p style={{ fontSize: "24px", fontWeight: "bold", color: "blue" }}>
                                                                                                                        {width}px
                                                                                                                              </p>
                                                                                                                                  </div>
                                                                                                                                    );
                                                                                                                                    };

                                                                                                                                    export default ResponsiveComponent;