#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num)
{
    if (num <= 1)
        return false;
    if (num == 2)
        return true;
    if (num % 2 == 0)
        return false;
    
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0)
            return false;
    }
    return true;
}

bool isPalindrome(int num) {
    int reversed = 0, original = num;

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return (original == reversed);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num) && isPalindrome(num)) {
        printf("%d is a prime palindrome.\n", num);
    } else {
        printf("%d is NOT a prime palindrome.\n", num);
    }

    return 0;
    }
