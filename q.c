/*!
@file       the name of source file is q.c
@author     Najih & DP login: n.hajasheikallaudin
@course     This source file meant for RSE course    
@section    which section of this course are you enrolled in RSE
@tutorial   Lab 10
@date       file created on 10/11/2023
@brief      provide a brief explanation about what this source file does:
            
            This file is contains 4 function declaraction be to called by main in qdriver.
            Functions:
            - const char* build_path( const char* parent, const char* separator, const char* const folders[], size_t count );     // setting up the pathway.
            - void compare_string( const char* lhs, const char* rhs );                                                            // comparing strings by Comparing each character of both string of same positions for both string
            - void describe_string( const char* text );                                                                           // prints pathway and lenth of pathway
            - void find_string( const char* string, const char* substring );                                                      // finding string(substr) in string(str)
_____________________________________________________________________________________________________________________________________________________________________________________________________________________________*/
#include "q.h"
//#define USE_STRING

const char* build_path( const char* parent, const char* separator, const char* const folders[], size_t count ){     // setting up the pathway. 
    
    size_t size = 0;
    size += STRLEN(parent);                                                                                         //counting the total size of the pathway to be build.
    for(size_t i=0; i<count; i++){                                                                                  //
        size += STRLEN(folders[i]) + STRLEN(separator);                                                             //
    }

    char *string = (char*)debug_malloc(size+1);                                                                     // allocating byte size for string pointer so store the pathway to be build. 

    STRCPY(string,parent);                                                                                          // building the storing the pathway int string pointer 
    for(size_t i = 0; i<count; i++){
        STRCAT(string,folders[i]);
        STRCAT(string,separator);
    }

    return string;
}
void compare_string( const char* lhs, const char* rhs ){                                                            // comparing strings by Comparing each character of both string of same positions for both string

    if (STRCMP(lhs,rhs) < 0){                                                                                       
        printf("Left string goes first.\n");
    }
    else if(STRCMP(lhs,rhs) > 0){
        printf("Right string goes first.\n");
    }
    else if(STRCMP(lhs,rhs)==0){                                                                                    // if both strings are exactly same then STRCMP will give 0
        printf("Both strings are equal.\n");
    } 
}
void describe_string( const char* text ){                                                                           // prints pathway and lenth of pathway
    printf("The length of the path \"%s\" is %ld.\n", text, STRLEN(text));  
}
void find_string( const char* string, const char* substring ){                                                      // finding string(substr) in string(str)

    printf("Searching for a string:\n\tText:     %s\n\tSub-text: %s\n\t", string, substring);
    char *position = STRSTR(string, substring);
    
    if(position != NULL){
        long int result = position - string;
        printf("Result:   found %ld characters at a position %ld.\n", STRLEN(substring), result);
    }
    else{ printf("Result:   not found\n"); }

}