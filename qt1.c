#include <stdio.h>
#include<time.h>
int n,c=0;
void quicksort(int[],int,int);
int partition(int[],int,int);
int main()
{
        clock_t begin=clock();
        int a[50],i;
        printf("\nEnter no. of elements: ");
        scanf("%d",&n);
        printf("\nEnter array elements to be sorted:\n");
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
        printf("\n\nSTEPS:\n");
        quicksort(a,0,n-1);
        printf("\nArray after sorting:\n");
        for(i=0;i<n;i++)
        {
                printf("%d ",a[i]);
        }
        printf("\n");
        clock_t end=clock();
        double time_spent=(double)(end-begin)/CLOCKS_PER_SEC;
        time_spent=time_spent*1000;
        printf("\nTime span: %lf millisec and number of comparison=%d\n\n",time_spent,c);
        return 0;
}
void quicksort(int a[],int low,int high)
{
        int pivot;
        if(low<high)
        {
                pivot=partition(a,low,high);
                quicksort(a,low,pivot-1);
                quicksort(a,pivot+1,high);
        }
}
int partition(int a[],int low,int high)
{
        int m,v,i,j,temp;
        v=a[low];
        printf("\nPivot is: %d\n",v);
        i=low;
        j=high+1;
        for(m=0;m<n;m++)
        {
                printf("%d ",a[m]);
        }
        printf("\n");
        do
        {
		c=c-2;
                do
                     {
                        i++;
                        c++;
                     }while(a[i]<v&&i<=high);
                do
                      {
                        j--;
                        c++;
                      }while(v<a[j]);
                if(i<j)
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
        }
        while(i<j);
        a[low]=a[j];
        a[j]=v;
        return(j);
}
