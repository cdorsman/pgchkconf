
#ifndef PGCHKCONF_H
#define PGCHKCONF_H

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>

#include <libpq-fe.h>

bool check_items_from_config(char * config_arg);
bool get_config_items_from_db();
int read_config_file(char * file_name);

#endif
