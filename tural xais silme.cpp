#include <stdio.h>
int main() {
 int eded, yuz, onl, tek, cem;
 printf("Ededi daxil edin: ");
 scanf("%d", &eded);
 yuz = eded / 100;
 onl = (eded / 10) % 10;
 tek = eded % 10;
 cem = yuz + onl + tek;
 printf("Reqemlerin cemi = %d", cem);
 return 0;
}
