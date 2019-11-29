#include <stdio.h> 
int getInvCount(int arr[], int n) 
{ 
    int inv_count = 0; 
	printf("\nThe inversions are: ");
    for (int i = 0; i < n - 1; i++)
	{
        for (int j = i + 1; j < n; j++) 
		{
            if (arr[i] > arr[j]) 
			{
				printf("\n(%d, %d)  ",arr[i],arr[j]);
                inv_count++;
			}
		}
  	}
    return inv_count; 
} 
int main()
{ 
    int arr[10],n,i; 
    printf("\nEnter the no. of elements :");
	scanf("%d",&n);
	printf("\nEnter %d no. of elements :\n",n);
	for(i = 0;i<n;i++)
	{
		scanf("%d",&arr[i]);	
	}
	printf("\nThe  %d no. of elements are:",n);
	for(i = 0;i<n;i++)
	{
		printf("\t%d",arr[i]);	
	}
    printf("\nNumber of inversions are %d \n", getInvCount(arr, n)); 
    return 0; 
} 