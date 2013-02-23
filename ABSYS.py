tc=input()
	for i in range(tc):
	b=raw_input()
	a=raw_input()
	count=1
	for i in a:
	if(i=='+'):
		count=2
		if(i=='='):
			count=3
			if(i=='m'):
				break
				l=[]
				l=a.split(' ')
				first=second=third=0
				if(count==1):
	second=int(l[2])
	third=int(l[4])
	first=third-second
	if(count==2):
	first=int(l[0])
	third=int(l[4])
	second=third-first
	if(count==3):
	first=int(l[0])
	second=int(l[2])
	third=first+second
	print first,
	print "+",
	print second,
	print "=",
	print third




