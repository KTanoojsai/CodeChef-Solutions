import { useContext } from "react";
import { UserContext } from "../context/UserContext";
import "../App.css";

const Modal = () => {
  const { user, isModalOpen, setIsModalOpen } = useContext(UserContext);

    if (!isModalOpen || !user) return null;

      return (
          <div className="modal-backdrop">
                <div className="modal">
                        <h2>👋 Hello, {user.name}!</h2>
                                <p>Welcome to the app. We're glad you're here!</p>
                                        <button onClick={() => setIsModalOpen(false)}>Close</button>
                                              </div>
                                                  </div>
                                                    );
                                                    };

                                                    export default Modal;