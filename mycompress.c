#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#include "mycompress.h"


void mycompress(const char *outfile, const char *infile) {

    FILE *in, *out;
    char buffer[1024];


    if ((in = fopen(infile, "r")) == NULL) {
        fprintf(stderr, "fopen input failed: %s\n", strerror(errno));
        exit(EXIT_FAILURE);
    } 
        

    if ((out = fopen(outfile, "a")) == NULL) {
        fprintf(stderr, "fopen output failed: %s\n", strerror(errno));
        exit(EXIT_FAILURE);
        printf("\n");
        out = stdout;
    }
    while (fgets(buffer, sizeof(buffer), in) != NULL) {
        int i;
        int k = 1;
        
        for (i = 1; buffer[i] != '\0'; i++)
            {
            
                if (buffer[i] == buffer[i-1])
                    {
                        k++;
                    }
                if (buffer[i] != buffer[i-1])
                    {
                    

                        fputc(buffer[i-1],out);
                        fprintf(out, "%d", k);
                        k = 1;

                        if (buffer[i] == '\n')
                            {
                                fprintf(out, "\n");
                                fprintf(out, "%d", 1);
                            }
                    }
                
            

            }
            
    }


    if(ferror(in))
    {}
    fclose(in);
    fclose(out);
}


void mycompress2() {

    FILE *in, *out;
    char buffer[1024];

    char stdin_string[1024];   
    printf("Please enter a string: ");
    printf("\n");
    fgets(stdin_string, 1024, stdin);
    in = stdin;
    out = stdout;
    

    while (fgets(buffer, sizeof(buffer), in) != NULL) {
        int i;
        int k = 1;
        
        for (i = 1; buffer[i] != '\0'; i++)
            {
                printf("%s", buffer[i]);
                if (buffer[i] == buffer[i-1])
                    {
                        k++;
                    }
                if (buffer[i] != buffer[i-1])
                    {
                    

                        fputc(buffer[i-1],out);
                        fprintf(out, "%d", k);
                        k = 1;

                        if (buffer[i] == '\n')
                            {
                                fprintf(out, "\n");
                                fprintf(out, "%d", 1);
                            }
                    }
                
            

            }
            
    }
}