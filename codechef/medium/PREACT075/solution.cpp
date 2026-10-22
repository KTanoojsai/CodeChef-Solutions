import React from 'react';
import Button from './Button';

function ProductItem({ product }) {
  const renderStars = (rating) => {
      return '★'.repeat(rating) + '☆'.repeat(5 - rating);
        };

          return (
              <div className="product-card">
                    <img src={product.image} alt={product.title} />
                          <h3>{product.title}</h3>
                                <div>{renderStars(product.rating)}</div>
                                      <p className="price">${product.price}</p>
                                            <Button
                                                    text="Add to Cart"
                                                            onClick={() => alert(`Added ${product.title} to cart`)}
                                                                  />
                                                                      </div>
                                                                        );
                                                                        }

                                                                        export default ProductItem;