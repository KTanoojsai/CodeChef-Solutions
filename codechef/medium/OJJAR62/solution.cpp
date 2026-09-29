function Welcome() {
    return <h2>Welcome to My React App! 🎉</h2>;
    }

    // Creating the new Goodbye component
    function Goodbye() {
      return <h3>Thanks for visiting! See you soon!</h3>;
      }

      function App() {
        return (
            <div>
                  <Welcome /> {/* Using the Welcome component */}
                        <Goodbye /> {/* Using the Goodbye component */}
                              <p>React components make the UI more structured and reusable.</p>
                                  </div>
                                    );
                                    }

                                    export default App;
