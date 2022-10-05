
#include "pgchkconf.h"

int main(int argc, char **argv) 
{
    char *file_name;

    // Check amount of args and if it is a file
    if((argc < 1) | (argc > 2) | (access(argv[1], F_OK) != 0)) 
    {
        return 1;
    } 

    file_name = argv[1];
    
    if(read_config_file(file_name)) {
        return 0;
    } else {
        fprintf(stderr, "Error while reading file\n");
        return 1;
    }
    
    return 0;
}
