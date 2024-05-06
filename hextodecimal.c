// Online C++ compiler to run C++ program online
#include<stdio.h>
#include<math.h>

int hexacode(char *hex)
{
    int len = 0;
    int i = 0;
    
    while (hex[i] != '\0')
    {
        len++; i++;
    }
    
    i = 0;
    unsigned int decimal = 0;
    while (hex[i] != '\0')
    {
        //aDf12
        int digit = hex[i] - '0';
        
        printf("\nascii values %c %c\n",hex[i], '0');
        printf("1. %d\n",digit);
        if (hex[i] >='a' && hex[i] <= 'f')
        {
            digit = hex[i] - 'a' + 10;
            printf("2. %d\n",digit);
        }
        else if (hex[i] >='A' && hex[i] <= 'F')
        {
            digit = hex[i] - 'A' + 10;
            printf("3. %d\n", digit);
        }
        
        decimal += pow(16, len - i - 1) * digit;
        i++;
    }
    
    return decimal;
}


int main() {
    
    char a[] = "aDf12";
    printf ("decimal of %s is %d ", a, hexacode(a));

    return 0;
}
