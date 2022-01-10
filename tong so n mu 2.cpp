#include<stdio.h>

int main(){
	int i, n;
	long s;
	s = 0;
	i = 1;
	printf("\nNhap n: ");
	scanf("%d", &n);
	
	while(i <= n){
		s = s + i * i;
		i++;
	}
	printf("%d", i);
	printf("%ld", n, s);
	return 0;
	
}
