#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,j,n,p;
	printf("Input n : \n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
			printf(" ");
		for(j=1;j<=i;j++)
			printf("*");
		for(j=1;j<i;j++)
			printf("*");
		printf("\n");
	}
	for(i=n-1;i>=1;i--)
	{
		for(j=1;j<=n-i;j++)
			printf(" ");
		for(j=1;j<=i;j++)
			printf("*");
		for(j=1;j<i;j++)
			printf("*");
		printf("\n");
	}
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
			printf(" ");
		for(j=1;j<=i;j++)
			printf("*");
		for(j=1;j<i;j++)
			printf("*");
		printf("\n");
	}
	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<=i;j++)
			printf(" ");
		for(j=1;j<=n-i;j++)
			printf("*");
		for(j=1;j<n-i;j++)
			printf("*");
		printf("\n");
	}
	
	for(i=1;i<=n;i++)
	{
		p=1;
		for(j=1;j<=n-i;j++)
			printf(" ");
		for(j=1;j<=i;j++)
			printf("%d",p++);
		for(j=1;j<i;j++)
			printf("%d",p++);
		printf("\n");
	}
	for(i=n-1;i>=1;i--)
	{
		p=1;
		for(j=1;j<=n-i;j++)
			printf(" ");
		for(j=1;j<=i;j++)
			printf("%d",p++);
		for(j=1;j<i;j++)
			printf("%d",p++);
		printf("\n");
	}
	
	
	for(i=1;i<=n;i++)
	{p=i;
		for(j=1;j<=n-i;j++)
			printf(" ");
		for(j=1;j<=i;j++)
			printf("%d",p++);
			p--;
		for(j=1;j<i;j++)
			printf("%d",--p);
		printf("\n");
		
	}
	for(i=n-1;i>=1;i--)
	{p=i;
		for(j=1;j<=n-i;j++)
			printf(" ");
		for(j=1;j<=i;j++)
			printf("%d",p++);
			p--;
		for(j=1;j<i;j++)
			printf("%d",--p);
		printf("\n");
		
	
	}
	
	
	for(i=1;i<=n;i++)
	{p=n;
		for(j=1;j<=n-i;j++)
			printf(" ");
		for(j=1;j<=i;j++)
			printf("%d",p--);
			p+=2;
		for(j=1;j<i;j++)
			printf("%d",p++);
		printf("\n");
	}
	for(i=n-1;i>=1;i--)
	{p=n;
		for(j=1;j<=n-i;j++)
			printf(" ");
		for(j=1;j<=i;j++)
			printf("%d",p--);
			p+=2;
		for(j=1;j<i;j++)
			printf("%d",p++);
		printf("\n");
	}
}
