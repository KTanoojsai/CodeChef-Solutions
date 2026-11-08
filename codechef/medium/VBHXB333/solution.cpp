                return res.status(400).json({
                        message: 'Please provide both username and password'
                              });
                                  }

                                      const existingUser = await User.findOne({ username });

                                          if (existingUser) {
                                                return res.status(400).json({
                                                        message: 'User with this username already exists'
                                                              });
                                                                  }

                                                                      const newUser = new User({ username, password });
                                                                          await newUser.save();

                                                                              const token = jwt.sign(
                                                                                    { userId: newUser._id },
                                                                                          process.env.JWT_SECRET,
                                                                                                { expiresIn: '1h' }
                                                                                                    );

                                                                                                        res.status(201).json({
                                                                                                              message: 'User registered successfully',
                                                                                                                    token,
                                                                                                                          user: {
                                                                                                                                  id: newUser._id,
                                                                                                                                          username: newUser.username
                                                                                                                                                }