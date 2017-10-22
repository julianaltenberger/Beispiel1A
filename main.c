#include "mycompress.h"
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    char *o_arg = NULL;

    int c = getopt(argc, argv, "o:");
        switch(c) {
            case 'o:': o_arg = optarg;
                break;
            case '?': /* invalid Option */
                break;
    }

printf("%s", o_arg);
mycompress(o_arg);

}



