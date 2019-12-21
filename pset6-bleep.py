from cs50 import get_string
from sys import argv


def main():

    # check command line arguments
    if len(argv) != 2:
        print("Usage: python bleep.py dictionary")
        exit(1)

    file = open((argv[1]), 'r')
    bannedWords = set()
    for line in file:
        bannedWords.add(line.strip().lower())

    # prompt user for input
    userInput = get_string("What message would you like to censor?\n")
    bannedMessage = ""
    # split msg to words
    message = userInput.split()

    for word in message:
        if word.lower() in bannedWords:
            bannedMessage += "*" * len(word) + " "
        else:
            bannedMessage += word + " "

    print(bannedMessage.strip())


if __name__ == "__main__":
    main()