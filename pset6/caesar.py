import sys
import string


def main():
    try:
        key = int(sys.argv[1])
        if key < 1:
            raise ValueError("Negative key provided")
    except (ValueError, IndexError):
        print("Usage: ./caesar k")
        sys.exit(1)

    plaintext = input("plaintext: ")

    ciphertext = encrypt_caesar(plaintext, key)

    print("plaintext: {}".format(ciphertext))


def encrypt_caesar(text, key):
    alpha_len = len(string.ascii_lowercase)
    text = list(text)

    for i, char in enumerate(text):
        if char.isalpha():
            if char.isupper():
                text[i] = chr((ord(char) - ord("A") + key) % alpha_len + ord("A"))
            else:
                text[i] = chr((ord(char) - ord("a") + key) % alpha_len + ord("a"))

    text = "".join(text)
    return text


if __name__ == "__main__":
    main()