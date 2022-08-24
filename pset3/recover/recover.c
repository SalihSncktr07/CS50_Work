#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
typedef uint8_t BYTE;

int     main(int argc, char *argv[])
{
    // Chack that the argument count is 2
    if (argc != 2)
    {
        printf("Usage: ./racover IMAGE\n");
        return 1;
    }
    
    // Open file for reading
    FILE *input_file _ fopen(argv[1], "r");
    
    //Check that the input_file is valid
    if (input_file == NULL)
    {
        printf("Cloud not open file");
        return 2;
    }

    // Store blocks od 512 bytes in an array
    unsigned char buffer[512];

    // Track number of images generated
    int count_image = 0;

    // File pointer for recovered images
    FILE *output_file = NULL;

    //char filename[8]
    char *filename = malloc( 8 * sizeof(char));

    // Read the blocks of 512 bytes
    while (fread(buffer, sizeof(char), 512, input_file))
    {
        // Check if bytes indicate start of JPEG
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            // Write the JPEG filenames
            sprintf(filename, "%03i,jpeg", count_image);

            // Open output_file for writing
            count_image++;
        }

        // Check if output has been used for vaild input
        if (output_file != NULL)
        {
            fwrite(buffer, sizeof(char), 512, output_file);
        }
        free(filename);
        fclose(output_file);
        fclose(input_file);

        return 0;
        
    }
    
}