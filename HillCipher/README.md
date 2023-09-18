# Hill Cipher Encryption and Decryption Algorithm (2x2 Matrix)
A Hill Cipher is a symmetric-key cryptographic algorithm used for encryption and decryption of text messages. It operates on blocks of text, typically with a square key matrix, and employs matrix multiplication to transform the plaintext into ciphertext and vice versa. 

1) **Input**:
   - Obtain a 2x2 key matrix `a` (It should be invertible).
   - Obtain a 2-letter message `mes` to be encrypted.

2) **Encryption**:
   - Initialize an empty 2x1 matrix `encrypt`.
   - For each element `encrypt[i][j]` in the result:
     - Calculate `encrypt[i][j]` using nested loops and matrix multiplication:
       - Initialize `encrypt[i][j]` to 0.
       - For each element `k` in the range `[0, 1]`:
         - Update `encrypt[i][j]` as `encrypt[i][j] += a[i][k] * mes[k][j]`.
   - Apply modulo 26 to each element of `encrypt` to ensure it's within the range of alphabetic characters.
   - Convert the resulting elements to lowercase letters.
   - Display the encrypted string.

3) **Decryption**:
   - Calculate the inverse of the key matrix `a` using the formula for a 2x2 matrix:
     - Calculate the determinant `det` of `a` as `det = c[0][0] * c[1][1] - c[0][1] * c[1][0]`.
     - Calculate each element `b[i][j]` of the inverse matrix `b` as:
       - `b[0][0] = c[1][1] / det`
       - `b[0][1] = -c[0][1] / det`
       - `b[1][0] = -c[1][0] / det`
       - `b[1][1] = c[0][0] / det`.
   - Initialize an empty 2x1 matrix `decrypt`.
   - For each element `decrypt[i][j]` in the result:
     - Calculate `decrypt[i][j]` using nested loops and matrix multiplication:
       - Initialize `decrypt[i][j]` to 0.
       - For each element `k` in the range `[0, 1]`:
         - Update `decrypt[i][j]` as `decrypt[i][j] += b[i][k] * encrypt[k][j]`.
   - Apply modulo 26 to each element of `decrypt` to ensure it's within the range of alphabetic characters.
   - Convert the resulting elements to lowercase letters.
   - Display the decrypted string.

Note: Ensure that the 2x2 key matrix is invertible for both encryption and decryption to work correctly.
