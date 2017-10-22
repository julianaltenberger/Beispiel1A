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
                break;
    }
   printf("test");

   if (argc == 2){
       mycompress(o_arg, "stdin.txt");
   }
   if (argc > 2){

        for (int i = 3; i <= argc; i++){
            printf("%d", i);
            mycompress(o_arg, argv[i]);
        }



   }
    

}



