import  { useState } from 'react'
import { Link, Route, Routes, useLocation } from 'react-router-dom'

// ✅ Normal imports (all loaded upfront, no lazy loading)
import Home from './pages/Home.jsx'
import About from './pages/About.jsx'
import Dashboard from './pages/Dashboard.jsx'
import ProductDetails from './pages/ProductDetails.jsx'

export default function App() {
    const location = useLocation()
    const [slowNetwork, setSlowNetwork] = useState(false)

    return (
        <div className="app">
            <header>
                <h1>React Example (No Lazy Loading)</h1>
                <nav>
                    <Link to="/">Home</Link>
                    <Link to="/about">About</Link>
                    <Link to="/dashboard">Dashboard</Link>
                    <Link to="/product/42">Product 42</Link>
                </nav>
                <label className="slow-toggle">
                    <input
                        type="checkbox"
                        checked={slowNetwork}
                        onChange={(e) => setSlowNetwork(e.target.checked)}