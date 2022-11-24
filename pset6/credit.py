import sys


def main():
    credit_card = get_card_num()

    validate_card(credit_card)


def get_card_num():
    while True:
        card_num = input("Number: ")
        try:
            if len(card_num) > 0 and int(card_num):
                break
        except ValueError:
            continue

    return card_num


def validate_card(credit_card):
    if len(credit_card) < 13 or 16 < len(credit_card):
        print("INVALID")
        sys.exit(0)

    even, odd = 0, 0
    card_len = len(credit_card)

    if card_len % 2 == 0:
        for i in range(card_len):
            num = int(credit_card[i])
            if i % 2 == 0:
                multiple = num * 2
                if multiple >= 10:
                    even += multiple // 10
                    even += multiple % 10
                else:
                    even += multiple
            else:
                odd += num
    else:
        for i in range(card_len):
            num = int(credit_card[i])
            if i % 2 != 0:
                multiple = num * 2
                if multiple >= 10:
                    even += multiple // 10
                    even += multiple % 10
                else:
                    even += multiple
            else:
                odd += num

    checksum = (even + odd) % 10

    if checksum == 0:
        first_digit = int(credit_card[0])
        second_digit = int(credit_card[1])
        if first_digit == 3 and second_digit == 4 or second_digit == 7:
            print("AMEX")
        elif first_digit == 5 and 1 <= second_digit <= 5:
            print("MASTERCARD")
        elif first_digit == 4:
            print("VISA")
        else:
            print("INVALID")


if __name__ == "__main__":
    main()