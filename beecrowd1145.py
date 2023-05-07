x,y=map(int,input().split())
count=0
for i in range(1,y+1):
    if i%x==0:
        print(i)
    else:
        print(i,end=" ")
    
