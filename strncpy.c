#include <stdio.h>
 char *ft_strncpy(char *dest, char *src, unsigned int n){
    int i = 0;
    while(src[i] != '\0'&& i <n){ //difo kan f mo9aranat src[i] m3a n ++> khesk t9aren i be n  .
        
        dest[i] = src[i];
        i++;
    }
    dest[i]= '\0';
    return dest;
 }
