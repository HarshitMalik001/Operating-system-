#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
        int fd;
        char* c = (char *)calloc(100,sizeof(char));

        char name[1000];
        printf("File to read: ");
        scanf("%s",name);

        fd = open(name,O_RDONLY);
        if(fd<0)
        {
                printf("ERROR!\n");
                exit(1);
        }

        int sz;
        sz =  read(fd,c,10);

        printf("%s %d \n",c,sz);
        return 0;
}
