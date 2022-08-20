n = int(input())

taken = {}

for i in range (n):
    word = input()

    try:
        print(word + str(taken[word]))
        taken[word] += 1
    except:
        taken[word] = 1
        print("OK")