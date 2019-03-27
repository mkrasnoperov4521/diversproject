//
//  main.c
//  Project05
//
//  Created by Maxim Krasnoperov on 3/19/19.
//  Copyright © 2019 Maxim Krasnoperov. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

FILE *get_file(char* filename);

void print_greeting(void);

void get_filename( char filename[]);



int main(int argc, const char * argv[])
{

    char filename[25];
    // insert code here...
    print_greeting();
    get_filename(filename);
    *get_file(filename);
    
    printf("%s", filename);
   
    
    
    FILE * fopen(const char * filename, const char * r);
    
    
    
 
    return 0;
}

FILE *get_file(char* filename)
{
    FILE *divers;
    
    divers = fopen( filename, "r");
    
    if (divers == NULL)
    {
        printf("Unable to open file. Try again.");
        return 0;
    }
    
    
    
    return divers;
}

void print_greeting(void)
{
    printf("Welcome to the diving competition scoring program.\n");
}

void get_filename(char filename[])
{
    printf("Enter the diving data file name: \n");
     scanf("%s", filename);
}

