str = input()
ROT = ""


for i in range(len(str)):
    asci = ord(str[i])
    # print("first value:", asci, chr(asci))# A:65, a:97, space:32, Z:90, z:122
    if asci == 32:
        ROT += chr(asci)
        continue
    elif 96 < asci < 123:
        asci += 13
        if asci >= 123:
            asci -= 26
    elif 64 < asci < 91:
        asci += 13
        if asci >= 91:
            asci -= 26

    # print(asci)
    ROT += chr(asci)

print(ROT)
