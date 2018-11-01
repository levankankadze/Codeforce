i=int(input())
sum=0
for j in range(i):
    s=input()
    if s=="++X" or s=="X++":
        sum+=1
    else:
        sum-=1
print(sum)
