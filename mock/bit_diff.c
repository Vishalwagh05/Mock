// wap no. of bits difference between two no.

#include<stdio.h>
int main()
{
	int data1,data2,bit,cnt=0,result=0;
	printf("Enter the data1 :");
	scanf("%d",&data1);
	printf("Enter the data1 :");
	scanf("%d",&data2);

result=data1^data2;
	for(bit=0;bit<=31;bit++)
	{
		if(result&(1<<bit))
			cnt++;
	}
	printf("%d\n",cnt);
}
