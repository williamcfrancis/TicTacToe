#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<iomanip.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<fstream.h>
#include<graphics.h>
#include<dos.h>
void computerAI();
void singleplayer();
void playerinput();
void multiplayer();
void boardsingle();
void boardmulti();
int checkwinsingle();
int checkwinmulti();
char square[10]={'0','1','2','3','4','5','6','7','8','9'};
void main()
		 {
		  window(10,10,400,400);
		  clrscr();
		  textcolor(15);
		  gotoxy(40,50);
		  int x,y,i;
		  int g=DETECT, d;
		  initgraph(&g, &d,"C:\\TC\\BGI");
		  cleardevice();
		  x=170;
		  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
		  setbkcolor(9);
		  setcolor(13);
		  outtextxy(150,180,"\n LOADING, PLEASE WAIT \n");
		  setcolor(10);
		for(i=0;i<350;++i)
		{
		delay(11);
		line(x,220,x,240);
		x++;
		}
		cleardevice();
		x=getmaxx()/2;
		y=getmaxy()/2;
		  setcolor(10);
		 settextstyle(TRIPLEX_FONT, HORIZ_DIR, 5);
		settextjustify(x,y);
		outtextxy(x-70,y-90,"WELCOME");
		 delay(200);
		 outtextxy(x-10,y-40,"TO\n");
		 delay(200);
		 setcolor(14);
		 settextstyle(DEFAULT_FONT, HORIZ_DIR, 5);
		outtextxy(x-200,y+40,"TIC TAC TOE");
		 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t     ";
		 setcolor(15);
		system("pause");
		 closegraph();
		  system("cls");
		  textcolor(15);
		  gotoxy(40,50);
		  window(1,1,400,400);
		  textbackground(CYAN);
		  clrscr();
		  menu:
		  system("cls");
		  window(10,10,400,400);
		  textbackground(11);
		  clrscr();
		  textcolor(15);
		  gotoxy(40,50);
		  cout<<"\t\n\n\n\n\n";
		  cout<<"\t\t\t    __________Menu__________\n\n";
		  cout<<"\t\t\t        1. Single Player\n\n";
		  cout<<"\t\t\t        2. Multi Player\n\n";
		  cout<<"\t\t\t        3. Help\n\n";
		  cout<<"\t\t\t        4. Exit Game\n";
		  cout<<"\t\t\t    ________________________";
		  cout<<"\n\n\n\t\t\t        Enter you choice: ";
		  int ch;
		  cin>>ch;
		  if(ch==2)
		  {
		    system("cls");
		    window(10,10,400,400);
		    textbackground(CYAN);
		    clrscr();
		    textcolor(15);
		    gotoxy(40,50);
		    multiplayer();
		  }
		  else if(ch==1)
		  {
		  system("cls");
		  window(10,10,400,400);
		  textbackground(CYAN);
		  clrscr();
		  textcolor(15);
		  gotoxy(40,50);
		  singleplayer();
		  }
		  else if(ch==4)
		  {
		  exit(0);
		  }
		  else if(ch==3)
		  {
		  system("cls");
		  window(10,10,400,400);
		  textbackground(CYAN);
		  clrscr();
		  textcolor(15);
		  gotoxy(40,50);
		  cout<<"\n\t\t__________________HELP__________________\n\n";
		  cout<<" * Select the game mode from menu using a number (1-4).\n\n";
		  cout<<" * After selecting your desired game mode, enter your name to keep your\n   details intact and view them every time you play.\n\n";
		  cout<<" * You will be redirected to the game board where you can play the game.\n\n";
		  cout<<" * The objective of the game is to complete a row or column or a diagonal\n   with your mark (X or O).\n\n";
		  cout<<" * The game will be declared as a draw if neither of the two players win.\n\n";
		  cout<<" * Choose a position (1-9) on the game board to place your mark (X or O).\n\n";
		  cout<<" * The game provides with an option to view your score statistics of all\n   the games you have played.\n\n";
		  cout<<" * The score statistics show your total number of games played, total\n   number of wins, looses and draws and also your win percentage.\n\n";
		  cout<<" * Choose whether to play again or to quit the game when prompted.\n";
		getch();
		goto menu;
		 }
		 }

	void multiplayer()
		 {
		  char re;
		  char player1[50];
		  cout<<"\n\n\n\t\t\tPlayer 1, Please enter your name: ";
		  cin>>player1;
		  char player2[50];
		  cout<<"\n\n\n\n\t\t\tPlayer 2, Please enter your name: ";
		  cin>>player2;
	       do
		{
		   for(int j=0;j<10;j++)
		     {
		       char k[10]={'0','1','2','3','4','5','6','7','8','9'};
		       square[j]=k[j];
		     }
		   clrscr();
		   int player=1;
		   int i,choice;
		   char mark;
		   do
		    {
		      boardmulti();
		      player=(player%2)?1:2;
		      mark=(player == 1) ? 'X' : 'O';
		      cout << "\n\t\tPlayer "<<player<<", Please choose a grid to place ("<<mark<<"): ";
		      cin >> choice;
		      cout<<"\n";
		      if (choice == 1 && square[1] == '1')
			square[1] = mark;
		      else if (choice == 2 && square[2] == '2')
			square[2] = mark;
		      else if (choice == 3 && square[3] == '3')
			square[3] = mark;
		      else if (choice == 4 && square[4] == '4')
			square[4] = mark;
		      else if (choice == 5 && square[5] == '5')
			square[5] = mark;
		      else if (choice == 6 && square[6] == '6')
			square[6] = mark;
		      else if (choice == 7 && square[7] == '7')
			square[7] = mark;
		      else if (choice == 8 && square[8] == '8')
			square[8] = mark;
		      else if (choice == 9 && square[9] == '9')
			square[9] = mark;
		      else
		       {
			cout<<"\t\t\t\tInvalid move! ";
			player--;
			getch();
		       }
		      i=checkwinmulti();
		      player++;
		     }while(i==-1);
		    boardmulti();
		    if(i==1||i==0)
				   {
			char winner[50],loser[50];
		    if(i==1)
		       {
			  int winnernum= --player;
			  if(winnernum==1)
		       {
			 cout<<"\a\t\t\t"<<player1<<" wins against "<<player2<<"\n";
			 strcpy(winner, player1);
			 strcpy(loser, player2);
			 getchar();
		       }
		    else if(winnernum==2)
		       {
			 cout<<"\a\t\t\t"<<player2<<" wins against "<<player1<<"\n";
			 strcpy(winner, player2);
			 strcpy(loser, player1);
			 getchar();
		       }
		    }
		    else if(i==0)
		    {
			 cout<<"\a\t\t\t\t  Game Draw\n";
			 strcpy(winner, player2);
			 strcpy(loser, player1);
			 getchar();
		    }


		    int winnerloses=0, loserloses=0;
		    float loserwins=0.0, winnerwins=0.0, winnertotal=0.0,losertotal=0.0, winnerpercent=0.0, loserpercent=0.0;
		    char readname[50];
		    fstream victory;
		    victory.open("Winners.dat",ios::in|ios::out|ios::app);
		    if(i==1)
		    {
		    victory.seekg(0,ios::end);
		    victory<<winner;
		    victory<<' ';
		    victory.seekg(ios::beg);
		    }
		    do
		      {
		       victory>>readname;
		       if(strcmpi(readname,winner)==0)
		       winnerwins++;
		       if(strcmpi(readname,loser)==0)
		       loserwins++;
		      }while(victory.eof()==0);
		   victory.close();
		   fstream defeat;
		   defeat.open("Losers.dat",ios::in|ios::out|ios::app);
		   if(i==1)
		   {
		   defeat.seekg(0,ios::end);
		   defeat<<loser;
		   defeat<<' ';
		   defeat.seekg(0,ios::beg);
		   }
		   do
		     {
		      defeat>>readname;
		      if(strcmpi(readname,winner)==0)
		      winnerloses++;
		      if(strcmpi(readname,loser)==0)
		      loserloses++;
		     }while(defeat.eof()==0);

		  defeat.close();
		  int winnerdraws=0,loserdraws=0;
		   fstream draw;
		   draw.open("Draw.dat",ios::in|ios::out|ios::app);
		   draw.seekg(0,ios::end);
		   if(i==0)
		   {
		   draw<<winner;
		   draw<<' ';
		   draw<<loser;
		   draw<<' ';
		  }
		  draw.seekg(0,ios::beg);
		  do
		   {
		     draw>>readname;
		     if(strcmpi(readname,winner)==0)
		       winnerdraws++;
		     if(strcmpi(readname,loser)==0)
		       loserdraws++;
		   }while(draw.eof()==0);
		  winnertotal=winnerwins+winnerloses;
		  losertotal=loserwins+loserloses;
		  winnerpercent=(winnerwins/winnertotal)*100;
		  loserpercent=(loserwins/losertotal)*100;
		  char choice;
		  system("cls");
		  textcolor(15);
		  gotoxy(40,50);
		  window(1,1,400,400);
		  textbackground(CYAN);
		  clrscr();
		  cout<<"\n\n\n\n\n    "<<winner<<", Do you like to view your Score Statistics? (y/n): ";
		  cin>>choice;
		  if(choice=='y'||choice=='Y')
		    {
		      system("cls");
		      textcolor(15);
		      gotoxy(40,50);
		      window(1,1,400,400);
		      textbackground(6);
		      clrscr();
		      cout<<"\n\n\n\t\t_____________Score Statistics of "<<winner<<"_____________";
		      cout<<"\n\n\t\t    Total Games Played         : "<<winnertotal;
		      cout<<"\n\t\t    Total number of Victories  : "<<winnerwins;
		      cout<<"\n\t\t    Total number of Defeats    : "<<winnerloses;
		      cout<<"\n\t\t    Total number of Draws      : "<<winnerdraws;
		      cout<<"\n\t\t    Win Percentage             : "<<setprecision(1)<<winnerpercent<<"%";
		      cout<<"\n\n\t\t_____________________________________________________";
		      getchar();
		     }
		  system("cls");
		  textcolor(15);
		  gotoxy(40,50);
		  window(1,1,400,400);
		  textbackground(CYAN);
		  clrscr();
		  cout<<"\n\n\n\n\n    "<<loser<<", Do you like to view your Score Statistics? (y/n): ";
		  cin>>choice;
		 if(choice=='y'||choice=='Y')
		   {
		     system("cls");
		     textcolor(15);
		     gotoxy(40,50);
		     window(1,1,400,400);
		     textbackground(6);
		     clrscr();
		     cout<<"\n\n\n\t\t_____________Score Statistics of "<<loser<<"_____________";
		     cout<<"\n\n\t\t    Total Games Played         : "<<losertotal;
		     cout<<"\n\t\t    Total number of Victories  : "<<loserwins;
		     cout<<"\n\t\t    Total number of Defeats    : "<<loserloses;
		     cout<<"\n\t\t    Total number of Draws      : "<<loserdraws;
		     cout<<"\n\t\t    Win Percentage             : "<<setprecision(1)<<loserpercent<<"%";
		     cout<<"\n\n\t\t_____________________________________________________";
		     getchar();
		   }
		   system("cls");
		   textcolor(15);
		   gotoxy(40,50);
		   window(1,1,400,400);
		   textbackground(CYAN);
		   clrscr();
		   cout<<"\n\n\n\n\n    Do you like to play again? (y/n):  ";
		   cin>>re;
		   system("cls");
		   }
		if(re=='N'||re=='n')
		  {
		    system("cls");
		    textcolor(15);
		    gotoxy(40,50);
		    window(1,1,400,400);
		    textbackground(15);
		    clrscr();
		    cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t         ================\n";
		    cout<<"\t\t\t         = Exiting Game =\n";
		    cout<<"\t\t\t         ================\n";
		   getch();
		   }


	     }while(re=='y'||re=='Y');
	    }

