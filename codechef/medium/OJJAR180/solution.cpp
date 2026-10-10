import { useContext } from 'react';
import UserContext from '../UserContext'; // or './UserContext' depending on location

function Greeting() {
  const user = useContext(UserContext);

    return (
        <div className="greeting">
              <h1>Hi, {user.name}!</h1>
                    <p>Welcome back to the course portal.</p>
                        </div>
                          );
                          }

                          export default Greeting;