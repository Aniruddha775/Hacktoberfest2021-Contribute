k= 16
i=1
j=0
for l in range(1, 10):
    print(" "*j + "*"*i + " "*k + "*"*i + " "*j)
    if(l<5):
        i += 1
        j += 1
        k -= 4
    else:
        i -= 1
        j -= 1
        k += 4
