import * as Accordion from '@radix-ui/react-accordion';
import styles from './FAQAccordion.module.css'; // Using CSS Modules

function FAQAccordion({ items }) {
  if (!items || items.length === 0) {
      return <p>No FAQ items to display.</p>;
        }

          return (
              <Accordion.Root
                    className={styles.container} // Apply container styles to the Root
                          type="single"               // Only one item open at a time
                                collapsible={true}           // Allow closing the open item
                                    >
                                          {items.map(({ id, question, answer }) => (
                                                  <Accordion.Item key={id} value={id} className={styles.item}>
                                                            <Accordion.Header> {/* Header logically groups the trigger */}
                                                                        <Accordion.Trigger className={styles.trigger}>
                                                                                      {question}
                                                                                                    {/* Icon is handled by CSS pseudo-element ::after */}
                                                                                                                </Accordion.Trigger>
                                                                                                                          </Accordion.Header>
                                                                                                                                    <Accordion.Content className={styles.content}>
                                                                                                                                                {answer}
                                                                                                                                                          </Accordion.Content>
                                                                                                                                                                  </Accordion.Item>
                                                                                                                                                                        ))}
                                                                                                                                                                            </Accordion.Root>
                                                                                                                                                                              ); 
                                                                                                                                                                              }