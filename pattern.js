const n = 5; // Number of rows

for (let i = n; i >= 1; i--) {
  // Outer loop for rows
  let row = "";
  for (let j = 1; j <= i; j++) {
    // Inner loop for columns (stars in each row)
    row += "* ";
  }
  console.log(row);
}