void singleplayer()
	    {
	     char re;
	     char human[50];
	     cout<<"\n\n\n\t\t\tPlayer, Please enter your name: ";
	     gets(human);
	     do
	       {
		for(int j=0;j<10;j++)
		 {
		  char k[10]={'0','1','2','3','4','5','6','7','8','9'};
		  square[j]=k[j];
		 }
		clrscr();
		char nametaken[50];
		int i=-1,randompick;
		int player=1;
		do
		  {
		   if (player==1)
		     {
		       playerinput();
		       player=2;
		       boardsingle();
		     }
		  else if(player==2)
		     {
		       cout<<"\t\t\tComputer is deciding its move";
		       for(int s=0;s<2;s++)
		       sleep(s);
		       computerAI();
		       player=1;
		       boardsingle();
		     }
		  i=checkwinsingle();
	       }while(i==-1);

	       if(i==1)
		   cout<<"\a\t\t\t  "<<human<<" wins against Computer"<<"\n";
	       else if(i==2)
		   cout<<"\a\t\t\t  Computer wins against "<<human<<"\n";
	       else if(i==0)
		   cout<<"\a\t\t\t\t  Game draw\n";
	       getchar();

		float win=0.0, lose=0.0;
		fstream playerwin;
		playerwin.open("Singlewinners.dat",ios::in|ios::out|ios::app);
		playerwin.seekg(0,ios::end);
		if(i==1)
		{
		  playerwin<<human;
		  playerwin<<' ';
		}
		playerwin.seekg(ios::beg);
		do
		{
		  playerwin>>nametaken;
		  if(strcmpi(nametaken,human)==0)
		   win++;
		}while(playerwin.eof()==0);
		playerwin.close();
		fstream playerlose;
		playerlose.open("Singlelosers.dat",ios::in|ios::out|ios::app);
		playerlose.seekg(0,ios::end);
		if(i==2)
		{
		  playerlose<<human;
		  playerlose<<' ';
		}
		playerlose.seekg(0,ios::beg);
		do
		{
		  playerlose>>nametaken;
		  if(strcmpi(nametaken,human)==0)
		    lose++;
		}while(playerlose.eof()==0);
		playerlose.close();
		int draw=0;
		fstream sysdraw;
		sysdraw.open("SingleDraws.dat",ios::in|ios::out|ios::app);
		sysdraw.seekg(0,ios::end);
		if(i==2)
		{
		  sysdraw<<human;
		  sysdraw<<' ';
		}
		sysdraw.seekg(0,ios::beg);
		do
		{
		  sysdraw>>nametaken;
		  if(strcmpi(nametaken,human)==0)
		   draw++;
		}while(sysdraw.eof()==0);
		sysdraw.close();
		float winpercent=0.0;
		winpercent=((win)/(win+lose))*100;
		system("cls");
		window(1,1,50,60);
		textbackground(3);
		clrscr();
		textcolor(5);
		gotoxy(40,50);
		cout<<"\n\n\n\n\n    "<<human<<", Do you like to view your Score Statistics? (y/n): ";
		char ch;
		cin>>ch;
		if(ch=='y'||ch=='Y')
		 {
		      system("cls");
		      textcolor(15);
		      gotoxy(40,50);
		      window(1,1,400,400);
		      textbackground(6);
		      clrscr();
		      cout<<"\n\n\n\t\t_____________Score Statistics of "<<human<<"_____________";
		      cout<<"\n\n\t\t    Total Games Played         : "<<win+lose;
		      cout<<"\n\t\t    Total number of Victories  : "<<win;
		      cout<<"\n\t\t    Total number of Defeats    : "<<lose;
		      cout<<"\n\t\t    Total number of Draws      : "<<draw;
		      cout<<"\n\t\t    Win Percentage             : "<<setprecision(1)<<winpercent<<"%";
		      cout<<"\n\n\t\t_____________________________________________________";
		      getchar();
		     }
		  system("cls");
		  textcolor(15);
		  gotoxy(40,50);
		  window(1,1,400,400);
		  textbackground(CYAN);
		  clrscr();
		   system("cls");
		   textcolor(15);
		   gotoxy(40,50);
		   window(1,1,400,400);
		   textbackground(CYAN);
		   clrscr();
		   cout<<"\n\n\n\n\n    Do you like to play again? (y/n):  ";
		   cin>>re;
		   system("cls");

		if(re=='n'||re=='N')
		 {
		    system("cls");
		    textcolor(15);
		    gotoxy(40,50);
		    window(1,1,400,400);
		    textbackground(15);
		    clrscr();
		    cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t          ================\n";
		    cout<<"\t\t\t          = Exiting Game =\n";
		    cout<<"\t\t\t          ================\n";
		  getch();
		 }
	      }while(re=='y'||re=='Y');
	    }

						 /*********************************************
							FUNCTION TO RETURN GAME STATUS
							1 FOR GAME IS OVER WITH RESULT
						       -1 FOR GAME IS IN PROGRESS
							O GAME IS OVER AND NO RESULT
						 **********************************************/

