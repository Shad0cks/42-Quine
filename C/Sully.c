#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
int i = 5;
i--;
if (i < 0){return 0;}
char file_name[100] = "Sully_";
sprintf(file_name + 6, "%d", i);
char file_name_w[100] = {0};
memcpy(file_name_w, file_name, strlen(file_name));
strcat(file_name, ".c");
void * fd = fopen(file_name, "w");
char * str = "#include <stdio.h>%1$c#include <stdlib.h>%1$c#include <string.h>%1$cint main(void){%1$cint i = %3$d;%1$ci--;%1$cif (i < 0){return 0;}%1$cchar file_name[100] = %2$cSully_%2$c;%1$csprintf(file_name + 6, %2$c%5$cd%2$c, i);%1$cchar file_name_w[100] = {0};%1$cmemcpy(file_name_w, file_name, strlen(file_name));%1$cstrcat(file_name, %2$c.c%2$c);%1$cvoid * fd = fopen(file_name, %2$cw%2$c);%1$cchar * str = %2$c%4$s%2$c;%1$cfprintf(fd, str, 10, 34, i, str, 37);%1$cfclose(fd);%1$cchar cmd[100];%1$csprintf(cmd, %2$cclang -Wall -Wextra -Werror -o %5$cs %5$cs && ./%5$cs%2$c, file_name_w, file_name, file_name_w);%1$csystem(cmd);%1$c}";
fprintf(fd, str, 10, 34, i, str, 37);
fclose(fd);
char cmd[100];
sprintf(cmd, "clang -Wall -Wextra -Werror -o %s %s && ./%s", file_name_w, file_name, file_name_w);
system(cmd);
}