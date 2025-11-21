#include<stdio.h>
int main() 
{
    int N, A, B;
    printf("Enter the number of episodes (N): ");
    scanf("%d", &N);
    printf("Enter the duration of even-indexed episodes (A): ");
    scanf("%d", &A);
    printf("Enter the duration of odd-indexed episodes (B): ");
    scanf("%d", &B);

    int i,total_duration = 0;

    for(i=1;i<=N;i++) 
	{
        if (i % 2 == 0) 
		{ // Even indexed
            total_duration += A;
        }
		else 
		{ // Odd indexed
            total_duration += B;
        }
    }
    printf("Total duration of the last season: %d minutes\n", total_duration);
    return 0;
}
