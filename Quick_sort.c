#include<stdio.h>
void quicksort(int [],int,int);
void quicksort(int a[],int first ,int last)
{
	int i,j,temp,pivot;
	if(first < last)
	{
		i = first;
		j=last;
		pivot=first;
		
	while(i<j)
	{
		while(a[i]<a[pivot] && i<last )
			i++;
		while(a[j]>a[pivot])
			j--;
		if(i<j)
		{
			temp = a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		
	}
	
	temp = a[pivot];
	a[pivot] = a[j];
	a[j] = temp;
	
	quicksort(a,first,j-1);
	quicksort(a,j+1,last);
	}
}
int main()
{
	int n,i;
	printf("Enter number of elements : ");
	scanf("%d",&n);
	int ar[n];
	printf("Enter %d elements :\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&ar[i]);
	printf("Original array : \n");
	for(i=0;i<n;i++)
		printf("%d ",ar[i]);
	quicksort(ar,0,n-1);
	printf("Array after sorting :\n");
	for(i=0;i<n;i++)
		printf("%d ",ar[i]);
	return 0;
}
