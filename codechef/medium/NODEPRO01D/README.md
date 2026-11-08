# NODEPRO01D

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### View and delete a note

Now we are on the last stage of our first project.

The last functionality we have to implement is viewing a single note and its content and an option to delete it.

#### Task:
- Complete the notes.js code to implement the functionality of viewing a particular note on /:title route. The titile name should not contain the.txt extension. And render the view-note.ejs to show the note on frontend.
- Complete the functionality of deleting the note on /:title/delete route. After deleting the note, go back to /notes route.
- Complete notes.ejs to link all the notes to their particular route and show its content.
- Complete the view-note.ejs to show the title as heading and content of the note. And add the route to delete the particular note.
#### Expected working:

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-08T22:03:19.037Z  

```cpp
                            res.render('add-note');
                            });

                            // Add Note Logic
                            router.post('/add', (req, res) => {
                                const { title, content } = req.body;
                                    if (!title || !content) return res.send('Missing fields');
                                        
                                            const filePath = path.join(notesDir, `${title}.txt`);
                                                fs.writeFile(filePath, content, err => {
                                                        if (err) return res.status(500).send('Failed to save note');
                                                                res.redirect('/notes');
                                                                    });
                                                                    });

                                                                    // View a Single Note
                                                                    router.get('/:title', (req, res) => {
                                                                        const filePath = path.join(notesDir, `${req.params.title}.txt`);
                                                                            
                                                                                fs.readFile(filePath, 'utf-8', (err, content) => {
                                                                                        if (err) return res.status(404).send('Note not found');
                                                                                                
                                                                                                        res.render('view-note', {
                                                                                                                    title: req.params.title,
                                                                                                                                content
                                                                                                                                        });
                                                                                                                                            });
                                                                                                                                            });

                                                                                                                                            // Delete a Note
                                                                                                                                            router.post('/:title/delete', (req, res) => {
                                                                                                                                                const filePath = path.join(notesDir, `${req.params.title}.txt`);
                                                                                                                                                    
                                                                                                                                                        fs.unlink(filePath, err => {
                                                                                                                                                                if (err) return res.status(500).send('Failed to delete note');
                                                                                                                                                                        res.redirect('/notes');
                                                                                                                                                                            });
                                                                                                                                                                            });

                                                                                                                                                                            module.exports = router;
```

---

[View on CodeChef](https://www.codechef.com/problems/NODEPRO01D)