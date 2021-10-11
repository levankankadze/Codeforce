number = input()
ans = 0
for i in range(len(number)):
    if number[i] == "4" or number[i] == "7":
        ans += 1
if ans == 7 or ans == 4:
    print("YES")
else:
    print("NO")