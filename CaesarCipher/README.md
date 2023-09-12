# Caesar Cipher Algorithm
The Caesar cipher is a simple cipher and one of the best known encryption algorithms. It is very simple to encrypt, decrypt and intercept. The Caesar cipher is a substitution cipher where each letter in the plain-text (decoded text) is replaced by a letter a certain number of spaces to the right of the letter in the alphabet. (The amount of spaces is called the key or shift and is only known by the sender and intended receiver).

## Encryption
1) Accept user input for the plaintext and the key.
2) Iterate through each character in input text:
    - If char is a letter:
        - Shift the letter by the key value while considering the wrapping around the alphabet (using modulo 26).
    - If char is not a letter, it is unchanged.
3) Display the encrypted text.

## Decryption
1) Accept user input for the encrypted text and the key.
2) Iterate through each character in input text:
    - If char is a letter:
        - Shift the letter backwards by the key value while considering the wrapping around the alphabet (using modulo 26).
    - If char is not a letter, it is unchanged.
3) Display the decrypted text.


## Example
### Encryption
1) Choose the alphabet you are going to use.
2) Choose a secret key (shift) that you are going to use in this case n.
3) For every letter in the plain-text, replace it by a letter of the alphabet that is n letters away from the letter. (Ex: for a key of 1, a would become b, z would become a, etc.)
4) The message should now be encoded.

### Decryption
1) Choose the alphabet that the message was encrypted with.
2) Let n be the secret key the message is encoded in.
3) For every letter in the cipher-text, replace it by a letter of the alphabet that is n letters behind in the alphabet from the letter. (Ex: for a key of 1, c would be b, a would be z with a key of 1.)
4) The message should now be decoded
