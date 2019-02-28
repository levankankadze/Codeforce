s=input()

if s.isupper():
    s=s.lower()
elif (s[0].islower() and s[1:].isupper()) or (s[0].islower() and s[1:]==''):
    s=s.capitalize()
print(s)