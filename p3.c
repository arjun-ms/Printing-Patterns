#include <stdio.h>
#define n 5
int main(){
	for(int i=0;i<n;i++){
		for(int j=n-1;j>=i;j--){
			printf("* ");
		}
		printf("\n");
	}
}


