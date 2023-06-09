#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

void clean();
void print(int LengthSnake);

int snake[200][2];

int main(void)
{
     // DICHIARAZIONI DELLE VARIABILI
     int
     T, i, direzionex = -1, direzioney = 0, cambiodirX = 0, cambiodirY = 0, termina = 0, Len = 8, punti = 0, cibo = 0, ciboX, ciboY, record = 0, scelta;

     FILE *fp;

     fp = fopen("record", "r");
     if(fp != NULL)
     {
          fread(&record, 1, 1, fp);
          fclose(fp);
     }

     // SCELTA DELLA DIFFICOLTA'
     system("CLS");
     textcolor(15);
     gotoxy(30,3); puts("Snake 2D by Riccardo Brugnera");
     gotoxy(30,5); printf("IL TUO RECORD E': %d", record);
     gotoxy(30,7); puts("DIFFICOLTA'");
     gotoxy(30,9); puts("1) Facilissimo");
     gotoxy(30,10); puts("2) Facile");
     gotoxy(30,11); puts("3) Medio");
     gotoxy(30,12); puts("4) Difficile");
     gotoxy(30,13); puts("5) Estremo");
     gotoxy(32,15); puts("Scelta: ");

     do scelta = getch(); while(scelta < 49 || scelta > 53);

     switch(scelta)
     {
          case 49:
               T=250;
               break;
          case 50:
               T=125;
               break;
          case 51:
               T=75;
               break;
          case 52:
               T=35;
               break;
          case 53:
               T=15;
               break;
     }
     system("CLS");

     // INIZIALIZZAZIONE SNAKE
     for(i=0; i<200; i++)
     {
          snake[i][0] = 1;
          snake[i][1] = 1;
     }
     snake[0][0] = 40;
     snake[0][1] = 11;

     // DISEGNO QUADRO DEL GIOCO
     gotoxy(1,22);
     textcolor(12);
     for(i=1; i<=80; i++)
          putchar('=');

     // SCRIVO I PUNTI
     clean();
     gotoxy(1,23);
     textcolor(15);
     printf("PUNTI = %d \t RECORD = %d \n", punti, record);
     printf("Premi P per mettere in pausa. ESC per ritornare al menu.");

     // RANDOMIZZO PER IL CIBO
     srand(time(NULL));

     //CICLO GENERALE, SI ESCE CON ESC
     while(termina==0)
     {
          Sleep(T); // VELOCITA' (SCELTO DALL'UTENTE)

          // GENERO E DISEGNO IL CIBO
          if(cibo==0)
          {
               rigenera:
               ciboX = rand() % 80 + 1;
               ciboY = rand() % 21 + 1;

               for(i=0; i<Len; i++)
                    if(snake[i][0] == ciboX && snake[i][1] == ciboY)
                         goto rigenera;

               textcolor(6);
               gotoxy(ciboX,ciboY);
               putchar('');
               cibo=1;
          }

          // GESTIONE DIREZIONE DEL SERPENTE
          if(kbhit())
          {
               switch(getch())
               {
                    case 'w':
                    case 'W':
                         cambiodirX = 0;
                         cambiodirY = -1;
                         break;
                    case 'a':
                    case 'A':
                         cambiodirX = -1;
                         cambiodirY = 0;
                         break;
                    case 's':
                    case 'S':
                         cambiodirX = 0;
                         cambiodirY = 1;
                         break;
                    case 'd':
                    case 'D':
                         cambiodirX = 1;
                         cambiodirY = 0;
                         break;
                    case 'p':
                    case 'P':
                         clean();
                         gotoxy(1,23);
                         textcolor(15);
                         system("PAUSE");
                         clean();
                         break;
                    case 27:
                         termina = 1;
               }
               // CONTROLLO SE IL CAMBIO DELLA DIREZIONE E' NEL SENSO OPPOSTO DELL'ATTUALE DIREZIONE
               // SE SI, NON CAMBIA DIREZIONE..
               if((cambiodirX) != -(direzionex) && (cambiodirY) != -(direzioney))
               {
                    direzionex = cambiodirX;
                    direzioney = cambiodirY;
               }
          }

          // SHIFT DEL SERPENTE
          for(i=Len-1; i>0; i--)
          {
               snake[i][0]=snake[i-1][0];
               snake[i][1]=snake[i-1][1];
          }
          // SPOSTAMENTO DELLA TESTA DEL SERPENTE
          // controlla se si trova nei limiti dello schermo
          if(snake[0][0] + direzionex == 81)
               snake[0][0] = 1;

          else if(snake[0][0] + direzionex == 0)
               snake[0][0] = 80;

          else if(snake[0][1] + direzioney == 22)
               snake[0][1] = 1;

          else if(snake[0][1] + direzioney == 0)
               snake[0][1] = 21;

          //SE NON SI TROVA NEI LIMITI
          else
          {
               snake[0][0]+=direzionex;
               snake[0][1]+=direzioney;
          }

          // CONTROLLO SE IL SERPENTE MANGIA PARTE DEL CORPO
          for(i=1; i<Len; i++)
          {
               if(snake[0][0] == snake[i][0] &&
                  snake[0][1] == snake[i][1])
               {
                    clean();
                    gotoxy(1,23);
                    textcolor(15);
                    printf("HAI PERSO!! PUNTEGGIO: %d \n", punti);
                    if(punti > record)
                    {
                         printf("NUOVO RECORD !!! \t");
                         fp = fopen("record", "w");
                         fwrite(&punti, 1, 1, fp);
                         fclose(fp);
                    }
                    system("PAUSE");
                    termina = 1;
               }
          }

          // STAMPA DELLA TESTA
          gotoxy(snake[0][0],snake[0][1]);
          textcolor(10);
          putchar('\376');

          // CANCELLO LA CODA
          gotoxy(snake[Len-1][0],snake[Len-1][1]);
          putchar(' ');

          // INCREMEMTO DEL SERPENTE SE MANGIA CIBO
          if(snake[0][0] == ciboX && snake[0][1] == ciboY)
          {
               Len+=5;
               punti++;
               cibo=0;
               clean();
               gotoxy(1, 23);
               textcolor(15);
               printf("PUNTI = %d \t RECORD = %d \a\n", punti, record);
               printf("Premi P per mettere in pausa. ESC per ritornare al menu.");
          }
     }

     main();
     return 0;
}

void clean()
{
     int i;

     gotoxy(1,23);
     for(i=1; i<=160; i++)
          putch(' ');
}
