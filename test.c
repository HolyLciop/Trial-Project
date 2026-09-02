#include <stdio.h>

int main() {
	int a[10]={9,8,7,6,5,4,3,2,1,};
	int i;
	for(i=0;i<10;i++){
	if(a[i]+i!=9)break;
	}
	if(i==10)printf("TRUE");
	else printf("FALSE");
	return 0;
}