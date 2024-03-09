# Project 3: Message Encryption
Group B2 WETTER: AL RAMIMI Emad, Liam, KERCHOUN Zahra, MILED Willem

## What is the Caesar Cipher?

The Caesar cipher is a method of encrypting text composed solely of letters. The principle involves shifting each letter of the message by a certain number of places in the alphabet, predefined by a key. Thus, to encode and decode this message, the encryption key is indispensable.

## Usage Instructions:

- All letters of the alphabet are allowed, both uppercase and lowercase.
- Spaces are also tolerated.
- No special characters or numbers are allowed.
- The program includes a console interface.
- The message size is limited to 1000 characters to ensure a tolerable execution time.

## Detailed Description of Functions:

### `verificationAlphanumMessage`:

This function checks if the message contains only the characters allowed by the program. It takes the message as a parameter and returns TRUE if all characters comply with the imposed norms; otherwise, it returns FALSE.
To do this, it traverses each character of the message and compares their ASCII code:
- SPACE = 32
- UPPERCASE LETTERS = [65,90]
- LOWERCASE LETTERS = [97,122]

### `chiffrementMessage`:

This procedure encrypts a message using a key with the Caesar cipher algorithm. It takes the message to be encrypted and an encoding key as parameters.
It shifts each character of the message by the number of places in the alphabet indicated by the key. Spaces remain unchanged, and letters retain their case.

### `dechiffrementMessage`:

This procedure decrypts a message encoded with a key using the Caesar cipher algorithm. It takes the encrypted message and a decoding key as parameters.
It uses the Caesar cipher algorithm in the reverse direction.

### `afficheInterface`:

This procedure displays the interface on the terminal with which the user will interact. It takes the message in question as a parameter.
Users can choose to encrypt or decrypt the message, indicating the encoding key each time. The interface also includes a way to exit.
