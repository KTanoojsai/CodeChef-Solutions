# NODEPRO01C

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### View all notes

In this part we will deal with viewing of all the notes that we have made.

We are working on `/notes` route.

#### Task:
- Complete the notes.js to view all the notes present in the notes folder.
- Complete the notes.ejs to traverse all the notes present in the folder and remove the.txt extension while showing the name of the note on the frontend.
### APIs Notes:
Endpoint	Method	Description
`/notes/`	GET	Returns all saved notes
#### Expected working of the backend:

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-08T22:01:46.950Z  

```cpp
const express = require('express');
const fs = require('fs');
const path = require('path');
const router = express.Router();

const notesDir = path.join(__dirname, '..', 'notes');

// View All Notes
// View All Notes
router.get('/', (req, res) => {
    fs.readdir(notesDir, (err, files) => {
            if (err) {
                        return res.status(500).send('Error reading notes');
                                }
                                        res.render('notes', { notes: files });
                                            });
                                            });



// Form Page to Add Note
router.get('/add', (req, res) => {
  res.render('add-note');
});

// Add Note Logic
router.post('/add', (req, res) => {
  const { title, content } = req.body;
  if (!title || !content) return res.send('Missing fields');

  const filePath = path.join(notesDir, `${title}.txt`);
  fs.writeFile(filePath, content, err => {
    if (err) return res.status(500).send('Failed to save note');
    res.redirect('/notes')
  });
});

module.exports = router;

```

---

[View on CodeChef](https://www.codechef.com/problems/NODEPRO01C)