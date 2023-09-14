# MonoAplphabetic Cipher
A mono-alphabetic cipher is a substitution cipher where each letter of the plain text is replaced with another letter of the alphabet. It uses a fixed key which consist of the 26 letters of a “shuffled alphabet”.

## Algorithm
1) Create a substitution table that maps each letter in the ciphertext alphabet.
2) Accept user input for the plaintext
3) Iterate through each character in input text:
   - Encryption
     - Replace each letter of plaintext with its corresponding value from the substitution table
   - Decryption
     - Use the same substituion table to find and replace the corresponding value of plaintext letters.
   - Non-Alphabet characters are left unchanged
4) Display Encrypted/Decrypted text
