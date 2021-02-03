#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,j,n;
	printf("Enter number of rows : \n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++)
		printf(" * ");
		printf("\n");
	}

		printf("Enter number of rows : \n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++)
		printf(" %d ",i);
		printf("\n");
	}
	
		printf("Enter number of rows : \n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++)
		printf(" %d ",j);
		printf("\n");
	}
	
		printf("Enter number of rows : \n");
	scanf("%d",&n);
	int p=1;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++)
		printf(" %d ",p++);
		printf("\n");
	}
	
		printf("Enter number of rows : \n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++)
		printf(" %d ",i+j);
		printf("\n");
	}
	
		printf("Enter number of rows : \n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++)
		if((i+j)%2==0){
		printf(" 1 ");
		}
		else{
		printf(" 0 ");
		}printf("\n");
	}
	
		printf("Enter number of rows : \n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++)
		printf(" %d ",n+1-j);
		printf("\n");
	}
	
		printf("Enter number of rows : \n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++)
		printf(" %d ",n+1-i);
		printf("\n");
	}
	
	printf("Reverse : \n");
	
	printf("Enter number of rows : \n");
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		for(j=1;j<=i;j++)
		printf(" * ");
		printf("\n");
	}
	
	printf("Enter number of rows : \n");
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		for(j=1;j<=i;j++)
		printf(" %d ",i);
		printf("\n");
	}
	
	printf("Enter number of rows : \n");
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		for(j=1;j<=i;j++)
		printf(" %d ",j);
		printf("\n");
	}
	
	printf("Enter number of rows : \n");
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		for(j=1;j<=i;j++)
		printf(" %d ",n+1-j);
		printf("\n");
	}
	
	printf("Enter number of rows : \n");
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		for(j=1;j<=i;j++)
		printf(" %d ",n+1-i);
		printf("\n");
	}
	
	printf("Enter number of rows : \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++)
		printf(" ");
		for(j=1;j<=i;j++){
		printf("*");}
		printf("\n");
	}
	
	printf("Enter number of rows : \n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++)
		printf(" ");
		for(j=1;j<=i;j++)
		
		printf("* ");
			printf(" ");
		printf("\n");
		
	}
}
