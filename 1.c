#include<stdio.h>
#include<string.h>

void main(){
	
	char a[100];
	int upr=0,lwr=0,num=0,spe=0;
	int length,i;
	
	printf("Enter string =");
	gets(a);
	
	length = strlen(a);
	for(i=0;i<length;i++){
	
	if(a[i]>='A'&& a[i]<='Z') ++upr;
		if(a[i]>='a' && a[i]<='z') ++lwr;
			if(a[i]==0 && a[i]<=9) ++num;
				if(a[i]=='@' || a[i]=='#' || a[i]=='$') ++spe;
}
	
(upr>0&&lwr>0&&num>0&&spe>0)?printf("Password is strong"):printf("Password is weak");
	
}
