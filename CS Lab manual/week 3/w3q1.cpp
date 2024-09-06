#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	char * bin=(char *)malloc(sizeof(char));
	// string input without predefined space
	char c;
	int count = 0;
	while(c!='\n'){
		scanf("%c",&c);
		*(bin+count)=c;
		count+=1;
		bin = (char *)realloc(bin,sizeof(char)*count);
	}
	*(bin+count-1)='\0';
	int res = 0;
	int pos = 0;
	for (int i=count-2;i>=0;i--){
		if (*(bin+i)=='1'){
			res+=pow(2,pos);
		}
		pos+=1;
	}
	printf("%d",res);
}
