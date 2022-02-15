#include<stdio.h>
#include<conio.h>
#include<dos.h>
void hangman_brand(void);
void loading2(void);
void hangman(void);
void hangman1(void);
void how_to_play(void);
void about(void);
void modes(void);
void credits(void);
void mainscreen();

void hangman_brand(void)             //function for hangman brand
{
	printf("   _________________________________________________________________________ \n");
	printf("  |                                                                         |\n");
	printf("  | **   **      **      ***   **  ******  ***    ***      **      ***   ** |\n");
	printf("  | **   **     ****     ****  ** **    ** ****  ****     ****     ****  ** |\n");
	printf("  | *******    **  **    ** ** ** **       ** **** **    **  **    ** ** ** |\n");
	printf("  | *******   ********   **  **** **   *** **  **  **   ********   **  **** |\n");
	printf("  | **   **  **********  **   *** **    ** **      **  **********  **   *** |\n");
	printf("  | **   ** **        ** **    **  ******  **      ** **        ** **    ** |\n");
	printf("  |_________________________________________________________________________|\n");
	printf("                                                            Can you save me?");
}                                     //end of hangman brand function

void loading2(void)      //function for down loading
{
	int i;      //for looping
	gotoxy(3,23);       //to move the cursor x & y direction
	for(i = 0; i < 73; i++)      //start of for loop
	{
	printf("_");
	}                       //end of for loop

	delay(1000);                //delay time
	gotoxy(3,23);
	printf("|\\");
	delay(200);

	for(i = 0; i < 25; i++)
	{
		printf("\\");
		delay(100);
	}
	printf("\\");
	delay(1000);

	for(i = 0; i < 19; i++)
	{
		printf("\\");
		delay(100);
	}
	for(i = 0; i < 27; i++)
	{
		printf("\\");
		delay(50);
	}
	printf("|");
	delay(200);
}                                //end of down loading

void hangman(void)              //function for hangman
{
	printf("  ____                    \n");
	printf("   ||                     \n");
	printf("   ||================     \n");
	printf("   ||     *      |        \n");
	printf("   ||    *       |        \n");
	printf("   ||   *       * *       \n");
	printf("   ||  *       *   *      \n");
	printf("   || *         * *       \n");
	printf("   ||*           |        \n");
	printf("   ||          /|||\\\    \n");
	printf("   ||        /  |||  \\\  \n");
	printf("   ||           |||       \n");
	printf("   ||          // \\\\    \n");
	printf("   ||        //     \\\\  \n");
	printf("   ||                     \n");
	printf("   ||      please save me \n");
	printf("=========    from hangman.\n");
}                                                //end of hangman function

void hangman1(void)              //function for hangman
{
	printf("  ____                    \n");
	printf("   ||                     \n");
	printf("   ||================     \n");
	printf("   ||     *      |        \n");
	printf("   ||    *       |        \n");
	printf("   ||   *       * *       \n");
	printf("   ||  *       *   *      \n");
	printf("   || *         * *       \n");
	printf("   ||*           |        \n");
	printf("   ||          /|||\\\    \n");
	printf("   ||        /  |||  \\\  \n");
	printf("   ||           |||       \n");
	printf("   ||          //         \n");
	printf("   ||        //           \n");
	printf("   ||                     \n");
	printf("   ||      please save me \n");
	printf("=========    from hangman.\n");
}                                                //end of hangman function

void how_to_play(void)             //function for how to play menu
{
	clrscr();
	gotoxy(1, 5);
	printf(" ******************************** HOW TO PLAY ********************************");                                                  gotoxy(2, 7);
	printf("> You have to use the keyboard and guess the word.\n");                                                                            gotoxy(2, 8);
	printf("> If you will enter right letter, and the letter is in the word the game will\n   tell you the position of the entered letter.\n");gotoxy(2, 10);		printf("> The more you will guess the more you will score.\n");                                                                     gotoxy(2, 11);
	printf("> If you will enter wrong letters 5 times then you will lose the game.");                                                          gotoxy(2, 13);
	printf("\nPress any key to go to MAIN MENU:");
}                                  //end of how to play function

void about(void)                  //function for about menu
{
	clrscr();
	gotoxy(1, 5);
	printf(" *********************************** ABOUT ***********************************");   gotoxy(2, 7);
	printf("> Hangman is the game where you have to guess the word.\n");     		            gotoxy(2, 8);
	printf("> You will have to guess the maximum words for the maximum score.\n");              gotoxy(2, 9);
	printf("> Every level will have the new word.\n");                                          gotoxy(2, 10);
	printf("> 1 correct letter will give the player 1 score.\n");                               gotoxy(2, 11);
	printf("> You have the n choices to find the maximum words\n");                             gotoxy(2, 13);
	printf("\nPress any key to go to MAIN MENU:");
}                               //end of about menu

void modes(void)               //function for modes in play menu
{
	gotoxy(40,8);
	printf("  ...SELECT MODE...\n");       gotoxy(40,10);
	printf("| 3: 3 LETTER GAME |\n");  gotoxy(40,11);
	printf("| 4: 4 LETTER GAME |\n");  gotoxy(40,12);
	printf("| 5: 5 LETTER GAME |\n");
}                                //end of modes menu

void credits(void)
{
	clrscr();
	gotoxy(1, 3);
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ SUBMITTED BY ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
	printf("                                  VISHAL KUMAR                                   \n");
	printf("                           MASOOM ZAID  |  MOHAMMAD ZAKARIYA                       ");
	getch();
	gotoxy(1, 10);
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ROLL NO. ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
	printf("                                   1875110061                                    \n");
	printf("                           1875110036  |  1875110038                               ");
	getch();
	clrscr();
	gotoxy(1, 3);
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ MINI PROJECT ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
	printf("                               Hangman Game using C                                ");
	getch();
	gotoxy(1, 9);
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ INSTITUTE ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
	printf("                   KIPM COLLEGE OF ENGINEERING & TECHNOLOGY                        ");
	getch();
	//clrscr();
	gotoxy(1, 14);
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ SUBMITTED TO ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
	printf("                     Mr. ANURAG SINGH  &  Mr. VINOD YADAV                          ");
}

void mainscreen()
{
       int count,c1=5;
       for(count=1;count<80;count++)
       {
       gotoxy(count,4);
       printf("-");
       }
   /*    for(count=1;count<20;count++)
       {
       gotoxy(70,c1);
       printf("|\n");
       c1++;
       }*/
}
