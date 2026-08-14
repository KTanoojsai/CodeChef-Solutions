# POLMDB37

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Task - Product Status Manager

You have a product in your `store_db` called  **"Ultra-Vision Monitor."**  It is currently on sale. Now that the sale is over, you need to:

- Update the price to its original value.
- Add a new field called lastUpdated to keep track of the change.
- Remove the discountPercentage and saleEnd fields because they are no longer applicable.

 **Steps** 

- Select the Document Use the first {} to target the product by its name: { itemName: "Ultra-Vision Monitor" }
- Apply $set Inside the second {}, use $set to: Change the price to 20000 Create lastUpdated: new Date()
- Apply $unset In the same object, use $unset to list discountPercentage and saleEnd for removal.
- Separator Ensure a comma separates the $set and $unset blocks.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-14T16:49:07.373Z  

```cpp
});

db.products.updateOne(
    { itemName: "Ultra-Vision Monitor" },
    { 
        $set: { 
            price: 20000, 
            lastUpdated: new Date() 
        },
        $unset: { 
            discountPercentage: "", 
            saleEnd: "" 
        }
    }
);

const finalProduct = db.products.findOne({ itemName: "Ultra-Vision Monitor" });
print("--- Final Product Status ---");
printjson(finalProduct);
```

---

[View on CodeChef](https://www.codechef.com/problems/POLMDB37)