int checkwinmulti()
	    {
	     if (square[1] == square[2] && square[2] == square[3])
		return 1;
	     else if (square[4] == square[5] && square[5] == square[6])
		return 1;
	     else if (square[7] == square[8] && square[8] == square[9])
		return 1;
	     else if (square[1] == square[4] && square[4] == square[7])
		return 1;
	     else if (square[2] == square[5] && square[5] == square[8])
		return 1;
	     else if (square[3] == square[6] && square[6] == square[9])
		return 1;
	     else if (square[1] == square[5] && square[5] == square[9])
		return 1;
	     else if (square[3] == square[5] && square[5] == square[7])
		return 1;
	     else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
		return 0;
	     else
		return -1;
	    }


						 /*******************************************************************
							FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARK
						 ********************************************************************/


void boardmulti()
	   {
	    clrscr();
	    cout<<"\n\t\t\t_________Multi_Player_________\n\n";
	    cout << "\n\t\t\tPlayer 1 (X)  -  Player 2 (O)" << endl << endl;
	    cout << endl;
	    cout << "\t\t\t      _________________" << endl;
	    cout << "\t\t\t     |     |     |     | " << endl;
	    cout << "\t\t\t     |  " << square[1] << "  |  " << square[2] << "  |  " << square[3] <<"  |"<< endl;
	    cout << "\t\t\t     |_____|_____|_____| " << endl;
	    cout << "\t\t\t     |     |     |     | " << endl;
	    cout << "\t\t\t     |  " << square[4] << "  |  " << square[5] << "  |  " << square[6] <<"  |"<< endl;
	    cout << "\t\t\t     |_____|_____|_____| " << endl;
	    cout << "\t\t\t     |     |     |     | " << endl;
	    cout << "\t\t\t     |  " << square[7] << "  |  " << square[8] << "  |  " << square[9] <<"  |"<< endl;
	    cout << "\t\t\t     |_____|_____|_____| " << endl << endl;
	   }
