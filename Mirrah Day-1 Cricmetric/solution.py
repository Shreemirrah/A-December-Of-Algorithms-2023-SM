n=int(input())
runs=[int(b) for a,b in enumerate(input().split()) if a<n and b.isdigit() ]
print(sum(runs))
print(runs.index(max(runs)))