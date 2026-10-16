
function Header() {
  const { theme, toggleTheme } = useTheme();

    const styles = {
        padding: "1rem",
            display: "flex",
                justifyContent: "space-between",
                    alignItems: "center",
                        backgroundColor: theme === "light" ? "#eee" : "#333",
                            color: theme === "light" ? "#000" : "#fff"
                              };

                                return (
                                    <header style={styles}>
                                          <h1>🌙 Theme Switcher</h1>
                                                <button onClick={toggleTheme}>
                                                        Switch to {theme === "light" ? "Dark" : "Light"} Mode
                                                              </button>
                                                                  </header>
                                                                    );
                                                                    }

                                                                    export default Header;
                                                                    