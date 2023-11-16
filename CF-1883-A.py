tc = int(input())

mp, keypad = {}, "1234567890"

for i in range(len(keypad)):
    mp[keypad[i]] = i

while tc:
    password = input()
    answer = 0
    answer += abs(mp['1'] - mp[password[0]])
    answer += 1
    answer += abs(mp[password[0]] - mp[password[1]])
    answer += 1
    answer += abs(mp[password[1]] - mp[password[2]])
    answer += 1
    answer += abs(mp[password[2]] - mp[password[3]])
    answer += 1
    print(answer)
    tc -= 1