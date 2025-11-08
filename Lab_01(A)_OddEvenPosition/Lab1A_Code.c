//HunkarChaware-IT-B-133
/*AIM: 1 A.	Write a program to accept ‘n’ numbers into an array and then calculate the sum of numbers present in odd positions and even positions respectively.	 
*/
#include <stdio.h>
int main() {
    int n, i, num[100];
    int sumEven = 0, sumOdd = 0;
    printf("Enter how many elements : ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &num[i]);
    for(i = 0; i < n; i++) {
        if((i + 1) % 2 == 0)
            sumEven += num[i];
        else
            sumOdd += num[i];
    }
    printf("Sum of numbers at odd positions = %d\n", sumOdd);
    printf("Sum of numbers at even positions = %d\n", sumEven);
    return 0;
}
