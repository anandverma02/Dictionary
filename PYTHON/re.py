"""l=[1,2,5,5,3,6,4]
ans=[]
j=0
for i in range(len(l)):
    count=0
    j=j+i
    for j in range(len(l)):
        if l[i]==l[j]:
            count=count+1
    if(count<=1):
        ans.append(l[i])
print(ans)"""
l1=[1,2,5,5,3,6,4]
l2=[]
for i in l1:
    if i not in l2:
        l2.append(i)
print(l2)
        


