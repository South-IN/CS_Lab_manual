#include <stdio.h>
#include <stdlib.h>

int main(){
	int m1=3,n1=2;
	int m2=2,n2=3;
	int a[m1][n1] = {{1,2},{3,4},{5,6}};
	int b[m2][n2] = {{1,2,3},{4,5,6}};
	int mul[m1][n2];
	for(int r=0;r<m1;r++){
		for (int c=0;c<n2;c++){
			mul[r][c]=0;
			for (int k=0;k<n1;k++){
				mul[r][c]+=a[r][k]*b[k][c];
			}
		}
	}
	
	for(int r=0;r<m1;r++){
		for (int c=0;c<n2;c++){
			printf("| %d |",mul[r][c]);
		}
		
		printf("\n");
	}
}
