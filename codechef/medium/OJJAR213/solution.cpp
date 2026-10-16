                                                                                                                           {/* The main content goes here as children */}
                                                                                                                                     {profileCardBody}
                                                                                                                                             </Card>
                                                                                                                                                   </CardWrapper>
                                                                                                                                                       </MainContentArea>
                                                                                                                                                         );
                                                                                                                                                         }

                                                                                                                                                         // 2. Intermediate Layout Component (Generic - uses children)
                                                                                                                                                         function MainContentArea({ children }) { // Accepts children
                                                                                                                                                           return (
                                                                                                                                                               <div className="main-content">
                                                                                                                                                                     {/* Renders whatever children it receives */}
                                                                                                                                                                           {children}
                                                                                                                                                                               </div>
                                                                                                                                                                                 );
                                                                                                                                                                                 }

                                                                                                                                                                                 // 3. Another Intermediate Layout Component (Generic - uses children)
                                                                                                                                                                                 function CardWrapper({ children }) { // Accepts children
                                                                                                                                                                                   return (
                                                                                                                                                                                       <div className="card-wrapper">
                                                                                                                                                                                              {/* Renders whatever children it receives */}
                                                                                                                                                                                                    {children}
                                                                                                                                                                                                        </div>
                                                                                                                                                                                                          );
                                                                                                                                                                                                          }

                                                                                                                                                                                                          // 4. The Card Component (Generic container with slots)
                                                                                                                                                                                                          function Card({ headerContent, children, footerContent }) {