# Write a program in Java to find the number of words present in a given sentence

# initializing string
test_string = "Hello I would like to contribute open source projects"

# printing original string
print ("The sentence is : " + test_string)

# using split()
# to count words in string
res = len(test_string.split())

# printing result
print ("The number of words in sentence are : " + str(res))
