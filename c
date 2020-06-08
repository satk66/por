#include <stdio.h>
 
int main()
{
    int i=1, sum=0;
 
    while (i <= 10) {
 
        sum += i;        
        i=i+1;
    }
 
    printf ("1에서 10까지의 합은 %d", sum);
}

