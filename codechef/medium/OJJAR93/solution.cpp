import React from 'react';
import './App.css'; // Import styles

function App() {
  const [guests, setGuests] = React.useState([
      { id: crypto.randomUUID(), name: 'Bruce Wayne' },
          { id: crypto.randomUUID(), name: 'Clark Kent' },
              { id: crypto.randomUUID(), name: 'Diana Prince' }
                ]);

                  return (
                      <div className="container">
                            <h1>Guest List</h1>
                                  <ul className="guest-list">
                                          {guests.map((guest) => (
                                                    <li key={guest.id} className="guest-item">
                                                                <input defaultValue={guest.name} className="guest-input" />
                                                                            <button
                                                                                          className="remove-btn"
                                                                                                        onClick={() => {
                                                                                                                        const updatedGuests = guests.filter(g => g.id !== guest.id);
                                                                                                                                        setGuests(updatedGuests);
                                                                                                                                                      }}
                                                                                                                                                                  >
                                                                                                                                                                                Remove
                                                                                                                                                                                            </button>
                                                                                                                                                                                                      </li>
                                                                                                                                                                                                              ))}
                                                                                                                                                                                                                    </ul>
                                                                                                                                                                                                                        </div>
                                                                                                                                                                                                                          );
                                                                                                                                                                                                                          }

                                                                                                                                                                                                                          export default App;
                                                                                                                                                                                                                          