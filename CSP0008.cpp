#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	
    char s[256], c;
    int i, j, gan, dem;
    do{
    printf("\nPlease enter a string: ");
    gets(s);
    for(i = 0; i < strlen(s); ++i){
        gan=s[i];
        dem=0;
    	for(j= 0; j < strlen(s); ++j){
        if(s[j]==gan) dem++;		        
       	}
       	if(dem==1)
    		printf("\ %c  ", s[i]);

    }
    printf("\nPress enter to continue, Esc to exit.");
	c =getch();
	} while(c!=27);
}
