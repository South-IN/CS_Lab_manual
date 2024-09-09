#include <stdio.h>
#include <stdlib.h>
void swap(int * a,int * b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int n=10;
	int arr[n]={20,6,1,4,100,-1,23,19,2,3};
	for (int i=0;i<n;i++){
		for (int j=0;j<n-i-1;j++){
			if (arr[j]>arr[j+1]){
				swap(&arr[j],&arr[j+1]);
			}
		}
	}
	
	for (int i=0;i<n;i++){
		printf("%d,",arr[i]);
	}
	
}
