#include "mycompress.h"

char *a_arg = "stdout.txt";
int c;

c = getopt(argc, argv, "o:");
    switch(c) {
        case 'o': a_arg = optarg;
            break;
        case '?': /* invalid Option */
            break;
    }
int main(int argc, char *argv[])
{
    give_input("asdf");

}



