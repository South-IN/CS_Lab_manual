#include <stdio.h>
#include <stdlib.h>

int main(){
	int m=3,n=3;
	printf("Enter rows");
	scanf("%d",&m);
	printf("Enter columns");
	scanf("%d",&n);
	int a[m][n];
	int b[m][n];
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	int sum[m][n];
	for(int r=0;r<m;r++){
		for (int c=0;c<n;c++){
			sum[r][c]=a[r][c]+b[r][c];
		}
	}
	for(int r=0;r<m;r++){
		for (int c=0;c<n;c++){
			printf("| %d |",sum[r][c]);
		}
		
		printf("\n");
	}
}
