#include"func.h"
#include<dos.h>
#include<stdlib.h>
void main()
{
	char ch, name;
	char word='_';
	int score=0, level=1,live=5;
	int i, temp=1, j, k,l,enter;         //for loop counting
	char el[6]={ '_','_','_','_','_' };  //el stands for empty letters
	char words3[][3]=      		     //array of 3 letters word
	   { "top",
	     "rat",
	     "bat",
	     "cat",
	     "man",
	     "hat",
	     "hut",
	     "cut",
	     "bit",
	     "pen" };
	char words4[][4]=               //array of 4 letter words
	   { "four",
	     "page",
	     "home",
	     "girl",
	     "bird",
	     "lamp",
	     "drop",
	     "high",
	     "tick",
	     "copy" };
	char words5[][5]=               //array of 5 letter words
	   { "earth",
	     "nokia",
	     "white",
	     "bread",
	     "table",
	     "zebra",
	     "mango",
	     "paris",
	     "eagle",
	     "china",
	     "tiger"};

	clrscr();
	gotoxy(1, 7);
	delay(100);
	hangman_brand();
	delay(100);
	//loading2();
	mainmenu:
	clrscr();
	gotoxy(1, 1);
	hangman_brand();
					    gotoxy(30, 13);
	printf("*****MAIN MENU*****  \n");  gotoxy(30, 15);
	printf("| P: PLAY         | \n");  gotoxy(30, 16);
	printf("| H: HOW TO PLAY  | \n");  gotoxy(30, 17);
	printf("| A: ABOUT        | \n");  gotoxy(30, 18);
	printf("| C: CREDITS      | \n");  gotoxy(30, 19);
	printf("| Q: QUIT         |   ");  gotoxy(13, 22);
	printf("Enter you choice:\t");
	ch = getch();


	if(ch == 'q' || ch == 'Q')
		exit(0);

	switch(ch)
		{
			case 'p':
			case 'P':

			clrscr();

			mode:
			hangman();
			modes();

			gotoxy(52, 24);
			printf("Press 'M' to goto MAIN MENU");
			gotoxy(40,14);
			printf("Enter choice:\t");
			ch=getche();
			if(ch == 'm' || ch == 'M')
			goto mainmenu;

			switch(ch)
			{
			case '3':
			t:
			clrscr();
			mainscreen();
			gotoxy(3,3);
			printf("LEVEL:");
			gotoxy(60,3);
			printf("LIVES:");
			gotoxy(70,3);
			printf("SCORE:");
			gotoxy(1,6);
			hangman();
			gotoxy(50, 11);
			printf("Guess the letter:\t");
			for(i=0; i<10;i++)
			{
			gotoxy(9,3);
			printf("%d",level);
			for(j=0;j<3;j++)
			{
				enter = 0;
				gotoxy(50, 10);
				printf("%c %c %c",el[0], el[1], el[2]);
				gotoxy(50,12);
				word=getche();
				if(words3[i][0]==word)
				{
					el[0] = word;
					enter = 1;
				}
				if(words3[i][1]==word)
				{
					el[1] = word;
					enter = 1;
				}
				if(words3[i][2]==word)
				{
					el[2] = word;
					enter = 1;
				}

				if(enter==1)
				{
					score++;
					gotoxy(76,3);
					printf("%d",score);
				}
				else
				{
				temp++;
				live--;
				}
				if(live==0)
				exit(0);
				gotoxy(66,3);
				printf("%d",live);
			}  //end of j loop
			level++;
			el[0]='_';el[1]='_';el[2]='_';
			}    //end of i loop
			getch();
			clrscr();
			goto mode;

			case '4':
			clrscr();
			printf("This is 4 letter game");
			getch();
			goto mainmenu;
			case '5':
			clrscr();
			getch();
			goto mainmenu;
			default:
			clrscr();
			goto mode;
			}
			case 'h':
			case 'H':
			gotoxy(10, 10);
			how_to_play();
			getch();
			clrscr();
			goto mainmenu;
			case 'a':
			case 'A':
			about();
			getch();
			clrscr();
			goto mainmenu;
			case 'c':
			case 'C':
			credits();
			break;
			default:
			printf("enter valid key");
			goto mainmenu;
		}
	getch();
}
