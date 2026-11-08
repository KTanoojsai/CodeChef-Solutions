const express = require('express');
const fs = require('fs');
const path = require('path');
const router = express.Router();
const notesDir = path.join(__dirname, '..', 'notes');

// Form Page to Add Note
router.get('/add', (req, res) => {
    res.render('add-note');
    });

    // Add Note Logic
    router.post('/add', (req, res) => {
        const { title, content } = req.body;
            
                // 1. Check if any inputs are missing
                    if (!title || !content) {
                            return res.send('Missing fields');
                                }
                                    
                                        // 2. Build the exact absolute file path (Title + .txt)
                                            const filePath = path.join(notesDir, `${title}.txt`);
                                                
                                                    // 3. Write file and handle responses
                                                        fs.writeFile(filePath, content, (err) => {
                                                                if (err) {
                                                                            return res.status(500).send('Error saving file');
                                                                                    }
                                                                                            
                                                                                                    res.send('Note saved');
                                                                                                        });
                                                                                                        });

                                                                                                        module.exports = router;