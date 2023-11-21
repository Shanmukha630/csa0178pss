#include<stdio.h>
int main(){
	int first=0,second=1,next,n;
	printf("Enter the number of terms:");
	scanf("%d",&n);
	for(int i=0;i<=n;i++){
		printf("%d ",first);
		next=first+second;
		first=second;
		second=next;	
	}
	return 0;
}
