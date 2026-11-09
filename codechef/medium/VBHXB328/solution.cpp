                                                                        }
                                                                        ];

                                                                        function Home() {
                                                                          const [blogs] = useState(initialBlogsData);

                                                                            return (
                                                                                <div className="container">
                                                                                      <h1>Recent Blogs</h1>
                                                                                            <div className="blog-list">
                                                                                                    {blogs && blogs.length > 0 ? (
                                                                                                              blogs.map((blog) => (
                                                                                                                          <BlogCard key={blog._id} blog={blog} />
                                                                                                                                    ))
                                                                                                                                            ) : (
                                                                                                                                                      <p>No blogs available at the moment.</p>
                                                                                                                                                              )}
                                                                                                                                                                    </div>
                                                                                                                                                                        </div>
                                                                                                                                                                          );
                                                                                                                                                                          }

                                                                                                                                                                          export default Home;