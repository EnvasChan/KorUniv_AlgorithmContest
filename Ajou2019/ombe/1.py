N, L, K = map(int, input().split())
easy, hard = 0, 0

for i in range(N):
    sub1, sub2 = map(int, input().split())
    if sub2 <= L:
        hard += 1
    elif sub1 <= L:
        easy += 1

if (hard > K):
    score = K * 140
else:
    score = hard * 140
    K -= hard
    if (easy > K):
        score += K * 100
    else:
        score += easy * 100

print(score)
