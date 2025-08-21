#include <stdio.h>

int main()
{

    int num, i = 1;
    printf("Enter Number: ");
    scanf("%d", &num);

    while (num >=i)
    {
        if (num % 2 != 0){        
            printf("%d\n",num);
        }
        num--;
    }

    return 0;
}