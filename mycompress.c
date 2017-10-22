#include <stdio.h>
#include <errno.h>
#include <string.h>
#include "mycompress.h"
#include "main.c"


void mycompress(const char *name) {

    FILE *in, *out;
    char buffer[1024];

    if ((in = fopen("data.txt", "r")) == NULL)
    {} 
        

    if ((out = fopen(o_arg, "w")) == NULL)
    {}
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
