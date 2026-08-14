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