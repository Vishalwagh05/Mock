#include<stdio.h>
int main()
{
        int i,j,large=0,cnt=0,length;
        char str[100];
        printf("Enter the string :\n");
        fgets(str,100,stdin);
        for(length=0;str[length];length++);
        for(i=0;i<=length;i++)
        {
                if((str[i]==' ')||(str[i]=='\0'))
                {
                        if(cnt>large)
                                large = cnt;
                        cnt = 0;
                }
                else
                        cnt++;
        }
        printf("Count of largest string is '%d'\n",large);
}