void boardsingle()
	   {
	    clrscr();
	    cout<<"\n\t\t\t_________Single_Player_________\n";
	    cout << "\n\n\t\t\tPlayer (X)  -  Computer (O)" << endl << endl;
	    cout << endl;
	    cout << "\t\t\t      _________________" << endl;
	    cout << "\t\t\t     |     |     |     | " << endl;
	    cout << "\t\t\t     |  " << square[1] << "  |  " << square[2] << "  |  " << square[3] <<"  |"<< endl;
	    cout << "\t\t\t     |_____|_____|_____| " << endl;
	    cout << "\t\t\t     |     |     |     | " << endl;
	    cout << "\t\t\t     |  " << square[4] << "  |  " << square[5] << "  |  " << square[6] <<"  |"<< endl;
	    cout << "\t\t\t     |_____|_____|_____| " << endl;
	    cout << "\t\t\t     |     |     |     | " << endl;
	    cout << "\t\t\t     |  " << square[7] << "  |  " << square[8] << "  |  " << square[9] <<"  |"<< endl;
	    cout << "\t\t\t     |_____|_____|_____| " << endl << endl;
	    }
void playerinput()
	   {

		textbackground(3);
		textcolor(15);
		int length;
		int i=0;
		char choice[50];
		char ch;
		do
		{
		boardsingle();
		cout << "\n\t\t\tPlease choose a grid to place (X): ";
		cin>>choice;
		ch=choice[0];
		length=strlen(choice);
		cout<<"\n";
		if(length==1)
		{
		if(ch>=48||ch<=56)
		 {
		if (ch == '1' && square[1] == '1')
		  {
			square[1] = 'X';
			i=0;
		  }
		else if (ch == '2' && square[2] == '2')
		  {
			square[2] = 'X';
			i=0;
		  }
		else if (ch == '3' && square[3] == '3')
		  {
			square[3] = 'X';
			i=0;
		  }
		else if (ch == '4' && square[4] == '4')
		  {
			square[4] = 'X';
			i=0;
		  }
		else if (ch == '5' && square[5] == '5')
		  {
			square[5] = 'X';
			i=0;
		  }
		else if (ch == '6' && square[6] == '6')
		  {
			square[6] = 'X';
			i=0;
		  }
		else if (ch == '7' && square[7] == '7')
		  {
			square[7] = 'X';
			i=0;
		  }
		else if (ch == '8' && square[8] == '8')
		  {
			square[8] = 'X';
			i=0;
		  }
		else if (ch == '9' && square[9] == '9')
		  {
			square[9] = 'X';
			i=0;
		  }
		else
		  {
			cout<<"\t\t\t\tInvalid move! ";
			getch();
			i=1;
		  }
	      }
	      }
	       if(length>1)
		{
		 cout<<"\t\t\t\tInvalid move! ";
		 getch();
		 i=1;
		}
	    }while(i==1);
	    }


