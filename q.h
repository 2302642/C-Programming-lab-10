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
#include <stdio.h>

#ifdef USE_STRING

#include <string.h>

#define STRLEN strlen
#define STRCPY strcpy
#define STRCAT strcat
#define STRCMP strcmp
#define STRSTR strstr

#else

#include "my_string.h"

#define STRLEN my_strlen
#define STRCPY my_strcpy
#define STRCAT my_strcat
#define STRCMP my_strcmp
#define STRSTR my_strstr

#endif

/****************************************
* Defined in qdriver.c *
****************************************/
void* debug_malloc( size_t size );
void debug_free( void* ptr );

/****************************************
* Define in q.c *
****************************************/
const char* build_path( const char* parent, const char* separator, const char* const folders[], size_t count );     // setting up the pathway.
void compare_string( const char* lhs, const char* rhs );                                                            // comparing strings by Comparing each character of both string of same positions for both string
void describe_string( const char* text );                                                                           // prints pathway and lenth of pathway
void find_string( const char* string, const char* substring );                                                      // finding string(substr) in string(str)