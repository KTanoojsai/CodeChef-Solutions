# PREACT042

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Dynamic Key Generation in React

We are building a  **Guest List App**  where users can see a list of invitees and remove them by clicking a  **Remove**  button.

However, the current code has a problem:  **it uses array indexes as keys**, which can cause React to behave unexpectedly when guests are removed.

#### Your Task:
- Identify the problem in the existing code.
- Update the code so that each guest has a unique key that does not change when items are added or removed.
- Improve the UI with some basic styling.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-20T13:13:10.339Z  

```cpp
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
```

---

[View on CodeChef](https://www.codechef.com/problems/PREACT042)