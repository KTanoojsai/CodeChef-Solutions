// write your code here
const path = require('path');

// 1. Construct relative file path
const relativePath = path.join('books', 'fiction', 'The_Great_Novel.pdf');

// 2. Convert into an absolute path based on current script location
const originalAbsolutePath = path.resolve(relativePath);

// 3. Extract filename, change extension to .epub, and create the new path
const dir = path.dirname(originalAbsolutePath);
const baseNameWithoutExt = path.basename(originalAbsolutePath, '.pdf');
const newAbsolutePath = path.join(dir, `${baseNameWithoutExt}.epub`);

// 4. Print both paths to the console
console.log(`Original Absolute Path: ${originalAbsolutePath}`);
console.log(`New Absolute Path: ${newAbsolutePath}`);