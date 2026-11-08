
                                                                                  setIsSubmitting(false);
                                                                                    };

                                                                                      const isLogin = type === 'login';

                                                                                        return (
                                                                                            <div className="auth-container">
                                                                                                  <h2>{isLogin ? 'Login' : 'Create Account'}</h2>
                                                                                                        <form className="auth-form" onSubmit={handleSubmit}>
                                                                                                                <div className="form-group">
                                                                                                                          <label htmlFor="username">Username</label>
                                                                                                                                    <input
                                                                                                                                                type="text"
                                                                                                                                                            id="username"
                                                                                                                                                                        value={username}
                                                                                                                                                                                    onChange={(e) => setUsername(e.target.value)}
                                                                                                                                                                                                required
                                                                                                                                                                                                          />
                                                                                                                                                                                                                  </div>
                                                                                                                                                                                                                          <div className="form-group">
                                                                                                                                                                                                                                    <label htmlFor="password">Password</label>
                                                                                                                                                                                                                                              <input
                                                                                                                                                                                                                                                          type="password"
                                                                                                                                                                                                                                                                      id="password"
                                                                                                                                                                                                                                                                                  value={password}
                                                                                                                                                                                                                                                                                              onChange={(e) => setPassword(e.target.value)}
                                                                                                                                                                                                                                                                                                          required
                                                                                                                                                                                                                                                                                                                    />