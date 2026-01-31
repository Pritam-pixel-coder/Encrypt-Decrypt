# Caesar Cipher Encode & Decode 
*The method is named after Julius Caesar, who used it in his private correspondence.*


---

## About Caesar Cipher

The Caesar Cipher is a classic substitution cipher where each letter in the message is shifted a certain number of positions in the alphabet.

**Example (Shift = 3):**
- A → D
- B → E
- Z → C

Plaintext: `HELLO`  
Ciphertext: `KHOOR`

---

## Features

- Encode text using a shift value  
- Decode text using the same shift value  
- Wraps around the alphabet automatically  
- Non-alphabetic characters remain unchanged  

---


## Encoding
- Input: HELLO WORLD
- Shift: 3
- Output: KHOOR ZRUOG

## Decoding
- Input: KHOOR ZRUOG
- Shift: 3
- Output: HELLO WORLD

