#include <dirent.h>
#include <stdio.h>
# include "ft_ls.h"

// -l, -R, -a, -r and -t.
// bonus -u,  -1 (вертикальный вывод), -m, -s, -S
// bonus time like ls from standart lib

static int filecount(char *path)
{
    int file_Count = 0;
    DIR *dirp;
    struct dirent *entry;
    dirp = opendir(path);
    while ((entry = readdir(dirp)) != NULL)
    {
        ft_printf("Found (%llu)(%d): %s\n", entry->d_ino, entry->d_type, entry->d_name);
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
    ft_printf("Processing %s:\n", dir);
    ft_printf("File count = %d\n", filecount(dir));
}

int main(int argc, char **argv)
{
    int i;
    i = 0;

    if (argc > 1)
    {
        for (i = 1; i < argc; i++)
            proc_dir(argv[i]);
    }
    else
        proc_dir(".");
    return 0;
}
