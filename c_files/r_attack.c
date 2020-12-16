#include <stdio.h>

int main()
{
        
        int arr[2000001];
        int sum ;
        for(int i=0 ; i<2000001; i++)
        {
                arr[i] = i;
        }
        for(int i = 0 ; i < 2000001 ; i += 1)
        {

        	sum += arr[i];
                //printf("%d ",sum );
        }
        printf("read attack done!\n");
        return 0;
}