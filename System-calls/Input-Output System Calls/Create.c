#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
int main()
{
        char *filename = "newf.txt";

        mode_t mode = S_IRUSR;

        int fd = creat(filename,mode);

        close(fd);
        return 0;
}
