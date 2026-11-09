
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