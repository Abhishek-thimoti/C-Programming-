#include<stdio.h>
void quicksort(int ar[],int first,int last)
{
	int i,j,p,temp;
	if(first<last)
	{
		i = first;
		p = first;
		j = last;
	while(i<j)
	{
		while(ar[i]<=ar[p] && i < last)
			i++;
		while(ar[j]>ar[p])
			j--;
		if(i<j)
		{
			temp = ar[i];
			ar[i] = ar[j];
			ar[j] = temp;
		}
	}
	temp = ar[p];
	ar[p] = ar[j];
	ar[j] = temp;
	quicksort(ar,first,j-1);
	quicksort(ar,j+1,last);
	} //IF end
}
int main()
{
	int n,i;
	printf("Enter No. of elemets : ");
	scanf("%d",&n);
	int ar[n];
	printf("Enter %d elements : ",n);
	for(i=0;i<n;i++)
		scanf("%d",&ar[i]);
	printf("Before sorting : ");
	for(i=0;i<n;i++)
		printf("%d ",ar[i]);
	quicksort(ar,0,n-1);
	printf("\nAfter sorting : ");
	for(i=0;i<n;i++)
		printf("%d ",ar[i]);
}
