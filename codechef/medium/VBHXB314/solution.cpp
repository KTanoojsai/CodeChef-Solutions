                                                    // If the request has query parameter 'version', handle as Query Parameter Versioning
                                                        if (req.query.version) {
                                                                const version = req.query.version;
                                                                        return res.json({
                                                                                    version: `v${version}`,
                                                                                                products: [`Product from Query v${version}`]
                                                                                                        });
                                                                                                            }
                                                                                                                // Otherwise, let it fall through to header versioning or next handler
                                                                                                                    next();
                                                                                                                    });

                                                                                                                    // --- Header Versioning ---
                                                                                                                    // Example: /api/products with header API-Version: 1 or API-Version: 2
                                                                                                                    app.get("/api/products", (req, res) => {
                                                                                                                        const version = req.headers["api-version"] || "1";
                                                                                                                            res.json({
                                                                                                                                    version: `v${version}`,
                                                                                                                                            products: [`Product from Header v${version}`]
                                                                                                                                                });
                                                                                                                                                });

                                                                                                                                                export default app;