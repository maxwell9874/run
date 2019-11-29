#include <stdio.h>
int inv_count(int arr1[], int n)
{
    int inversionCtr = 0;
    printf("The inversions are: ");
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
		{
			if (arr1[i] > arr1[j])
            {
               printf("(%d, %d)  ",arr1[i],arr1[j]);
               inversionCtr++;
            }
		}
    }
    return inversionCtr;
}

int main()
{
    int arr1[10],n,i;
	printf("\nEnter the no. of elements : ");
	scanf("%d",&n);
	printf("\nEnter %d elements : \n",n);
	for(i = 0; i < n; i++)
	{
		scanf("%d  ", &arr1[i]);
	}
	printf("The given array is :  ");
	for(i = 0; i < n; i++)
	{
		printf("%d  ", arr1[i]);
    }
	printf("\n");
    printf("\nThe number of inversion can be formed from the array is:  %d", 	inv_count(arr1, n));
    return 0;
}
