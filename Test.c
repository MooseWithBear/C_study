#include <stdio.h>  

int main (void) {
int a=5;

check(a);
}

void check(int *a)
{
if(*a == 5) 
{
    printf("맞아요");
}

}

