#include <stdio.h>
#define MAX_NUM 10
int main()
{
    int numberOfEntries, n, Sum = 0;
    
    printf("Enter the number of entries to sum (maximum of 10): ");

    // integer entered by user stored using scanf()
    scanf("%d", &numberOfEntries);
	
	// while loop executed as long as a number greater than 0 was entered
    while(numberOfEntries > 0){
		if (numberOfEntries > MAX_NUM){ // if too many numbers are to be summed, program breaks out of while loop
			printf("Error - too many numbers to sum\n");
			break;
		}
		printf("Enter an integer: ");
		scanf("%d", &n);				// reads in an integer and stores in n
		Sum += n;						// adds n to Sum
		numberOfEntries--;				// decrements numberOfEntries
	}

    // display output     
    printf("Sum = %d\n", Sum);
	printf("\n");
	printf("\n");
    return 0;
}