/* Find Duplicate in Array.
Given a read only array of n integers between 1 and n, find one number that repeats.
Input Format:
First Line - Number of elements
n Lines - n Elements
Output Format:
Element x - That is repeated */

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = n * (n + 1) / 2;
    int newsum = 0;

    for (int i = 0; i < n; i++)
    {
        newsum += arr[i];
    }

    printf("%d", n - sum + newsum);
}
