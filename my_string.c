/*!
@file       the name of source file is q.c
@author     Najih & DP login: n.hajasheikallaudin
@course     This source file meant for RSE course    
@section    which section of this course are you enrolled in RSE
@tutorial   Lab 10
@date       file created on 10/11/2023
@brief      provide a brief explanation about what this source file does:
            
            This file is contains 5 function declaraction be to called by main in qdriver.
            Functions:
            - size_t my_strlen(const char* str);                            // count the number of characers in the string till NULL terminator is found using while loop
            - char* my_strcpy(char* dest, const char* src);                 // copy each characer in a string into a another string variable
            - char* my_strcat(char* dest, const char* src);                 // concatenate the strings (put one string after other string)
            - int my_strcmp(const char* lhs, const char* rhs);              // Compare each character of both string of same positions
            - char* my_strstr(const char* str, const char* substr);         // finding string(substr) in string(str)
_____________________________________________________________________________________________________________________________________________________________________________________________________________________________*/
#include "my_string.h"

size_t my_strlen(const char* str){                                          // count the number of characers in the string till NULL terminator is found using while loop
    size_t length = 0;
    while (*str != '\0') { length++;str++; }
    return length;
}

char* my_strcpy(char* dest, const char* src){                               // copy each characer in a string into a another string variable
    char* temp = dest;
    while ((*dest++ = *src++) != '\0');                                     // copy from string until the NULL terminator is found
    return temp;
}

char* my_strcat(char* dest, const char* src){                               // concatenate the strings (put one string after other string) 
    char* temp= dest;
    while (*dest != '\0') { dest++; }                                       // shifting the position of dest pointer to the end of the string
    while ((*dest++ = *src++) != '\0');                                     // Copy characters from string until the NULL terminator is found
    return temp;
}

int my_strcmp(const char* lhs, const char* rhs){                            // Compare each character of both string of same positions
    while (*lhs != '\0' && *rhs != '\0' && *lhs == *rhs) {                  // making sure that each characters in a string are exactly the same in the exact same position
        lhs++; rhs++;
    }
    return (*lhs - *rhs);                                                   // Returns 0 if the strings are equal
}

char* my_strstr(const char* str, const char* substr){                       // finding string(substr) in string(str) 
    
    if (*substr == '\0') { return (char*)str; }                             // if substr is empty return str
    while (*str != '\0') {                                                  // Compare each character of both string of same positions using while loop

        const char* s = str;
        const char* sub = substr;

        while (*s != '\0' && *sub != '\0' && *s == *sub) { s++; sub++; }    // making sure that each characters in a string are exactly the same in the exact same position
        if (*sub == '\0') { return (char*)str; }                            // If the substring is found, return a pointer to the beginning of its first occurrence
        str++;          
    }

    return NULL;                                                            // If the substring is not found, return NULL
}