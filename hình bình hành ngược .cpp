#include <stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int m=0;
	for(int i=0;i<a;i++){
		for(int j=0;j<m;j++) printf("~");
		for(int j=0;j<b;j++) printf("*");
		m++;
		printf("\n");
	}
}