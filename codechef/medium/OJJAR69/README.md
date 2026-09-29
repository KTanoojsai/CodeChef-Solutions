# OJJAR69

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### GreetingCard Component

Create personalized greeting cards that show each person's name, age, greeting message, and  **favorite color**  using React components.

 **Steps to Follow:** 

- Show Favorite Color in Greeting Card Modify the GreetingCard component to display the person's favorite color in a new paragraph (<p> tag) below their age. Use the existing favoriteColor prop to display this information. Example format: <p> My favorite color is {favoriteColor}.</p>
- Render Cards for All People In the App component, display a GreetingCard for every person in the people array. Pass all required information (name, age, greeting message, favorite color) as props to each card. Use the map() method to loop through the people array.

 **At the end your app should look like this**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-29T05:38:23.072Z  

```cpp
    </div>
  );
}

export function App() {
  const people = [
    { id: 1, name: "Alice", age: 30, greeting: "Happy Birthday, Alice!", favoriteColor: "mediumpurple" },
    { id: 2, name: "Bob", age: 25, greeting: "Have a fantastic day, Bob!", favoriteColor: "tomato" },
    { id: 3, name: "Charlie", age: 35, greeting: "Best wishes, Charlie!", favoriteColor: "mediumseagreen" }
  ];

  const appContainerStyle = {
      display: 'flex',
      flexWrap: 'wrap',
      justifyContent: 'center',
      alignItems: 'flex-start',
      backgroundColor: '#f4f7f6',
      minHeight: '100vh'
  };

  return (
    <div style={{ display: 'flex', flexWrap: 'wrap', justifyContent: 'center' }}>
            {people.map((person) => (
                    <GreetingCard
                              key={person.id}
                                        name={person.name}
                                                  age={person.age}
                                                            greeting={person.greeting}
                                                                      favoriteColor={person.favoriteColor}
                                                                              />
                                                                                    ))}
                                                                                        </div>
  );
}

export default App;
```

---

[View on CodeChef](https://www.codechef.com/problems/OJJAR69)