s=input().lower()
for i in range(0,len(s)):
    if s[i]=='a' or s[i]=='i' or s[i]=='u' or s[i]=='e' or s[i]=='o' or s[i]=='y':
        continue
    else:
        print('.'+s[i], end='')
