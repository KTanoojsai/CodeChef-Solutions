         function App() {
           // 3. Initialize board state using getEmptyBoard()
             const [board, setBoard] = useState(getEmptyBoard());

               return (
                   <div className="container">
                         <h1>2048 Game</h1>
                               <div className="board">
                                       {/* 3. Render the board */}
                                               {board.map((row, rowIndex) => (
                                                         <div key={rowIndex} className="row">
                                                                     {row.map((cell, cellIndex) => (
                                                                                   <div key={cellIndex} className="cell">
                                                                                                   {/* Display the cell value, or an empty string if it's 0 */}
                                                                                                                   {cell !== 0 ? cell : ''}
                                                                                                                                 </div>
                                                                                                                                             ))}
                                                                                                                                                       </div>
                                                                                                                                                               ))}
                                                                                                                                                                     </div>
                                                                                                                                                                         </div>
                                                                                                                                                                           );
                                                                                                                                                                           }

                                                                                                                                                                           export default App;