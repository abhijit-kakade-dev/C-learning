
// return array


#include<stdio.h>
#include<stdlib.h>

void disp(int arr[], int s);
int main()
{
	int i, arr[10];
	
	disp(arr,10);
	
	printf("Printing array outside a function");
	
	for(i=0; i<10; i++)
		printf("\n arr[%d] = %d", i, arr[i]);
	
	return 0;

}

void disp(int arr[], int s)
{
	int i;
	
	printf("Enter %d elements in array", s);
	
	for(i=0; i<s; i++)
		scanf("%d", &arr[i]);
	
	printf("Printing array inside the function");
		
	for(i=0; i<s; i++)
		printf("\n arr[%d]=%d", i, arr[i]);
	
	for(i=0; i<s; i++)
		arr[i] = arr[i] + 10;
		
}
