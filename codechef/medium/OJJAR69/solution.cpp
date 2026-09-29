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