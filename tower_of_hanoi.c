#include <stdio.h>
 
void tower(int, char, char, char);
 
int main()
{
    int num;
    scanf("%d", &num);
    tower(num, 'A', 'C', 'B');
    return 0;
}
void tower(int num, char frompeg, char topeg, char auxpeg)
{
    if (num == 1)
    {
        printf("\n Move disk 1 from peg %c to peg %c", frompeg, topeg);
        return;
    }
    tower(num - 1, frompeg, auxpeg, topeg);
    printf("\n Move disk %d from peg %c to peg %c", num, frompeg, topeg);
    tower(num - 1, auxpeg, topeg, frompeg);
}
