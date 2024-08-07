#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>


int main()
{
        int fd;

        char name[1000];

        scanf("%s",name);
        int perm = 0644;

        fd = open(name ,O_CREAT | O_WRONLY,perm);

        if(fd==-1)
        {
                printf("ERROR! \n");
        }
        else
        {
                close(fd);
                printf("File Created succesfully");
        }
        return 0;
}
             
