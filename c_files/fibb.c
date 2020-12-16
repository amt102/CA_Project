#include <stdio.h> 
int fib(int n) 
{ 
    if (n <= 1) 
        return n; 
    return fib(n - 1) + fib(n - 2); 
} 
  
int main() 
{ 
    int n = 5; 
    printf("%d", fib(n)); 
    getchar(); 
    printf("fibb done!\n");
    return 0; 
} 