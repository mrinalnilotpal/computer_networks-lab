// This code has been written by Nilotpal Mrinal on 23-01-2020//

#include<stdio.h>

int main()
{
	int i,n, st[n+1],k=0,j;
	
	printf("Enter The Length of Data String");
	scanf("%d", &n);
	
	printf("Enter The String of length %d: ", n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d", &st[i]);
	}
	
	for(j=0;j<n;j++)
	{
		if(st[j]==1)
		{
			k++;
		}	
	}
	
	if(k/2!=0)
	{
		st[n]==1;
	}
	else
	{
		st[n]==0;
	}
	

	
	for(i=0;i<=n;i++)
	{
		scanf("%d", &st[i]);
	}
	
	for(i=0;i<=n;i++)
	{
		if(st[i]==1)
		{
			k++;
		}	
	}
	
	if(k/2!=0)
	{
		printf("ERROR IN THE DATA RECEIEVED!!!");
	}
	else
	{
		printf("SUCCESS!!! DATA RECEIEVED COREECTLY WITHOUT ERROR!");
	}
}
