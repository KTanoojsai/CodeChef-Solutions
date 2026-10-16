import styles from './styles.module.css'; 

function PriceDisplay({ price }) {
  console.log(`Rendering PriceDisplay with price: ${price}, key: ${price}`);

    return (
        <div className={styles.wrapper}>
              {/*
                      The key prop is crucial here!
                              When the 'price' prop changes, React sees a new key.
                                      It discards the old div and creates a new one.
                                              This creation/mounting of the new div re-triggers the CSS animation.
                                                    */}
                                                          <div key={price} className={styles.animated}>
                                                                  {`$` + price}
                                                                        </div>
                                                                            </div>
                                                                              );
                                                                              }

                                                                              export default PriceDisplay;