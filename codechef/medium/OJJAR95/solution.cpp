                                              <li key={index} style={{ margin: "8px 0" }}>
                                                        <span style={{ marginRight: "10px" }}>{task}</span>
                                                                  <button onClick={() => removeTask(index)}>Remove</button>
                                                                          </li>
                                    ))}
                                        </ul>
                                  );
                                }

                                export default App;
                                  