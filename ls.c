#include <stdio.h>
#include <dirent.h>

int main(int argc, char **argv) {
    DIR *dp;
    struct dirent *link;
    dp = opendir(argv[1]);
    printf("\nContents of the directory %s are:\n", argv[1]);
    while ((link = readdir(dp)) != 0)
        printf("%s\n", link->d_name);
    closedir(dp);
}
