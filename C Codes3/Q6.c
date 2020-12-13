#include <stdio.h>
int main()
{
	int array[10]={1,5,34,2,33,6,56,67,90,98};
	int n, i, j, pos, swap;

		for (i = 0; i < 10; i++)
				
			for(i = 0; i < 10 - 1; i++)
					{
						pos=i;
						for(j = i + 1; j < 10; j++)
							{
								if(array[pos] > array[j])
								pos=j;
							}
					if(pos != i)
					{
						swap=array[i];
						array[i]=array[pos];
						array[pos]=swap;
					}
					}
						printf("Sorted Array:\n");
						for(i = 0; i < 10; i++)
						printf("%d\n", array[i]);
						printf("Smallest %d\n", array[0]);
						printf("Maximum %d\n", array[9]);
				return 0;
}
