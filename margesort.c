#include<stdlib.h>
#include<stdio.h>
#include<time.h>
void merge(int arr[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;
	int L[n1], R[n2];
	for (i = 0; i < n1; i++)
	{
		L[i] = arr[l + i];
	}
	for (j = 0; j < n2; j++)
	{
		R[j] = arr[m + 1+ j];
	}
	i = 0;
	j = 0;
	k = l;
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}
	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}

void mergeSort(int arr[], int l, int r)
{
	if (l < r)
	{
		int m = l+(r-l)/2;
		mergeSort(arr, l, m);
		//printarr(arr,l,u);
		mergeSort(arr, m+1, r);
		merge(arr, l, m, r);
	}
}

int main()
{
	int arr[100];
	int arr_size;
	printf("\n Eter the size of the array: ");
	scanf("%d",&arr_size);
	for(int i =0;i<arr_size;i++)
	{
		printf("\n Enter %d  element : ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Given array is \n");
	for(int i=0;i<arr_size;i++)
	{
		printf("%d \t",arr[i]);
	}
	/*clock_t time;
	time=clock();*/
	mergeSort(arr, 0, arr_size - 1);
	/*time=clock() - time;
	double time_req = ((double)time)/CLOCKS_PER_SEC;*/
	printf("\nSorted array is \n");
	for(int i=0;i<arr_size;i++)
	{
		printf("%d \t",arr[i]);
	}
	//printf("\n Time taken is %f us.\n",time_req*1000000);
	return 0;
}
