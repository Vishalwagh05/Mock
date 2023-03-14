/* strcat user define */

#include <stdio.h>
#include<string.h>
void my_strcat(char *s1,char *s2);
void (*fp)(char *,char *)=my_strcat;
int main()
{
    char str1[50],str2[50];
    printf("Enter a string 1 : ");
    gets(str1);
    printf("Enter a string 2 : ");
    gets(str2);
    
    //my_strcat(&str1,&str2);
    fp(&str1,&str2);
    printf("%s",str1);

    
}

void my_strcat(char *s1,char *s2)
{
    int i,j;
    for(i=0;s1[i];i++);
    for(i,j=0;s2[j];j++)
    {
        s1[i++]=s2[j];
    }
    s1[i]='\0';
    
}
