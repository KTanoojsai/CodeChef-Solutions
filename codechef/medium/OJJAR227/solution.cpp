import { useState, useEffect } from 'react';
import TimerControls from './TimerControls';

function CountdownTimer() {
  const [timeLeft, setTimeLeft] = useState(10);
    const [isRunning, setIsRunning] = useState(false);

      useEffect(() => {
          let interval;
              
                  if (isRunning && timeLeft > 0) {
                        interval = setInterval(() => {
                                setTimeLeft(prevTime => prevTime - 1);
                                      }, 1000);
                                          } else if (timeLeft === 0) {
                                                setIsRunning(false);
                                                    }

                                                        return () => clearInterval(interval);
                                                          }, [isRunning, timeLeft]);

                                                            return (
                                                                <div className="timer">
                                                                      <h2>Time Left: {timeLeft}s</h2>
                                                                            <TimerControls 
                                                                                    isRunning={isRunning}
                                                                                            onStart={() => setIsRunning(true)}
                                                                                                    onPause={() => setIsRunning(false)}
                                                                                                            onReset={() => {
                                                                                                                      setIsRunning(false);