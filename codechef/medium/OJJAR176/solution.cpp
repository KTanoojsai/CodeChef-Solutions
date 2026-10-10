import React from "react";

function LinkButton({ href, children, ...props }) {
  // If href is a string, render an anchor <a>; otherwise, render a <button>
    const Tag = typeof href === "string" ? "a" : "button";

      return (
          <Tag href={href} {...props}>
                {children}
                    </Tag>
                      );
                      }

                      export default LinkButton;
