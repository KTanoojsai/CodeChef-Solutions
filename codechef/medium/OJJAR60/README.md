# OJJAR60

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Task - Dynamic Greeting Card

Update the given React component to display dynamic values and additional information inside the `<div>`.

- Show dynamic values: Add a <p> tag to display: <p>Hello, my name is {name}.</p> Add another <p> tag to show age: <p>I am {age} years old.</p>
- Display the current year dynamically: Use JavaScript inside JSX to show the year: <p>Year: {new Date().getFullYear()}</p>
- Add a final message: Insert this at the end: <p>Enjoy your day! 🎉</p>

By following these instructions, you will create a structured and dynamic greeting card in React! 🚀

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-11T14:43:35.517Z  

```cpp

                                                                                                                                                          {/* Displaying dynamic values */}
                                                                                                                                                                      <p>Hello, my name is {name}.</p>  
                                                                                                                                                                                  <p>I am {age} years old.</p>  
                                                                                                                      <div style={cardStyle}>
                                                                                                                                  {/* Greeting message */}
                                                                                                                                              <h2 style={headingStyle}>{greeting}</h2>  

                                                                                                          };

                                                                                                              return (  

                                                                                      const headingStyle = {
                                                                                              color: "blue",
                                                                                                      fontSize: "20px"
                                                                      textAlign: "center",
                                                                              boxShadow: "2px 2px 10px rgba(0,0,0,0.1)"
                                                                                  }; 
                                              padding: "20px", 
                                                      borderRadius: "10px", 
                                                              width: "250px",
                              const cardStyle = {
                                      border: "2px solid #333", 
                      const greeting = "Happy Birthday!";  

                          // Inline CSS styling
              const name = "John"; 
                  const age = 25; // Number type (demonstrating type conversion)
export function App() {  
          // Defining dynamic values
```

---

[View on CodeChef](https://www.codechef.com/problems/OJJAR60)