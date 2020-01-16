#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char s[256];
    int dem[122] = {0};
    printf("Nhap vao mot chuoi bat ky: ");
    gets(s);
    strlwr(s);

    for(int i=0;i<strlen(s);i++){
    	if(!dem[s[i]]){
	    dem[s[i]]=1;
	    for(int j=i+1;j<strlen(s);j++)
		if(s[j]==s[i])
		    dem[s[i]]++;
	    }
	}
	
    for(int i=97;i<122;i++)
        if(dem[i])
            printf("%c : %d\n",i,dem[i]);
    return 0;
}
