import { BrowserRouter as Router, Routes, Route } from 'react-router-dom';
import Navbar from './components/Navbar';
import Home from './pages/Home';
import Login from './pages/Login';
import Register from './pages/Register';
import CreateBlog from './pages/CreateBlog';
import MyBlogs from './pages/MyBlogs';
import PrivateRoute from './components/PrivateRoute';
import { AuthProvider } from './context/AuthContext';
import './App.css';

function App() {
  return (
      <AuthProvider>
            <Router>
                    <Navbar />
                            <Routes>
                                      <Route path="/" element={<Home />} />
                                                <Route path="/login" element={<Login />} />
                                                          <Route path="/register" element={<Register />} />
                                                                    
                                                                              {/* Protected Routes */}
                                                                                        <Route element={<PrivateRoute />}>
                                                                                                    <Route path="/create" element={<CreateBlog />} />
                                                                                                                <Route path="/my-blogs" element={<MyBlogs />} />
                                                                                                                          </Route>
                                                                                                                                  </Routes>
                                                                                                                                        </Router>
                                                                                                                                            </AuthProvider>
                                                                                                                                              );