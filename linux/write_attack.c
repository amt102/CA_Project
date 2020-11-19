
#include <stdio.h>

int main()
{
    int i=0;
    int ptr[2048];
    for(i=0;i<1024;i=i+10)
    {
        ptr[i]=0xff;
    }
    printf("Write attack Done!\n");
    return 0;
}
