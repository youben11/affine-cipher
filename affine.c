#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc,char** argv){

	if(argc!=1){
		printf("Usage: %s\n",argv[0]);
		return 0;
	}

	int a,b,typechar;
	char c;

	printf("[*]Key a=");
	scanf("%2d",&a);
	printf("[*]Key b=");
	scanf("%2d",&b);
	printf("[*]Message to encrypt : ");

	while((c=getchar()!='\n'));

	while((c=getchar())!='\n'){
		
		if(isalpha(c)){
			typechar=(c<=90)?65:97;
			c-=typechar;
			c=(a*c+b)%26;
			printf("%c",c+65);
		}else printf("%c",c);
	}
	puts("");

	return 0;
}