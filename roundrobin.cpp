#include<stdio.h>
main()
{ 
	int i,b[10],pno[10],ts,n,s[10],e[10],w[10],t[10],r[10];
	int l,c=0,x=0;
	float aw=0,at=0;
	printf("enter number of processes");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	pno[i]=i+1;
	printf("enter the time slice");
	scanf("%d",&ts);
	printf("enter the burst time of each process");
	for(i=0;i<n;i++)
	scanf("%d",&b[i]);
	s[0]=0;
	x=0;
	c=0;
	for(i=0;i<n;i++)
	{
		if(b[i]<ts)
		{
			e[i]=x+b[i];
			r[i]=0;
			
		}
		else
		{
			e[i]=ts+x;
			r[i]=b[i]-ts;
		}
		x=e[i];
		s[i+1]=e[i];
		r[i]=e[i];
		w[i]=s[i];
	}
	while(c>=0)
	{
		for(i=0;i<n;i++)
		{
			if(r[i]!=0)
			{
				w[i]=w[i]+x-e[i];
				if(r[i]<ts)
				{
					e[i]=x+r[i];
					r[i]=0;
				}
				else
				{
					e[i]=x+ts;
					r[i]=r[i]-ts;
				}
				x=e[i];
				r[i]=e[i];
			}
			if(r[i]!=0)
			c++;
			
			
		}
		c--;
	}
	for(i=0;i<n;i++)
	{
		aw=aw+w[i];
		at=at+r[i];
	}
	aw=aw/n;
	at=at/n;
	printf("the side=%d",ts);
	printf("\npno\ntbr\tsr\ter\twr\ttat");
	for(i=0;i<n;i++)
	printf("\n%d\n%d\n%d\n %d\n%d\n%d\n%d",pno[i],b[i],s[i],e[i],w[i],r[i]);
	printf("\n average waiting time :%f",aw);
	printf("\naverage tat : %f",at);
}
