const fs = require('fs');
const bf = require('buffer')
// // syncronus
// try {
    //     fs.writeFileSync('data/text.txt', "aku sayang kamu tau");
// } catch (error) {
//     console.log(e);
// }
// // Asyncsyncronus
// const data = new Uint8Array(bf.Buffer.from('Hello Node.js'));
// fs.writeFile('data/message.txt', data, (err) => {
    //   if (err) throw err;
    //   console.log('The file has been saved!');
// });


// // syncronus
// const text = fs.readFileSync('data/text.txt', 'utf-8');
// console.log(text);

// // Asyncsyncronus
const message = fs.readFile('data/message.txt', 'utf8', (err, data) => {
    console.log(data)
  });