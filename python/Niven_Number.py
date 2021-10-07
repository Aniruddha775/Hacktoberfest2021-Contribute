def check( n ) :
    sum = 0
    temp = n
    while temp > 0 :
        sum = sum + temp % 10
        temp = temp // 10
    return n % sum == 0

n=int(input())
for i in range(n):
     num=int(input())
     if check( num ):
          print("Niven Number")
     else:
          print("Not a Niven Number")
