#include <stdio.h>
  int main()
     {
        int a[10], n,i,j,temp;
		printf("Enter the no of elements: ");
		scanf("%d", &n);
		printf("Enter the elements in the array: ");
		for(i=0; i<n; i++)
		   {
		   	scanf("%d", &a[i]);
			   }	
			for(i=1; i<n; i++)
			{
				for(j=0; j<n-1; j++)
				{
					if(a[j] > a[j+1])
				   {
				   	 temp = a[j];
						a[j]=a[j+1];
						a[j+1]=temp;
					   }	
				}
				
			}
			  for(i=0; i<n; i++)
			   {
			   	printf("%d\n",a[i]);
			   }
			   return 0;
	 }
  
