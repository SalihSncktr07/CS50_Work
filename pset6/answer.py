from cs50 import get_string

c = get_string("Answer: ")

if c == "Y" or c == "y":
    print ("yes")
elif c == "N" or c == "n":
    print ("no")
else:
    print ("undefined :(")