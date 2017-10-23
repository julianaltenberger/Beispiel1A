#include "mycompress.h"
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int charcount = 0;

int main(int argc, char *argv[])
{
    char *o_arg = NULL;
    int optc = 0;

    int c = getopt(argc, argv, "o:");
        switch(c) {
            case 'o': o_arg = optarg;
                optc++;
            
                break;
            case '?': /* invalid Option */
                printf("case?");
                break;
    }
    
   if (argc == 1) {
      mycompress2();
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
   if (argc > 1 && optc == 0) {
    
                fprintf(stderr, "No valid Option %s", strerror(errno));
                exit(EXIT_FAILURE);
            } 
    printf("%i", charcount);
}



