#include <stdio.h>
#define file "Grace_kid.c"
#define ext "#include <stdio.h>%c#define file %c%s%c%c#define ext %c%s%c%c#define load(w) int main(void){fprintf(fopen(file, w), ext, 10, 34, file, 34, 10, 34, ext, 34, 10, 10, 34, 34, 10, 10, 10);}%cload(%cw%c);%c/*%cAH BAH SI%c*/"
#define load(w) int main(void){fprintf(fopen(file, w), ext, 10, 34, file, 34, 10, 34, ext, 34, 10, 10, 34, 34, 10, 10, 10);}
load("w");
/*
AH BAH SI
*/