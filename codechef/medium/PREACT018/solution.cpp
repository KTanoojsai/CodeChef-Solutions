                                                                                        src={avatarUrl}
                                                                                                alt={`${name}'s avatar`}
                                                                                                        style={avatarStyle}
                                                                                                              />
                                                                                                                    <h2 style={headingStyle}>{name}</h2>
                                                                                                                          <p>{bio}</p>
                                                                                                                              </div>
                                                                                                                                );
                                                                                                                                };

                                                                                                                                const App = () => {
                                                                                                                                  const avatarUrl = "https://cdn.codechef.com/images/problems/PREACT018/a29545c678c75e59bc684868407b1d13.webp";

                                                                                                                                    return (
                                                                                                                                        <div>
                                                                                                                                              <ProfileCard
                                                                                                                                                      name="John Doe"
                                                                                                                                                              bio="A passionate software developer."
                                                                                                                                                                      avatarUrl={avatarUrl}
                                                                                                                                                                            />
                                                                                                                                                                                </div>
                                                                                                                                                                                  );
                                                                                                                                                                                  };

                                                                                                                                                                                  export default App;