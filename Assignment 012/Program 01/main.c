/* WAP in c to define a function that prints
the factorial of a given number.
*/  
#include <stdio.h>
void factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    printf("Factorial of %d = %d\n", n, fact);
}
int main() {
    int n;

    printf("Enter an integer : ");
    scanf("%d", &n);

    factorial(n);

    return 0;
}

/* --------- OUTPUT ---------
Enter an integer : 5
Factorial of 5 = 120

*/
