// write your code here
const express = require('express');
const router = express.Router();

// List all products
router.get('/', (req, res) => {
    res.send('Products Route');
    });

    // Get a specific product by ID
    router.get('/:id', (req, res) => {
        const productId = req.params.id;
            res.send(`Product with ID ${productId}`);
            });

            module.exports = router;