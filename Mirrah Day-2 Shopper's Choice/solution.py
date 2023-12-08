product_id=[int(i) for i in (input().split()) if i.isdigit()]
product_val={}
for item in product_id:
    if item in product_val:
        product_val[item]+=1
    else:
        product_val[item]=1
ans=[]
ans.extend(product_val.values())
print(ans)
