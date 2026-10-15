# OJJAR200

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Handling Player Input

Implement functionality to detect when the player presses any of the four arrow keys: `ArrowLeft`, `ArrowRight`, `ArrowUp`, or `ArrowDown`.

#### Requirements:
- Monitor keyboard events and identify when an arrow key is pressed.
- Upon detecting a key press: Log the corresponding key to the console in the following format: If the user presses the left arrow key, log: "ArrowLeft pressed" If the user presses the right arrow key, log: "ArrowRight pressed" If the user presses the up arrow key, log: "ArrowUp pressed" If the user presses the down arrow key, log: "ArrowDown pressed"

 **Your app should be work like that at the end**   **How it works** 

- Click the Toggle Console button >_.
- Console opens inside the app.
- Press the arrow keys (← ↑ → ↓) to move tiles.
- Check the console for instant move updates.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-15T16:46:43.815Z  

```cpp
                                                          const [r, c] = emptyTiles[getRandomInt(emptyTiles.length)];

                                                            // Place a 2 (90% chance) or a 4 (10% chance)
                                                              newBoard[r][c] = Math.random() < 0.9 ? 2 : 4;

                                                                return newBoard;
                                                                }

                                                                // --- End of New for Part 2 ---

                                                                function App() {
                                                                  // 3. Initialize board state
                                                                    //    Now, initialize it by adding two random tiles to an empty board.
                                                                      const [board, setBoard] = useState(() => {
                                                                          let startingBoard = getEmptyBoard();
                                                                              startingBoard = addRandomTile(startingBoard); // Add first tile
                                                                                  startingBoard = addRandomTile(startingBoard); // Add second tile
                                                                                      return startingBoard;
                                                                                        });

                                                                                          return (
                                                                                              <div className="container">
                                                                                                    <h1>2048 Game</h1>
                                                                                                          <div className="board">
                                                                                                                  {/* Render the board (from Part 1) */}
                                                                                                                          {board.map((row, rowIndex) => (
                                                                                                                                    <div key={rowIndex} className="row">
                                                                                                                                                {row.map((cell, cellIndex) => (
                                                                                                                                                              <div key={cellIndex} className={`cell cell-${cell}`}>
                                                                                                                                                                              {/* Display the cell value, or an empty string if it's 0 */}
```

---

[View on CodeChef](https://www.codechef.com/problems/OJJAR200)