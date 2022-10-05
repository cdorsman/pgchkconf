#include "pgchkconf.h"

struct config_item 
{
    char * name;
    char * value;
    char * type;
    char * min;
    char * max;
};

bool check_items_from_config(char * config_arg) 
{
    return true;
}

bool get_config_items_from_db() 
{
    return true;
}

int read_config_file(char * file_name)
{
    FILE *fp;
    char *buffer = NULL;
    size_t len = 0;
    ssize_t line;
    
    // Open file with file descriptor
    fp = fopen(file_name, "r");
    if (fp == NULL) 
    {
        fprintf(stderr, "Unable to open file: %s\n", strerror(errno));
        return 1;
    }
    
    // Create buffer for getline
    if ((buffer = malloc(256)) != NULL) 
    {
        len = 256; 
    }

    // Read file line for line
    while ((line = getline(&buffer, &len, fp)) != -1)
    {
        fwrite(buffer, 1, line, stdout);    
    }

    printf("\n");
    
    // Close file descriptor and free buffer.
    fclose(fp);
    free(buffer);

    return 0;
}
