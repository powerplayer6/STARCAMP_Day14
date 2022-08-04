#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE* f_ptr = fopen("TextTest", "wb");
    if(!f_ptr)
    {
        perror("Could not open file \n");
        exit(-1);
    }
    long arr[]= {63, 64, 65, 66};
    fwrite(arr, sizeof(long), 4, f_ptr);
    fclose(f_ptr);
    return 0;
}