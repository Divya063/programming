'''
# Sample code to perform I/O:

name = input()                  # Reading input from STDIN
print('Hi, %s.' % name)         # Writing output to STDOUT

# Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
'''

n = int(input())

for i in range(n):

	t = input()
	t1= input()

	count2=0;count1=0
	best= 111000;j=0;flag=0


	for i in range(len(t)):


		if t[i]==t1[j]:
			count1=count1+1
			j=j+1
			if(count1!=len(t1)):
				continue

		elif t[i]!=t1[j]:
			count2=count2+1

		if count1==len(t1):
			#print("Here")
			j=0
			flag=1
			#print(count2)
			best= min(best, count2)
			#print(best)
			count2=0
			count1=0

		
	if(flag!=1 or best==0):
		print("NO")
	else:
	    print("YES")
	    print(best)
