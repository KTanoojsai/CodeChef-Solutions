const fs = require('fs');

console.log('Reading words.txt...');

fs.readFile('words.txt', 'utf8', (err, data) => {
  if (err) {
      console.error('Error reading file:', err);
          return;
            }

              // Filter words that have 5 or fewer letters
                const filteredWords = data
                    .split('\n')
                        .map(word => word.trim())
                            .filter(word => word.length > 0 && word.length <= 5)
                                .join('\n');

                                  console.log('Writing short words to short_words.txt...');

                                    fs.writeFile('short_words.txt', filteredWords, 'utf8', (err) => {
                                        if (err) {
                                              console.error('Error writing file:', err);
                                                    return;
                                                        }
                                                            console.log('Short words written successfully!');
                                                              });
                                                              });