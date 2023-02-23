#include <stdio.h>
void nullf() {}
/*
JE SUIS LE COMMENTAIRE EXTERIEUR
*/
int main(void)
{
	char * x = "#include <stdio.h>%cvoid nullf() {}%c/*%cJE SUIS LE COMMENTAIRE EXTERIEUR%c*/%cint main(void)%c{%c%cchar * x = %c%s%c;%c%c/*%c%cJE SUIS LE COMMENTAIRE INTERIEUR%c%c*/%c%cprintf(x, 10, 10, 10, 10, 10, 10, 10, 9, 34, x, 34, 10, 9, 10, 9, 10, 9, 10, 9, 10, 9, 10, 9, 10);%c%cnullf();%c}";
	/*
	JE SUIS LE COMMENTAIRE INTERIEUR
	*/
	printf(x, 10, 10, 10, 10, 10, 10, 10, 9, 34, x, 34, 10, 9, 10, 9, 10, 9, 10, 9, 10, 9, 10, 9, 10);
	nullf();
}

