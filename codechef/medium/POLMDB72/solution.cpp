            avgRating: 0,
              reviewCount: 0
              });

              // 2. Setup the Reviews
              db.reviews.insertMany([
                { productId: 1, rating: 5, comment: "Amazing!" },
                  { productId: 1, rating: 4, comment: "Good quality" },
                    { productId: 1, rating: 3, comment: "Average" }
                    ]);

                    // --- YOUR TASK PART B ---
                    // A new review with rating = 5 arrives.
                    // Recalculate the new values and update the product document.
                    db.products.updateOne(
                      { _id: 1 },
                        {
                            $set: {
                                  avgRating: 4.25,
                                        reviewCount: 4
                                            }
                                              }
                                              );