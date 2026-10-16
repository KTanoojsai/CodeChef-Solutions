              // Return a brand new object with the updated count
                    return { count: state.count + 1 };
                        }
                            case 'DECREMENT': {
                                  // Return a brand new object with the updated count
                                        return { count: state.count - 1 };
                                            }
                                                case 'RESET': {
                                                      // Return a brand new object with the count reset
                                                            return { count: 0 };
                                                                  // Or you could return the initialState directly: return initialState;
                                                                      }
                                                                          default: {
                                                                                // If the action type is unknown, return the existing state
                                                                                      console.log('Unknown action type');
                                                                                            return state;
                                                                                                }
                                                                                                  }
                                                                                                  }

                                                                                                  // 3. The Counter Component
                                                                                                  function Counter() {
                                                                                                    // Setup useReducer
                                                                                                      const [state, dispatch] = useReducer(reducer, initialState);

                                                                                                        return (
                                                                                                            <div className="counter">
                                                                                                                  <h2>Counter</h2>
                                                                                                                        <p className="count-display">Count: {state.count}</p>
                                                                                                                              <div className="button-group">