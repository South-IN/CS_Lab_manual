#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
bool isVowel(char c){
	c=tolower(c);
	if (c=='a' || c=='e' || c=='i' or c=='o' or c=='u') return true;
	return false;
}

int main(){
	char * s=(char *)malloc(sizeof(char));
	char c;
	int count = 0;
	while(c!='\n'){
		scanf("%c",&c);
		*(s+count)=c;
		count+=1;
		s = (char *)realloc(s,sizeof(char)*count);
	}
	*(s+count-1)='\0';
	int vowel=0,consonant=0;
	int i=0;
	while (*(s+i)!='\0'){
		char c = *(s+i);
		if (isdigit(c) or c==' '){
			i+=1;	
			continue;
		}
		else if (isVowel(c)){
			vowel+=1;
		}
		else{
			consonant+=1;
		}
		i+=1;
		
	}	
	printf("vowels : %d\nconsonants : %d",vowel,consonant);
	return 0;
}
