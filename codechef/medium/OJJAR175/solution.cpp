import React from 'react';

const InputWithLabel = React.forwardRef(function InputWithLabel({ label, ...rest }, ref) {
  return (
      <div>
            <label>{label}</label>
                  <input ref={ref} {...rest} />
                      </div>
                        );
                        });

                        export default InputWithLabel;