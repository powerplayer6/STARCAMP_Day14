#include<fcntl.h>
#include<unistd.h>
#include<string.h>
int main()
{
    char* buf= "HELLO SYSCALLS!\n";
    int sym_num = strlen(buf);
    int written_count;
    written_count = write(1, buf, sym_num);
    if(written_count!=sym_num)
    {
        write(2, "Could not write to file!\n", 26);
    }
    return 0;
}