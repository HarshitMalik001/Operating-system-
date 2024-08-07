#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
        int fd;
        fd = open("file.txt",O_RDWR|O_CREAT,0644);

        if(fd < 0)
        {
                printf("ERROR \n");
                return 0;
        }

        int sz = write(fd,"Hello there\n",14);
        close(fd);
        return 0;
}
