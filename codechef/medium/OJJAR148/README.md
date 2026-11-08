# OJJAR148

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Build React Travel Guide With Lazy Loading

You are building a Travel Guide app in React. The app has the following pages:

🏠 Home – Welcomes the user. 🌍 Destinations – Shows a list of travel destinations. 📖 About – Tells about the travel guide company. 📞 Contact – Shows contact info.

 **Tasks** 

- To optimize the app by implementing Lazy Loading for these pages(Complete App.jsx).
- Style the Heading - Apply the following styles to the # (Complete Home.jsx) Font size: 36px Font weight: bold Color: #2c3e50 Margin-bottom: 20px
- Style the Paragraph - Apply the following styles to the (Complete Home.jsx) Font size: 18px Color: #555
- Add a Background - Add a background color #f0f0f0 to the body(Complete Home.jsx).

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-08T21:03:07.868Z  

```cpp
                            };
                              }, []);

                                const headingStyle = {
                                    fontSize: "36px",
                                        fontWeight: "bold",
                                            color: "#2c3e50",
                                                marginBottom: "20px",
                                                  };

                                                    const paragraphStyle = {
                                                        fontSize: "18px",
                                                            color: "#555",
                                                              };

                                                                return (
                                                                    <div className="home">
                                                                          <h1 style={headingStyle}>Welcome to the travel guide</h1>
                                                                                <p style={paragraphStyle}>
                                                                                        Discover amazing destinations, plan your dream trips, and explore the world with our ultimate travel guide.
                                                                                              </p>
                                                                                                  </div>
                                                                                                    );
                                                                                                    }
```

---

[View on CodeChef](https://www.codechef.com/problems/OJJAR148)