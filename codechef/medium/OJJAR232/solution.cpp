                                                                                                                            generateRandomCircle();
                                                                                                                                }, 1000);

                                                                                                                                    return () => clearInterval(intervalRef.current);
                                                                                                                                      }, [timeLeft]);

                                                                                                                                        useEffect(() => {
                                                                                                                                            if (timeLeft <= 0) {
                                                                                                                                                  clearInterval(intervalRef.current);
                                                                                                                                                        return;
                                                                                                                                                            }

                                                                                                                                                                const timer = setInterval(() => {
                                                                                                                                                                      setTimeLeft((prev) => prev - 1);
                                                                                                                                                                          }, 1000);

                                                                                                                                                                              return () => clearInterval(timer);
                                                                                                                                                                                }, [timeLeft]);

                                                                                                                                                                                  return (
                                                                                                                                                                                      <div className="game-container">
                                                                                                                                                                                            <h1>🎯 Click the Circles!</h1>
                                                                                                                                                                                                  <p>Time Left: {timeLeft}s</p>
                                                                                                                                                                                                        <p>Score: {score}</p>

                                                                                                                                                                                                              {circles.map((circle) => (
                                                                                                                                                                                                                      <Circle
                                                                                                                                                                                                                                key={circle.id}
                                                                                                                                                                                                                                          x={circle.x}
                                                                                                                                                                                                                                                    y={circle.y}