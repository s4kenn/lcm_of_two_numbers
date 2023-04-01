#include <stdio.h>
int LCM2(int a, int b)
{
    int ans = 0;
    if (a > b)
    {
        ans = a;
    }
    else
    {
        ans = b;
    }
    for (int i = ans; i <= a * b; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            return i;
        }
        else
        {
            continue;
        }
    }
}
int main()
{
    int numberOne, numberTwo;
    printf("Enter the numbers\n");
    scanf("%d %d", &numberOne, &numberTwo);
    printf("The LCM of %d and %d is %d", numberOne, numberTwo, LCM2(numberOne, numberTwo));
    return 0;
}
