#include <stdio.h>
#include <conio.h>
char a[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
int k = 0;
int f = 1;

void box()
{
     printf("\n\n\t\t\t %c | %c | %c\n", a[0], a[1], a[2]);
     printf("\t\t\t___|___|___\n");
     printf("\t\t\t %c | %c | %c\n", a[3], a[4], a[5]);
     printf("\t\t\t___|___|___\n");
     printf("\t\t\t %c | %c | %c\n", a[6], a[7], a[8]);
     printf("\t\t\t   |   | ");
}

void ply()
{
     printf("\n\tplayer 1 : x\n");
     printf("\tplayer 2 : 0\n");
}

void start()
{
     char S;
     printf("\nenter your position = ");
     fflush(stdin);
     scanf("%c", &S);
     int i;
     if (k == 0)
     {
          for (i = 0; i <= 8; i++)
          {
               if (a[i] == S)
               {
                    printf("player 1");
                    a[i] = 'x';
                    k = 1;
                    break;
               }
          }
     }
     else
     {

          for (i = 0; i <= 8; i++)
          {
               if (a[i] == S)
               {
                    printf("player 2");
                    a[i] = '0';
                    k = 0;
                    break;
               }
          }
     }
}

int cheak()
{
     if (a[0] == 'x' && a[1] == 'x' && a[2] == 'x')
     {
          return (1);
     }
     else if (a[3] == 'x' && a[4] == 'x' && a[5] == 'x')
     {
          return (1);
     }
     else if (a[6] == 'x' && a[7] == 'x' && a[8] == 'x')
     {
          return (1);
     }
     else if (a[0] == 'x' && a[3] == 'x' && a[6] == 'x')
     {
          return (1);
     }
     else if (a[1] == 'x' && a[4] == 'x' && a[7] == 'x')
     {
          return (1);
     }
     else if (a[2] == 'x' && a[5] == 'x' && a[8] == 'x')
     {
          return (1);
     }
     else if (a[0] == 'x' && a[4] == 'x' && a[8] == 'x')
     {
          return (1);
     }
     else if (a[2] == 'x' && a[4] == 'x' && a[6] == 'x')
     {
          return (1);
     }

     else if (a[0] == '0' && a[1] == '0' && a[2] == '0')
     {
          return (2);
     }
     else if (a[3] == '0' && a[4] == '0' && a[5] == '0')
     {
          return (2);
     }
     else if (a[6] == '0' && a[7] == '0' && a[8] == '0')
     {
          return (2);
     }
     else if (a[0] == '0' && a[3] == '0' && a[6] == '0')
     {
          return (2);
     }
     else if (a[1] == '0' && a[4] == '0' && a[7] == '0')
     {
          return (2);
     }
     else if (a[2] == '0' && a[5] == '0' && a[8] == '0')
     {
          return (2);
     }
     else if (a[0] == '0' && a[4] == '0' && a[8] == '0')
     {
          return (2);
     }
     else if (a[2] == '0' && a[4] == '0' && a[6] == '0')
     {
          return (2);
     }
     else if (a[0] != '1' && a[1] != '2' && a[2] != '3' &&
              a[3] != '4' && a[4] != '5' && a[5] != '6' && a[6] != '7' && a[7] != '8' && a[8] != '9')
     {

          return (3);
     }
}

void end()
{
     int var;
     var = cheak();

     switch (var)
     {

     case 1:
          printf("\t\t\tplayer 1 win");
          f = 0;
          break;
     case 2:
          printf("\t\t\tplayer 2 win");
          f = 0;
          break;
     case 3:
          printf("\t\t\tdraw");
          f = 0;
          break;
     }
}

int main()
{

     ply();
     box();
     start();
     while (f)
     {
          box();
          start();
          end();
     }
     box();
     getch();
}
