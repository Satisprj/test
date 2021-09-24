//Why is this program not running? Please, help me.
// WAP to print palindrome numbers from 1 to 1000.
#include <stdio.h>
int main()
{
    int m, rem, s;
    for (int n = 1; n <= 1000; n++)
    {
        m = n, s = 0;
        while (n > 0)
        {
            rem = n % 10;
            s = s * 10 + rem;
            n = n / 10;
        }
        if (s == m)
        {
            printf("%d ", m);
        }
    }
    return 0;
}
