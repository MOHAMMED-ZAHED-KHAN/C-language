#include <stdio.h>
void hanoi(int n, char rod_A, char rod_B, char rod_C)
{
	if (n == 1)
	{
		printf("\n Move disk 1 from rod_%c to rod_%c",rod_A ,rod_B );
		return;
	}
	hanoi(n-1, rod_A,rod_C, rod_B);
	printf("\n Move disk %d from rod_%c to rod_%c", n, rod_A, rod_B);
	hanoi(n-1, rod_C, rod_B,rod_A);
}

int main()
{
	int no_of_disks ;
	printf("Enter number of disks: ");
	scanf("%d", &no_of_disks);
	hanoi(no_of_disks, 'A','C','B'); 
	return 0;
}
