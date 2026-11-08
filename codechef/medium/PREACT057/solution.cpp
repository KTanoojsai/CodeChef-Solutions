
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