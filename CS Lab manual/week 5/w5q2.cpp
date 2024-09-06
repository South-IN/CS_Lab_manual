#include <stdio.h>
#include <stdlib.h>
int main(){
	int rows=2,cols=3;
	int m[rows][cols] = {{1,2,3},{4,5,6}};
	int t[cols][rows];
	for (int c=0;c<cols;c++){
		for (int r=0;r<rows;r++){
			t[c][r]=m[r][c];
		}
	}
	for (int c=0;c<cols;c++){
		for (int r=0;r<rows;r++){
			printf("| %d |",t[c][r]);
		}
		printf("\n");
	}
	
}
