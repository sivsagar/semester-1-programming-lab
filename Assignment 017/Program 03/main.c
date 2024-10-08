/*check whether number is armstrong or not*/

#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int originalNum, remainder, n = 0;
    double result = 0.0;

    originalNum = num;
    for (originalNum = num; originalNum != 0; ++n) {
        originalNum /= 10;
    }
    originalNum = num;
    for (originalNum = num; originalNum != 0; originalNum /= 10) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
    }
    return (int)result == num;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}

/*    OutPut   
  Enter a number: 2
2 is an Armstrong number.
  */