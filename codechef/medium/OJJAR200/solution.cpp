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