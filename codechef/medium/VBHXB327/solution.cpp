import { Link } from 'react-router-dom';
import './Navbar.css';

const Navbar = () => {
    return (
            <nav className="navbar">
                        <div className="navbar-left">
                                        <Link to="/" className="navbar-brand">
                                                            MERN Blog
                                                                            </Link>
                                                                                        </div>
                                                                                                    <div className="navbar-right">
                                                                                                                    <Link to="/login" className="nav-link">
                                                                                                                                        Login
                                                                                                                                                        </Link>
                                                                                                                                                                        <Link to="/register" className="nav-link">
                                                                                                                                                                                            Create Account
                                                                                                                                                                                                            </Link>
                                                                                                                                                                                                                        </div>
                                                                                                                                                                                                                                </nav>
                                                                                                                                                                                                                                    );
                                                                                                                                                                                                                                    };

                                                                                                                                                                                                                                    export default Navbar;