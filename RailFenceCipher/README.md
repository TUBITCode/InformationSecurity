# Rail Fence Cipher Algorithm
The Rail Fence Cipher is a simple transposition cipher that rearranges the characters of a message in a zigzag pattern along a set number of "rails" or rows. It encrypts the message by writing the characters diagonally and then reading them row by row. To decrypt, the process is reversed by writing the characters in the zigzag pattern and then reading them in their original order. It's named after the visual resemblance of the zigzag pattern to a fence made of rails.

## Encryption:

1. **Input** the plaintext message (`msg`) and the number of rails (`key`) from the user.
2. Initialize a 2D character array `railMatrix` of size `key x length of msg`.
3. Initialize variables `row = 0`, `col = 0`, and `k = -1`.
4. For each character `msg[i]` in the message:
   - Place `msg[i]` in `railMatrix[row][col]`.
   - If `row` is at the top rail or the bottom rail, change `k` to its negation.
   - Update `row` and `col`.
5. Print the characters in `railMatrix` row by row as the encrypted message.

## Decryption:

1. **Input** the ciphertext (`enMsg`) and the number of rails (`key`) from the user.
2. Initialize a 2D character array `railMatrix` of size `key x length of enMsg`.
3. Initialize variables `row = 0`, `col = 0`, `k = -1`, and `m = 0`.
4. Create a "rail pattern" by marking positions with '*':
   - For each position in `railMatrix`:
     - Place '*' if `row` is on a rail, otherwise, keep it as '\n'.
     - If `row` is at the top rail or the bottom rail, change `k` to its negation.
     - Update `row` and `col`.
5. Replace '*' in `railMatrix` with characters from `enMsg` one by one (by iterating `m`).
6. Initialize `row = 0`, `col = 0`, and `k = -1` again.
7. Print the characters in `railMatrix` column by column as the decrypted message.

### Main Program:

1. Input the plaintext message and key for encryption.
2. Perform encryption and display the ciphertext.
3. Input the ciphertext and key for decryption.
4. Perform decryption and display the original plaintext.
