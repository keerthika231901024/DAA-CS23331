/* Playing with Numbers:
Ram and Sita are playing with numbers by giving puzzles to each other. Now it was Ram term, so he gave Sita a positive integer ‘n’ and two numbers 1 and 3. He asked her to find the possible ways by which the number n can be represented using 1 and 3.Write any efficient algorithm to find the possible ways.
Example 1:
Input: 6
Output:6
Explanation: There are 6 ways to 6 represent number with 1 and 3
         1+1+1+1+1+1
         3+3
         1+1+1+3
         1+1+3+1
         1+3+1+1
         3+1+1+1
Input Format
First Line contains the number n
Output Format
Print: The number of possible ways ‘n’ can be represented using 1 and 3
Sample Input
6
Sample Output
6 */

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    long long dp[1001];  
    dp[0] = 1;  
    for (int i = 1; i <= n; i++) {
        dp[i] = 0;
        if (i - 1 >= 0)
            dp[i] += dp[i - 1];
        if (i - 3 >= 0)
            dp[i] += dp[i - 3];
    }
    printf("%lld\n", dp[n]);
    return 0;
}
