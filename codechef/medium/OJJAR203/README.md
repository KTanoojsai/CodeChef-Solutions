# OJJAR203

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Compressing Tiles to the Left

 **Goal:**  Implement the logic to slide all tiles in each row to the leftmost available positions, effectively "compressing" them and removing any empty spaces between them. You will create a `compress` function for this and then a basic `moveLeft` function that utilizes it.
 **The main rule for this project is:**  after every compression (that results from a `moveLeft` action and actually changes the board), you need to generate one random number (a new tile) on the grid.

 **What We Are Doing in This Chapter:**  We're taking the first major step towards enabling tile movement. When a user wants to move tiles (e.g., left), the first thing that needs to happen is for all existing tiles in each row to slide over, filling any empty spots to their left. For example, a row like `[0, 2, 0, 4]` should become `[2, 4, 0, 0]` after compression.
Following this compression, you must generate one random number (a new tile) on the grid.

for example you can write it like

```
let newBoard;
if (event.key === 'ArrowLeft') {
    newBoard = moveLeft(board);
}

```

 **Your App should be work like that at the end** 
 **How it works** : Press the left arrow ← and all tiles slide to the left.

 **Hints to write compress function** 

```
function compress(board) {
  let newBoard = board.map(row => {
    let newRow = row.filter(val => val !== 0);
    while (newRow.length < SIZE) newRow.push(0);
    return newRow;
  });
  return newBoard;
}

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-15T16:49:27.375Z  

```cpp
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
                                                                                                                                                                                                                                                                                              <div key={cellIndex} className={`cell cell-${cell}`}>
                                                                                                                                                                                                                                                                                                              {cell !== 0 ? cell : ''}
                                                                                                                                                                                                                                                                                                                            </div>
                                                                                                                                                                                                                                                                                                                                        ))}
                                                                                                                                                                                                                                                                                                                                                  </div>
                                                                                                                                                                                                }
                                                                                                                                                                                                    else return ;


                                                                                                                                                                                } else if (event.key === 'ArrowDown') {
                                                                                                                                                                                      console.log('ArrowDown pressed');
                                                                                                                                                                                            return;
```

---

[View on CodeChef](https://www.codechef.com/problems/OJJAR203)