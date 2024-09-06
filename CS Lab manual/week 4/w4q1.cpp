#include <stdio.h>
int min(int arr[],int size){
	int res = arr[0];
	for (int i=1;i<size;i++){
		if (arr[i]<res){
			res = arr[i];
		}
	}
	return res;	
}

int max(int arr[],int size){
	int res = arr[0];
	for (int i=1;i<size;i++){
		if (arr[i]>res){
			res = arr[i];
		}
	}
	return res;	
}

int sum(int arr[],int size){
	int res = arr[0];
	for (int i=1;i<size;i++){
		res+=arr[i];
	}
	return res;	
}

float avg(int arr[],int size){
	return (float)sum(arr,size)/size;
}

int main(){
	int n;
	printf("Enter number of elements:");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter the elemets of array:\n");
	for (int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	n=6;
	printf("min:%d\nmax:%d\nsum:%d\naverage:%f",min(arr,n),max(arr,n),sum(arr,n),avg(arr,n));
}
