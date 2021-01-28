#include<iostream>
using namespace std;
#include <stdio.h>
int main (int argc,char** argv)
{
	if (argc<3)
	{
		return 1;
	}
	FILE *srcfileptr=fopen(argv[1],"rb");
	if (srcfileptr==NULL)
	{
		return 2;
	}
	FILE *dstfileptr=fopen(argv[2],"wb");
	if (dstfileptr=NULL)
	{
		return 3;
	}
	char buffer[1];
	while(fread(buffer,sizeof(char),1,srcfileptr)>0)
	{
		fwrite(buffer,sizeof(char),1,dstfileptr);
	}
	fclose(srcfileptr);
	fclose(dstfileptr);
}
