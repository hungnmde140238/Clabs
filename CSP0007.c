#include <conio.h>
#include <stdio.h>
#include <string.h>
//-----------------------------------------------------------------------------------
void void_inputString (char *);
void void_delSpaceF (char *);
void void_delSpaceL (char *);
void void_delSpaceC(char *);
int int_countText(char *);
//-----------------------------------------------------------------------------------
main()
{
	char cStr[50];
	printf ("Nhap xau \n");
	void_inputString(cStr);
	void_delSpaceC(cStr);
	getch();
}
//-----------------------------------------------------------------------------------
void void_inputString (char *cStr)
{
	fflush(stdin);
	gets(cStr);
}
//-----------------------------------------------------------------------------------
int int_countText(char *cStr)
{
	int i, count =0;
	if(cStr[0]!=' ') count++; 
	for ( i=0 ; i<strlen(cStr) ;i++)
	if (cStr[i] == ' ' && cStr[i+1] != ' ' && cStr[i+1] != '\0') count++;
	return (count);
}
//-----------------------------------------------------------------------------------
void void_delSpaceF (char *cStr)
{
	int i = 0,len;
	len=strlen(cStr);
	printf ("Xau co %d ki tu khi chua xoa \n", len);
    while (cStr[i] ==  ' ' ) 
    {
    	i++;
	}
    if (i != 0) 
    {
    	strcpy (cStr, cStr + i) ;
        puts(cStr);
        len=strlen(cStr);
    	printf ("Xau co %d ki tu khi da xoa %d space dau xau \n \n",len, i);
	}
	else printf ("Dau xau khong co ki tu space \n");
}
//-----------------------------------------------------------------------------------
void void_delSpaceL (char *cStr)
{
	int iCount=0 ,i,iLen,iN;
	iLen= strlen (cStr);
    i = iLen-1;
    printf ("xau co %d ki tu khi chua xoa \n", iLen);
    while (cStr[i] == ' ' )
    {
    	i--;
    	iCount++;
	}
	if (iCount>0)
	{
		iN=iLen-iCount;
		strncpy (cStr, cStr, iN );
		cStr[iN] = '\0';
    	puts(cStr);
    	iLen=strlen(cStr);
    	printf ("xau co %d ki tu khi da xoa %d ki tu space cuoi xau \n", iLen,iCount);
	}
	else printf ("cuoi xau khong co ki tu space \n");
}
//-----------------------------------------------------------------------------------
void void_delSpaceC (char *cStr)
{
	int i,j, iLen, iCount=0;
	iLen= strlen (cStr);
	for (i=0 ;i< iLen ; i++)
	{
		if (cStr [i] == ' ' && cStr [i+1] == ' ' )
		{
			iCount++;
			for (j=i+1; j<=iLen ; j++)
			cStr[j-1]=cStr[j];  // dich chuyen cac phan tu tu j sang trai 1 phan tu de xoa dau cach
			i--; // de quay lai xet tiep xem co dau cach tiep khong
		}
	}
	iLen=strlen (cStr);
	printf ("So phan tu trong xau la %d, da xoa di %d dau space thua o giua xau \n",iLen, iCount);
	puts(cStr);
}
