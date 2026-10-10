// Renders a dynamic HTML element with combined classes
// Defaults to <p> if 'as' prop is not provided
function Text({
  as: Element = 'p',
    children,
      className = '',
        ...restProps
        }) {
          const combinedClasses = `text text--${Element} ${className}`.trim();

            return (
                <Element className={combinedClasses} {...restProps}>
                      {children}
                          </Element>
                            );
                            }

                            export default Text;