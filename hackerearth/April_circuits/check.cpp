str ="Hello World"

b="aeiou"

ans=0

for i in str:
	if i not in b:
  ans+=1 

print(ans)