const n = 5; // Number of rows

for (let i = 1; i <= n; i++) {
  // Outer loop for rows
  let row = "";
  for (let j = 1; j <= n - i + 1; j++) {
    // Inner loop for columns (stars in each row)
    row += j + " "; // Append the current number to the row string
  }
  console.log(row);
}
