import React from 'react';
import './App.css';

function App() {
    // Update guests to objects with unique IDs
      const [guests, setGuests] = React.useState([
            { id: 1, name: 'Bruce Wayne' },
                { id: 2, name: 'Clark Kent' },
                    { id: 3, name: 'Diana Prince' }
      ]);

        const handleRemove = (id) => {
              setGuests(guests.filter((guest) => guest.id !== id));
        };

          return (
                <div className="container">
                      <h1>Guest List</h1>
                            <ul className="guest-list">
                                    {guests.map((guest) => (
                                                <li key={guest.id} className="guest-item">
                                                            <input defaultValue={guest.name} className="guest-input" />
                                                                        <button
                                                                                      className="remove-btn"
                                                                                                    onClick={() => handleRemove(guest.id)}
                                                                                                                >
                                                                                                                              Remove
                                                                                                                                          </button>
                                                                                                                                                    </li>