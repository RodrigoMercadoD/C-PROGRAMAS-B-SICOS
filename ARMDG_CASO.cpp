#include<stdio.h>
main() {
char ch;
printf("Introduzca una vocal: ");
ch=getchar();
switch(ch) {
case 'a': puts("Se ha pulsado una a.");
break;
case 'e': puts("Se ha pulsado una e.");
break;
case 'i': puts("Se ha pulsado una i.");
break;
case 'o': puts("Se ha pulsado una o");
break;
case 'u': puts("Se ha pulsado una u.");
case 'A': puts("Se ha pulsado una A.");
break;
case 'E': puts("Se ha pulsado una E.");
break;
case 'I': puts("Se ha pulsado una I.");
break;
case 'O': puts("Se ha pulsado una O");
break;
case 'U': puts("Se ha pulsado una U.");
break;
default: puts("No le sabes");
}
}

