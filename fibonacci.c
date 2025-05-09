#include <stdio.h>

int fibonacci(int n)
{
    int memory[n];
    memory[0]=0;
    memory[1]=1;
    int i;

    for ( i = 2; i <= n; i++)
    {
        memory[i]=memory[i-1]+memory[i-2];

    }
    return memory[n];
    
}

int main(){

    int n; 
    printf("Kacinci indexi istiiyon?"); 
    scanf("%d",&n);
    printf(" %d'nci index = %d",n,fibonacci(n));



    return 0;
}