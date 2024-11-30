char *ft_strncat(char *dest, char *src, unsigned int nb){
    unsigned int i = 0 ;
    unsigned int j = 0 ;
    while(dest[i] != '\0'){
        i++;
    }
    while(src[j] != '\0' && j < nb){
        dest[i] = src[j];
        j++;
        i++;
    }
    dest[i] = '\0';
    return dest;
 }
 