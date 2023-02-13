#include <stdio.h>
#include <string.h>
#include <conio.h>


void change_symbol()
{
  char r;
  char str[100];
  char str2[100];
  printf("Vedite stroku \n ");
  gets(str);
  printf("Vedite simvol \n ");
  r = getch();
  printf("%c\n",r);
  str[0] = r;
  str[strlen(str)-1] = r;
  printf("Stroka s izmen pervoi i poslednei bukvoi na vhodnoi simvol \n ");
  puts(str);
}

void remove_space()
{
  char str[100];
  char str2[100];
  printf("Vedite stroku dly udaleniy probelov \n ");
  gets(str);
  int start = 0, end = strlen(str);
  for (int i = 0; i < strlen(str); i++)
  {
    if (str[i] != ' ')
    {
      break;
    }
    else
    {
      start++;
    }
  }

  for (int x = (strlen(str))-1; x > 0; x--)
  { 
    if (str[x] != ' ')
    {
      break;
    }
    else
    {
      end--;
    }
  }
  int j = 0;
  for (int i = start; i < end; i++)
  {
    str2[j] = str[i];
    j++;
  }
  str2[j] = str[strlen(str)];
  printf("Stroka c udal probelami v nachale i konse \n");
  puts(str2);
}

int main()
{
  change_symbol();
  remove_space();  
  return 1;
}
