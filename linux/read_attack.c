
#include <stdio.h>

int main()
{
    int i=0;
    int ptr[2048];
    int sum=0;
    for(i=0;i<1024;i++)
    {
        sum+=ptr[i];
    }
    printf("%d",sum);
    printf("Read Attack Done!\n");
    return 0;
}
