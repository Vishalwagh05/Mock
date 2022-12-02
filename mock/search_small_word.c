//search a smallest word in given string using function pointer and macros.
#include<stdio.h>
#include<string.h>
#define N 50
char* string(char *ptr1,char *ptr2);

char* (*fp)(char *ptr1,char *ptr2)=string;
int main()
{
	char s1[N],s2[N],*ptr1=NULL,*ptr2=NULL,*temp=NULL;
	fp=string;
	printf("Enter a string : ");
	fgets(s1,N,stdin);
	ptr1=s1;
	ptr2=s2;
	temp=fp(ptr1,ptr2);
	printf("%s\n",temp);
}
char* string(char *ptr1,char *ptr2)
{
	int cnt=0,smallest_len=0,i,j=0,length,flag=0;
	char *temp=NULL;
	temp=ptr1;
	length=strlen(ptr1);
	for(i=0;i<length-1;i++)
	{
		if(ptr1[i] != ' ')
		{
			if(ptr1[i+1] != '\0')
				cnt++;
			else
				cnt+=2;
			continue;
		}
		if(flag==0)
		{
			flag=1;
			smallest_len=cnt;
		}
		if (smallest_len>cnt)
		{
			smallest_len=cnt;
			j= i-cnt;
		}
		cnt=0;
	}
	if (smallest_len>cnt)
	{
		smallest_len=cnt;
		j= i-cnt;
	}
	i=0;
	while(smallest_len)
	{
		--smallest_len;
		ptr2[i++] = ptr1[j++];
	}
	ptr2[i]='\0';

	return ptr2;
}
