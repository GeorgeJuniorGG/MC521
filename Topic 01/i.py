ints = input().split(" ")
n = int(ints[0])
l = int(ints[1])

ais = input().split(" ")
diffs = []

for i in range (len(ais)):
    ais[i] = int(ais[i])
    diffs.append(0)

ais.sort()

for i in range (len(ais) - 1):
    diffs[i] = abs(ais[i] - ais[i+1])

diffs.append(2*abs(ais[0] - 0))
diffs.append(2*abs(ais[-1] - l))

print(max(diffs)/2)