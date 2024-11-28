int ft_strlen(char *str)
 {
    int n = 0;
        while(*str != '\0'){//<== *p
            n++;
            str++;
        }
        *str = '\0';//<==
        return n;
 }
