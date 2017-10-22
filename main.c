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
            case 'o': o_arg = optarg;
            
                break;
            case '?': /* invalid Option */
                printf("case?");
                break;
    }
    printf("test");
    printf("%d", argc);
   if (argc == 1) {
       printf("argc0");
       mycompress("stdout.txt", "stdin.txt");
   }

   if (argc == 3){
       printf("argc3");
       mycompress(o_arg, "stdin.txt");
   }
   if (argc > 3){
        printf("argc>3");
        for (int i = 3; i < argc; i++){
            printf("%d", i);
            mycompress(o_arg, argv[i]);
        }



   }
    

}



