#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *reemplazarcadena(char *str, char *orig, char *rep)
{
  char *buffer;
  char *p;
  if(!(p = strstr(str, orig)))
    return str;
  buffer=(char*)malloc(strlen(str)+strlen(rep)-strlen(orig)+1);
  strncpy(buffer, str, p-str); 
  sprintf(buffer+(p-str), "%s%s", rep, p+strlen(orig));
  return reemplazarcadena(buffer, orig, rep);
}

int main(){
	char original[30];
	char bPalabra[20];
	char rpalabra[20];
	
	printf("\nIngrese la oracion original: \n");
	gets(original);
	printf("\nIngrese la palabra a reempalazar: \n");
	gets(bPalabra);
	printf("\nIngrese la palabra reemplazo: \n");
	gets(rpalabra);

  puts(reemplazarcadena(original, bPalabra, rpalabra));

  return 0;
}
