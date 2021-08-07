// C program to traverse the array

#include <stdio.h>

// Function to traverse and print the array
void printArray(int* arr, int n)
{
	int i;
	printf("Array: ");
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

// Driver program
int main()
{
	int arr[] = { 2, -1, 5, 6, 0, -3 };
	int n = sizeof(arr) / sizeof(arr[0]);

	printArray(arr, n);

	return 0;
}


// ****************************************************************************

// #include<stdio.h>
// int main()
// {
//     int num, sum=0, rem;
//     printf("Enter the number : ");
//     scanf("%d", &num);
//     for(num; num > 0;)
//     {
//         rem = num % 10;
//         sum = sum + rem;
//         num = num / 10;
//     }
//     printf("Sum of the digits is %d", sum);
//     return 0;
// }