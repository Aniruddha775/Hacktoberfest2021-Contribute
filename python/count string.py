# initializing string  
string= input("Enter your string: ")
  
# printing original string
print ("The original string is : " +  string)
  
# using split()
# to count words in string
res = len(string.split())
  
# printing result
print ("The number of words in string are : " +  str(res))