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
 /*
 ------------------------------>
 int main(){
    unsigned int nb;
char momo[1010];
printf("enter your text:a ");
gets(momo);
char lolo[1010];
printf("enter your text:b ");
gets(lolo);
printf("enter nb : ");
scanf("%u",&nb);
char *src = momo;
char *dest = lolo;
ft_strncat(dest,src,nb);
printf("%s",lolo);
return 0;
}
------------------------------->
*/