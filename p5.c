#include <stdio.h>
#define n 5
int main(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(j<=n-i)
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}
}

