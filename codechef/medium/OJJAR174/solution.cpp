        <button {...otherProps} className={finalClassName} type="button">
              {children}
                  </button>
                    );
                    }

                    function App() {
                      return (
                          <div>
                                <p>Basic Button (should have class "btn"):</p>
                                      <Button onClick={() => alert('Default clicked!')}>
                                              Default Button
                                                    </Button>

                                                          <p>Primary Button (should have classes "btn btn-primary"):</p>
                                                                <Button
                                                                        className="btn-primary"
                                                                                onClick={() => alert('Primary clicked!')}
                                                                                      >
                                                                                              Primary Button
                                                                                                    </Button>

                                                                                                          <p>Button trying to override type (should remain type="button"):</p>
                                                                                                                <Button
                                                                                                                        className="btn-secondary"
                                                                                                                                type="submit"
                                                                                                                                        onClick={() => alert('Secondary clicked!')}
                                                                                                                                              >
                                                                                                                                                      Secondary (Still a Button)
                                                                                                                                                            </Button>

                                                                                                                                                                  <p>Disabled Button:</p>
                                                                                                                                                                        <Button disabled>
                                                                                                                                                                                Disabled Button
                                                                                                                                                                                      </Button>
                                                                                                                                                                                          </div>
                                                                                                                                                                                            );
                                                                                                                                                                                            }

                                                                                                                                                                                            export default App;