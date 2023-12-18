N=int(input())
H=[int(b) for (a,b) in enumerate(input().split()) if b.isdigit() and a<N]
if len(H)==0:
    count=0
else:
    count=1
    maximum=H[0]
    for i in range(1,len(H)):
        if H[i]>=maximum:
            maximum=H[i]
            count+=1
print(count)