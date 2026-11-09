# POLMDB66

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Blog Posts and Comments Modeling

Imagine you are building a simple blogging application using Node.js and MongoDB with Mongoose. In this application, users can create blog posts, and other users can write comments on these posts. A single blog post can have many comments (from zero to potentially hundreds or thousands).

### Your Task:

 **Define Mongoose Schemas** :

- Create a Post schema that includes basic fields like title, content, author,'createdAt' and a way to associate it with comments.
- Create a Comment schema that includes basic fields like text, author,'createdAt' and a way to associate it with the post it belongs to.
- Be sure to reflect your chosen approach (embedding or referencing) accurately when modeling the relationship.
#### Expected Output:

 **Post** 

 **Comments** 

You can check that the post's id is refrenced in comment's schema.

🧠  *Hint:*  Think about how you might handle thousands of comments, how you'd query individual comments, and what kind of schema relationships Mongoose supports.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-09T13:14:21.371Z  

```cpp

                                                                      // Step 2: Create a Comment linked to the post
                                                                          const comment = new Comment({
                                                                                text: 'Thanks! Very clear example.',
                                                                                      author: 'John Doe',
                                                                                            post: post._id
                                                                                                });
                                                                                                    
                                                                                                        await comment.save();
                                                                                                            console.log('✅ Comment created:', comment);

                                                                                                                // Step 3: Push comment ID into post.comments
                                                                                                                    post.comments.push(comment._id);
                                                                                                                        await post.save();

                                                                                                                            // Step 4: Fetch post with populated comments
                                                                                                                                const populatedPost = await Post.findById(post._id)
                                                                                                                                      .populate('comments');
                                                                                                                                            
                                                                                                                                                console.log(
                                                                                                                                                      '📄 Populated Post with Comments:\n',
                                                                                                                                                            JSON.stringify(populatedPost, null, 2)
                                                                                                                                                                );
                                                                                                                                                                  } catch (err) {
                                                                                                                                                                      console.error('❌ Error:', err);
                                                                                                                                                                        } finally {
                                                                                                                                                                            await mongoose.disconnect();
                                                                                                                                                                              }
                                                                                                                                                                              }

                                                                                                                                                                              // Run the example
                                                                                                                                                                              if (require.main === module) {
                                                                                                                                                                                createPostAndComment();
                                                                                                                                                                                }

                                                                                                                                                                                // Export models
                                                                                                                                                                                module.exports = { Post, Comment };
```

---

[View on CodeChef](https://www.codechef.com/problems/POLMDB66)