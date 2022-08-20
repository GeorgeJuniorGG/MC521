n = int(input())

vectors = []

for i in range (n):
    line = input().split(" ")
    vectors.append(line)

x = 0
y = 0
z = 0

for i in range (n):
    x += int(vectors[i][0])
    y += int(vectors[i][1])
    z += int(vectors[i][2])

if (x == 0 and y == 0 and z == 0):
    print("YES")

else:
    print("NO")