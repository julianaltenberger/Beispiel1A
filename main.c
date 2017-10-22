#include "mycompress.h"

char *a_arg = NULL;
int c;

while ( (c = getopt(argc, argv, "o:")) != -1) {
    switch(c) {
        case 'o': a_arg = optarg;
            break;
        case '?': /* invalid Option */
            break;
    }
}
int main(int argc, char *argv[])
{
    give_input("asdf");

}



