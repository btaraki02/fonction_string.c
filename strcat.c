#include <stdio.h>
 char *ft_strcat(char *dest, char *src){
while(*dest != '\0'){
    dest++;
}

while(*src != '\0'){
    *dest = *src;
    dest++;
    src++;
}
*dest != '\0';
return dest;

 }
 /*
----------------------------->
 int main(){
char momo[101];
printf("enter your text:a ");
gets(momo);
char lolo[1010];
printf("enter your text:b ");
gets(lolo);
char *src = momo;
char *dest = lolo;
ft_strcat(dest,src);
printf("%s",lolo);
return 0;
 } 
 ---------------------------->
 */