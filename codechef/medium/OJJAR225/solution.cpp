import { useState } from 'react';
import AccordionItem from './AccordionItem';

function Accordion({ items }) {
  const [activeIndex, setActiveIndex] = useState(null);

    const handleItemClick = (index) => {
        // Toggle: if clicking the currently active item, close it
            // Otherwise, set the clicked index as active
                setActiveIndex(activeIndex === index ? null : index);
                  };

                    return (
                        <div className="accordion">
                              {items.map((item, index) => (
                                      <AccordionItem
                                                key={index}
                                                          title={item.title}
                                                                    content={item.content}
                                                                              isActive={index === activeIndex}
                                                                                        onClick={() => handleItemClick(index)}
                                                                                                />
                                                                                                      ))}
                                                                                                          </div>
                                                                                                            );
                                                                                                            }

                                                                                                            export default Accordion;