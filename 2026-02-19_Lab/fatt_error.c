#include<stdio.h>
#include<stdlib.h>

	int fatt(int n){
	int ret=n*fatt(n-1);
	if(n==1||n==0){
		return 1;
	}
	return ret;
}
int main(){
	int n, risultato ;
	printf("inserire n");
	scanf("%d", n);
	risultato = fatt(n);
	printf("%d", n);
}
