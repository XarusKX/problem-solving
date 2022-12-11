n = int(input())
arr = map(int, input().split())

sorted_scores = [*arr]
sorted_scores.sort()
maximum = sorted_scores[n-1]
for i in range(n-2, -1, -1):
    if maximum > sorted_scores[i]:
        print(sorted_scores[i])
        break
