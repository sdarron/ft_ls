#include <dirent.h>
#include <stdio.h>

static
int filecount(char *path)
{
    int file_Count = 0;
    DIR *dirp;
    struct dirent *entry;
    dirp = opendir(path);
    while ((entry = readdir(dirp)) != NULL)
    {
        printf("Found (%llu)(%d): %s\n", entry->d_ino, entry->d_type, entry->d_name);
        if (entry->d_type == DT_REG)
        {
            ++file_Count;
        }
    }
    closedir(dirp);
    return file_Count;
}

static void proc_dir(char *dir)
{
    printf("Processing %s:\n", dir);
    printf("File count = %d\n", filecount(dir));
}

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        for (int i = 1; i < argc; i++)
            proc_dir(argv[i]);
    }
    else
        proc_dir(".");
    return 0;
}
