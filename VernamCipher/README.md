# Vernam Cipher Algorithm

1) Initialization:
   - Create a 2D character array `arr[26][26]` to store the alphabet grid.
   - Initialize variables:
     - `message[22]`, `key[22]`, `emessage[22]`, and `retMessage[22]` for storing messages.
     - `i`, `j`, `k`, `r`, and `c` as integers.
     - Initialize `k` to 96.

2) Generating the Alphabet Grid:
   - Populate `arr` in a 26x26 grid, cyclically incrementing characters from 'a' to 'z'.

3) Input:
   - Prompt user for plaintext message, store in `message`.
   - Prompt user for secret key, store in `key`.

4) Encryption:
   - For each `key[i]` character in the key:
     - Find row index `c` for `key[i]` in the first row of `arr` using `findRow(key[i])`.
     - Find column index `r` for `message[i]` in the first column of `arr` using `findColumn(message[i])`.
     - Calculate `emessage[i]` as `arr[r][c]`.
   - Display encrypted message by iterating `emessage` and printing each character.

5) Decryption (Optional, Vernam is symmetric):
   - For each `emessage[i]` character in the encrypted message:
     - Find column index `c` for `key[i]` in the first column of `arr` using `findColumn(key[i])`.
     - Find row index `r` for `emessage[i]` in column `c` using `findDecRow(emessage[i], c)`.
     - Calculate `retMessage[i]` as `arr[r][0]`.
   - Display retrieved message by iterating `retMessage` and printing each character.

6) End of Program.
