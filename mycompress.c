#include <stdio.h>
#include <errno.h>
#include <string.h>
#include "mycompress.h"


void mycompress(const char *outfile, const char *infile) {

    FILE *in, *out;
    char buffer[1024];

    if ((in = fopen(infile, "r")) == NULL)
    {} 
        

    if ((out = fopen(outfile, "w")) == NULL)
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
