# Hill Cipher Encryption and Decryption Algorithm (2x2 Matrix)
A Hill Cipher is a symmetric-key cryptographic algorithm used for encryption and decryption of text messages. It operates on blocks of text, typically with a square key matrix, and employs matrix multiplication to transform the plaintext into ciphertext and vice versa. 

## Encryption:
  1) Input:
     - Get a 2x2 key matrix (`a`) that is invertible.
     - Get a 2-letter message to be encrypted (`mes`).
  2) Matrix Multiplication (Encryption):
     - Initialize an empty 2x1 matrix for encryption (encrypt).
     - Calculate `encrypt = a * mes`, where * denotes matrix multiplication.
  3) Modulo and Character Conversion:
    - For each element in the encrypt matrix, apply the following:
       - Calculate `encrypt[i][0] % 26` to ensure it's within the range of alphabetic characters.
       - Convert the result to a lowercase letter by adding 97 to it `((char)(encrypt[i][0] % 26 + 97))`.
  4) Output:
     - Display the encrypted string, which consists of the characters obtained in step 3.

## Decryption:
  1) Input:
     - Get the same 2x2 key matrix (`a`) used for encryption.
     - Get the encrypted message to be decrypted (encrypt).
  2) Matrix Inversion:
     - Calculate the inverse of the key matrix (`b`) using the formula for a 2x2 matrix:
       - `b[0][0] = a[1][1] / det`
       - `b[0][1] = -a[0][1] / det`
       - `b[1][0] = -a[1][0] / det`
       - `b[1][1] = a[0][0] / det`
         where det is the determinant of the key matrix (`a`).
  3) Matrix Multiplication (Decryption):
     - Initialize an empty 2x1 matrix for decryption (decrypt).
     - Calculate `decrypt = b * encrypt`, where * denotes matrix multiplication.
  4) Modulo and Character Conversion:
     - For each element in the decrypt matrix, apply the following:
       - Calculate `decrypt[i][0] % 26` to ensure it's within the range of alphabetic characters.
       - Convert the result to a lowercase letter by adding 97 to it `((char)(decrypt[i][0] % 26 + 97))`.
  5) Output:
     - Display the decrypted string, which consists of the characters obtained in step 4.

Note: Ensure that the 2x2 key matrix is invertible for both encryption and decryption to work correctly.
