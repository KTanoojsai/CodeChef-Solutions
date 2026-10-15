                                                                                newBoard = moveLeft(board);
                                                                                    } else if (event.key === 'ArrowRight') {
                                                                                          newBoard = moveRight(board);
                                                                                              } else if (event.key === 'ArrowUp') {
                                                                                                    console.log('ArrowUp pressed');
                                                                                                          return;
                                                                                                              } else if (event.key === 'ArrowDown') {
                                                                                                                    console.log('ArrowDown pressed');
                                                                                                                          return;
                                                                                                                              }
                                                                                                                                  else return ;


                                                                                                                                      const updatedBoard = addRandomTile([...newBoard]);
                                                                                                                                          setBoard(updatedBoard);
                                                                                                                                              
                                                                                                                                                };

                                                                                                                                                  useEffect(() => {
                                                                                                                                                      window.addEventListener('keydown', handleKeyDown);
                                                                                                                                                          return () => window.removeEventListener('keydown', handleKeyDown);
                                                                                                                                                            });

                                                                                                                                                              return (
                                                                                                                                                                  <div className="container">
                                                                                                                                                                        <h1>2048 Game</h1>
                                                                                                                                                                              <div className="board">
                                                                                                                                                                                      {board.map((row, rowIndex) => (
                                                                                                                                                                                                <div key={rowIndex} className="row">
                                                                                                                                                                                                            {row.map((cell, cellIndex) => (