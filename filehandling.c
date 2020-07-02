#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	int i,size;
	fp=fopen("C:\\Users\\Shazank\\Desktop\\mycaptain.txt","r");
	if(fp==NULL)
	{
	    printf("Error");
	}
	fseek(fp,1,SEEK_END);
	size=ftell(fp);
	for(i=0;i<size;i++)
	{
	    fseek(fp,-i,SEEK_END);
	    ch=fgetc(fp);
	    printf("%c",ch);
	}
	return 0;
}
