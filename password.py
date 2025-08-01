import random
print('''
 ____                                     _
|  _ \ __ _ ___ _____      _____  _ __ __| |
| |_) / _` / __/ __\ \ /\ / / _ \| '__/ _` |
|  __/ (_| \__ \__ \\ V  V / (_) | | | (_| |
|_|___\__,_|___/___/ \_/\_/ \___/|_|  \__,_|
 / ___| ___ _ __   ___ _ __ __ _| |_ ___  _ __
| |  _ / _ \ '_ \ / _ \ '__/ _` | __/ _ \| '__|
| |_| |  __/ | | |  __/ | | (_| | || (_) | |
 \____|\___|_| |_|\___|_|  \__,_|\__\___/|_|
      ''')
print("⚠️  A good password contains at least 8 characters\n")
a = int(input("Enter number of lowercase letters you want in your password (At least one): "))
while a < 1:
    a = int(input("Enter number of lowercase letters you want in your password (At least one): "))
b = int(input("Enter number of uppercase letters you want in your password (At least one): "))
while b < 1:
    b = int(input("Enter number of uppercase letters you want in your password (At least one): "))
c = int(input("Enter number of digits you want in your password (At least one): "))
while c < 1:
    c = int(input("Enter number of digits you want in your password (At least one): "))
d = int(input("Enter number of symbols you want in your password (At least one): "))
while d < 1:
    d = int(input("Enter number of symbols you want in your password (At least one): "))
while a+b+c+d < 8:
    print("\n⚠️  A good password contains at least 8 characters\n")
    a = int(input("Enter number of lowercase letters you want in your password (At least one): "))
    while a < 1:
        a = int(input("Enter number of lowercase letters you want in your password (At least one): "))
    b = int(input("Enter number of uppercase letters you want in your password (At least one): "))
    while b < 1:
        b = int(input("Enter number of uppercase letters you want in your password (At least one): "))
    c = int(input("Enter number of digits you want in your password (At least one): "))
    while c < 1:
        c = int(input("Enter number of digits you want in your password (At least one): "))
    d = int(input("Enter number of symbols you want in your password (At least one): "))
    while d < 1:
        d = int(input("Enter number of symbols you want in your password (At least one): "))
list = []
for lower in range(a):
    l = random.randint(97, 122)
    list.append(chr(l))
for upper in range(b):
    u = random.randint(65, 90)
    list.append(chr(u))
for digit in range(c):
    dgt = random.randint(48, 57)
    list.append(chr(dgt))
for symbol in range(d):
    s = random.choice([33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47,58, 59, 60, 61, 62, 63, 64,91, 92, 93, 94, 95, 96,123, 124, 125, 126])
    list.append(chr(s))
random.shuffle(list)
print("\nYour generated password is:", ''.join(list))
print("\n🔐 Check your password strength here:")
print("👉 https://www.security.org/how-secure-is-my-password/\n")

# adding new lines in my code just to check