void computerAI()                                                                           //work on computerAI part where the computer tries to win before countering.
       {
	 if(square[1] == 'O' && square[2] == 'O' && square[3] == '3') //1 - 2 = 3 win            //OFFENCE
		  square[3] = 'O';
	 else if(square[1] == 'O' && square[3] == 'O' && square[2] == '2')
		  square[2] = 'O';
	 else if(square[2] == 'O' && square[3] == 'O' && square[1] == '1')
		  square[1] = 'O';
	 else if(square[4] == 'O' && square[5] == 'O' && square[6] == '6') //4 - 5 = 6 win
		  square[6] = 'O';
	 else if(square[4] == 'O' && square[6] == 'O' && square[5] == '5')
		  square[5] = 'O';
	 else if(square[5] == 'O' && square[6] == 'O' && square[4] == '4')
		  square[4] = 'O';
	 else if(square[7] == 'O' && square[8] == 'O' && square[9] == '9') //7 - 8 = 9 win
		  square[9] = 'O';
	 else if(square[7] == 'O' && square[9] == 'O' && square[8] == '8')
		  square[8] = 'O';
	 else if(square[8] == 'O' && square[9] == 'O' && square[7] == '7')
		  square[7] = 'O';
	 else if(square[1] == 'O' && square[4] == 'O' && square[7] == '7') //1 - 4 = 7 win
		  square[7] = 'O';
	 else if(square[1] == 'O' && square[7] == 'O' && square[4] == '4')
		  square[4] = 'O';
	 else if(square[4] == 'O' && square[7] == 'O' && square[1] == '1')
		  square[1] = 'O';
	 else if(square[2] == 'O' && square[5] == 'O' && square[8] == '8') //2 - 5 = 8 win
		  square[8] = 'O';
	 else if(square[2] =='O' && square[8] == 'O' && square[5] == '5')
		  square[5] = 'O';
	 else if(square[5] == 'O' && square[8] == 'O' && square[2] == '2')
		  square[2] = 'O';
	 else if(square[3] == 'O' && square[6] == 'O' && square[9] == '9') //3 - 6 = 9 win
		  square[9] = 'O';
	 else if(square[3] == 'O' && square[9] == 'O' && square[6] == '6')
		  square[6] = 'O';
	 else if(square[6] == 'O' && square[9] == 'O' && square [3] == '3')
		  square[3] = 'O';
	 else if(square[1] == 'O' && square[5] == 'O' && square[9] == '9') //1 - 5 = 9 win
		  square[9] = 'O';
	 else if(square[1] == 'O' && square[9] == 'O' && square[5] == '5')
		  square[5] = 'O';
	 else if(square[5] == 'O' && square[9] == 'O' && square[1] == '1')
		  square[1] = 'O';
	 else if(square[3] == 'O' && square[5] == 'O' && square[7] == '7') //3 - 5 = 7 win
		  square[7] = 'O';
	 else if(square[3] == 'O' && square[7] == 'O' && square[5] == '5')
		  square[5] = 'O';
	 else if(square[5] == 'O' && square[7] == 'O' && square[3] == '3')
		  square[3] = 'O';
	 else if(square[1] == 'X' && square[5] == 'X' && square[9] == '9') //1 - 5 = 9 diagonal      //DEFENCE
		  square[9] = 'O';
	 else if(square[1] == 'X' && square[9] == 'X' && square[5] == '5') //1 - 9 = 5 diagonal
		  square[5] = 'O';
	 else if(square[5] == 'X' && square[9] == 'X' && square[1] == '1') //5 - 9 = 1 diagonal
		  square[1] = 'O';
	 else if(square[7] == 'X' && square[5] == 'X' && square[3] == '3') //7 - 5 = 3 diagonal
		  square[3] = 'O';
	 else if(square[7] == 'X' && square[3] == 'X' && square[5] == '5') //7 - 3 = 5 diagonal
		  square[5] = 'O';
	 else if(square[5] == 'X' && square[3] == 'X' && square[7] == '7') //5 - 3 = 7 diagonal
		  square[7] = 'O';
	 else if(square[1] == 'X' && square[2] == 'X' && square[3] == '3') // 1 - 2 = 3 horizontal
		  square[3] = 'O';
	 else if(square[1] == 'X' && square[3] == 'X' && square[2] == '2') //1 - 3 = 2 horizontal
		 square[2] = 'O';
	 else if(square[2] == 'X' && square[3] == 'X' && square[1] == '1') //2 - 3 = 1 horizontal
		 square[1] = 'O';
	 else if(square[4] == 'X' && square[5] == 'X' && square[6] == '6') //4 - 5 = 6 horizontal line 2
		 square[6] = 'O';
	 else if(square[4] == 'X' && square[6] == 'X' && square[5] == '5') //4 - 6  = 5 horizontal line 2
		 square[5] = 'O';
	 else if(square[5] == 'X' && square[6] == 'X' && square[4] == '4') //5 - 6 = 4 horizontal line 2
		 square[4] = 'O';
	 else if(square[7] == 'X' && square[8] == 'X' && square[9] == '9') //7 - 8 = 9 horizontal line 3
		 square[9] = 'O';
	 else if(square[7] == 'X' && square[9] == 'X' && square[8] == '8') //7 - 9 = 8 horizontal line 3
		 square[8] = 'O';
	 else if(square[8] == 'X' && square[9] == 'X' && square[7] == '7') //8 - 9 = 7 horizontal line 3
		square[7] = 'O';
	 else if(square[1] == 'X' && square[4] == 'X' && square[7] == '7') //1 - 4 = 7 vertical row 1
		square[7] = 'O';
	 else if(square[1] == 'X' && square[7] == 'X' && square[4] == '4') //1 - 7 = 4 vertical row 1
		square[4] = 'O';
	 else if(square[4] == 'X' && square[7] == 'X' && square[1] == '1') //4 - 7 = 1 vertical row 1
		square[1] = 'O';
	 else if(square[2] == 'X' && square[5] == 'X' && square[8] == '8') //2 - 5 = 8 vertical row 2
	       square[8] = 'O';
	 else if(square[2] == 'X' && square[8] == 'X' && square[5] == '5') //2 - 8 = 5 vertical row 2
	       square[5] = 'O';
	 else if(square[5] == 'X' && square[8] == 'X' && square[2] == '2') //5 - 8 = 2 vertical row 2
	       square[2] = 'O';
	 else if(square[3] == 'X' && square[6] == 'X' && square[9] == '9') //3 - 6 = 9 vertical row 3
	       square[9] = 'O';
	 else if(square[3] == 'X' && square[9] == 'X' && square[6] == '6') //3 - 9 = 6 vertical row 3
	       square[6] = 'O';
	 else if(square[6] == 'X' && square[9] == 'X' && square[3] == '3') //6 - 9 = 3 vertical row 3
	       square[3] = 'O';
	 else
	      {
	       if(square[1] == '1')
		 square[1] = 'O';
	       else if(square[2] == '2')
		 square[2] = 'O';
	       else if(square[3] == '3')
		 square[3] = 'O';
	       else if(square[4] == '4')
		 square[4] = 'O';
	       else if(square[5] == '5')
		 square[5] = 'O';
	       else if(square[6] == '6')
		 square[6] = 'O';
	       else if(square[7] == '7')
		 square[7] = 'O';
	       else if(square[8] == '8')
		 square[8] = 'O';
	       else if(square[9] == '9')
		 square[9] = 'O';
	      }
	 }
