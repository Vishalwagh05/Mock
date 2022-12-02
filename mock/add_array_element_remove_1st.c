//add array element in given position and remove 1st element using fuction pointer.



#include<stdio.h>
#include<stdlib.h>

void shift_arr(int *ptr);
void (*fp)(int *ptr)=shift_arr;

int main()
{
//	int arr[10];
	int i,n;
	//int *ptr=(int *)malloc(sizeof(int));
	printf("Enter the no of elements :");
	scanf("%d",&n);
	int *ptr=(int *)malloc(sizeof(int));
	printf("Enter the array elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ptr[i]);
	}

	fp=shift_arr;
	printf("array before : ");
	for(i=0;ptr[i];i++)
	{
		printf("%d ",ptr[i]);
	}
	fp(ptr);
	for(i=0;ptr[i];i++)
	{
		printf("%d ",ptr[i]);
	}
	printf("\n");
	return 0;
}

void shift_arr(int *ptr)
{
	int i,pos,num;
	printf("\nEnter the number: ");
	scanf("%d",&num);

	printf("Enter the position :");
	scanf("%d",&pos);

	for(i=0;i<=pos;i++)
	{
		ptr[i]=ptr[i+1];
	}
	ptr[pos]=num;
}
