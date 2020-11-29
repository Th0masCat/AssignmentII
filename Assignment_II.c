// Assignment_II.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Author: Sahil Jangra, CSE2X, 093

#include <stdio.h>
#include <math.h>
int main()
{
    //1. Write a C program to print all alphabets from a to z.
    char ch;
    printf("List of Alphabets from a to z:\n");
    for (ch = 'a'; ch <= 'z'; ch++)
    {
        printf("%c\n", ch);
    }

    //2. Write a C program to print all even numbers between 1 to 100.
    int i, a, b;

    printf("Lower limit:");
    scanf_s("%d", &a);
    printf("Upper limit: ");
    scanf_s("%d", &b);

    printf("Even numbers from %d to %d are: \n", a, b);

    if (a % 2 != 0)
    {
        a++;
    }

    for (i = a; i <= b; i += 2)
    {
        printf("%d\n", i);
    }

    //3. Write a C program to find sum of all odd numbers between 1 to n
    int i, n, sum;
    sum = 0;

    printf("Upper limit: ");
    scanf_s("%d", &n);

    for (i = 1; i <= n; i += 2)
    {
        sum += i;
    }

    printf("Sum = %d", sum);

    //4. Write a C program to print multiplication table of any number
    int i, n;

    printf("Enter number to print table: ");
    scanf_s("%d", &n);

    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, (n * i));
    }

    //5. Write a C program to count number of digits in a number
    long long n;
    int count = 0;

    printf("Enter a number: ");
    scanf_s("%lld", &n);

    do
    {
        count++;
        n /= 10;
    } while (n != 0);

    printf("No of digits: %d", count);

    //6. Write a C program to find first and last digit of a number
    int n, a, b, digits;

    printf("Number: ");
    scanf_s("%d", &n);
    b = n % 10;
    digits = (int)log10(n);

    a = (int)(n / pow(10, digits));

    printf("First digit = %d\n Last digit = %d\n", a, b);

    //7. Write a C program to swap first and last digits of a number
    int n, N;
    int a, b, digits;

    printf("Number: ");
    scanf_s("%d", &n);
    b = n % 10;
    digits = (int)log10(n);

    a = (int)(n / pow(10, digits));

    N = b;
    N *= (int)round(pow(10, digits));
    N += n % ((int)round(pow(10, digits)));
    N -= b;
    N += a;

    printf("Original = %d", n);
    printf("Number after swapping: %d", N);

    //8. Write a C program to find frequency of each digit in each integer
    long long num, n;
    int i, b;
    int freq[10];

    printf("Number: ");
    scanf_s("%lld", &num);
    for (i = 0; i < 10; i++)
    {
        freq[i] = 0;
    }

    n = num;

    while (n != 0)
    {
        b = n % 10;
        n /= 10;
        freq[b]++;
    }

    printf("Frequency of each digit in %lld is: \n", num);
    for (i = 0; i < 10; i++)
    {
        printf("Frequency of %d = %d\n", i, freq[i]);
    }
    

    //9. Write a C program to enter a number and print it in words
    long num, div, n1;
    int flag, digit, pos, totalDigits;

    flag = 0;

    printf("\nEnter a number: ");
    scanf_s("%ld", &num);
    
    if (num == 0) {
        printf("Zero\n");
        exit(0);
    }
    
    if (num > 99999) {
        printf("Enter a number between 0-100000\n\n");
        exit(0);
    }
    
    totalDigits = 0;
    div = 1;
    n1 = num;
    while (n1 > 9) {
        n1 = n1 / 10;
        div = div * 10;
        totalDigits++;
    }
    
    totalDigits++;
    pos = totalDigits;

    while (num != 0) {
        
        digit = num / div;
        num = num % div;
        div = div / 10;
        
        switch (pos) {
        
        case 2:
        
        case 5:
            if (digit == 1)
                flag = 1;
            else {
                flag = 0;
                switch (digit) {
                case 2: printf("Twenty "); break;
                case 3: printf("Thirty "); break;
                case 4: printf("Forty "); break;
                case 5: printf("Fifty "); break;
                case 6: printf("Sixty "); break;
                case 7: printf("Seventy "); break;
                case 8: printf("Eighty "); break;
                case 9: printf("Ninty ");
                }
            }
            break;
        case 1:
        case 4:
            if (flag == 1) {
                flag = 0;
                switch (digit) {
                case 0: printf("Ten "); break;
                case 1: printf("Eleven "); break;
                case 2: printf("Twelve "); break;
                case 3: printf("Thirteen "); break;
                case 4: printf("Fourteen "); break;
                case 5: printf("Fifteen "); break;
                case 6: printf("Sixteen "); break;
                case 7: printf("Seventeen "); break;
                case 8: printf("Eighteen "); break;
                case 9: printf("Nineteen ");
                }
            }
            else {
                switch (digit) {
                case 1: printf("One "); break;
                case 2: printf("Two "); break;
                case 3: printf("Three "); break;
                case 4: printf("Four "); break;
                case 5: printf("Five "); break;
                case 6: printf("Six "); break;
                case 7: printf("Seven "); break;
                case 8: printf("Eight "); break;
                case 9: printf("Nine ");
                }
            }
            if (pos == 4)
                printf("Thousand ");
            break;
        case 3:
            if (digit > 0) {
                switch (digit) {
                case 1: printf("One "); break;
                case 2: printf("Two "); break;
                case 3: printf("Three "); break;
                case 4: printf("Four "); break;
                case 5: printf("Five "); break;
                case 6: printf("Six "); break;
                case 7: printf("Seven "); break;
                case 8: printf("Eight "); break;
                case 9: printf("Nine ");
                }
                printf("Hundred ");
            }
            break;
        }
        pos--;
    }
    if (pos == 4 && flag == 0)
        printf("Thousand");
    else if (pos == 4 && flag == 1)
        printf("Ten Thousand");
    if (pos == 1 && flag == 1)
        printf("Ten ");

    
    //10. Write a C program to print all ASCII character with their values.
    int i;
    for (i = 0; i <= 255; i++)
    {
        printf("ASCII value of character %c = %d\n", i, i);
    }
    
}