int checkwinsingle()
	 {
	    if(square[1] == 'O' && square[5] == 'O' && square[9] == 'O')
	      return 2;
	    else if(square[3] == 'O' && square[5] == 'O' && square[7] == 'O')
	      return 2;
	    else if(square[1] == 'O' && square[2] == 'O' && square[3] == 'O')
	      return 2;
	    else if(square[4] == 'O' && square[5] == 'O' && square[6] == 'O')
	      return 2;
	    else if(square[7] == 'O' && square[8] == 'O' && square[9] == 'O')
	      return 2;
	    else if(square[1] == 'O' && square[4] == 'O' && square[7] == 'O')
	      return 2;
	    else if(square[2] == 'O' && square[5] == 'O' && square[8] == 'O')
	      return 2;
	    else if(square[3] == 'O' && square[6] == 'O' && square[9] == 'O')
	      return 2;
	    else if(square[1] == 'X' && square[5] == 'X' && square[9] == 'X')
	      return 1;                                                                                               //This will make player win.
	    else if(square[3] == 'X' && square[5] == 'X' && square[7] == 'X')
	      return 1;
	    else if(square[1] == 'X' && square[2] == 'X' && square[3] == 'X') //horizontal 1 - 2 - 3
	      return 1;
	    else if(square[4] == 'X' && square[5] == 'X' && square[6] == 'X') //horizontal 4 - 5 = 6
	      return 1;
	    else if(square[7] == 'X' && square[8] == 'X' && square[9] == 'X') //horizontal 7 - 8 = 9
	      return 1;
	    else if(square[1] == 'X' && square[4] == 'X' && square[7] == 'X') //vertical 1 - 4 = 7
	      return 1;
	    else if(square[2] == 'X' && square[5] == 'X' && square[8] == 'X') //vertical 2 - 5 = 8
	      return 1;
	    else if(square[3] == 'X' && square[6] == 'X' && square[9] == 'X') //vertical 3 - 6 = 9
	      return 1;
	    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
	      return 0;
	    else
	      return -1;
	   }


