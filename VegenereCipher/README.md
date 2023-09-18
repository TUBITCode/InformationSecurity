# Vigenère Cipher Algorithm

1) Input:
   - Get a plaintext message `msg` (in uppercase).
   - Get a keyword `key` (in uppercase).
2) **Key Generation**:
   - Create a new key `newKey` of the same length as `msg`.
   - Repeat the `key` to match the length of `msg`.
   - Store the repeated key in `newKey`.
3) **Encryption**:
   - Initialize an empty string `encryptedMsg`.
   - For each character `msg[i]` in the plaintext:
     - Encrypt the character using the formula: `encryptedMsg[i] = ((msg[i] + newKey[i]) % 26) + 'A'`.
4) **Decryption**:
   - Initialize an empty string `decryptedMsg`.
   - For each character `encryptedMsg[i]` in the ciphertext:
     - Decrypt the character using the formula: `decryptedMsg[i] = (((encryptedMsg[i] - newKey[i]) + 26) % 26) + 'A'`.
5) Output:
   - Display the generated key `newKey`.
   - Display the encrypted message `encryptedMsg`.
   - Display the decrypted message `decryptedMsg`.
