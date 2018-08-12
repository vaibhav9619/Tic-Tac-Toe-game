//Tic Tac Toe
//Vaibhav Sadana 15ce056
//Rishabh Kumar  15ce042
//Ravi Soni	 15ce041
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<process.h>
#include<dos.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int a[9],i,v=1,p;
  char choice;
union REGS in,out;
void play();
void aftertoss();
void men();
void last();
void inst();
void toss();
void option();
int callmouse();
void mouseposi(int &,int&,int&);
int mousehide();
void setposi(int&,int &);
void restrictmouseptr(int,int,int,int);

void main()
{
for(i=0;i<9;i++)
{
a[i]=0;
}
int x,y,cl,a1,b;
int gd=DETECT,gm,i;
char ch;
int ch1;
initgraph(&gd,&gm,"");
setbkcolor(RED);
 men();

cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n**************************** Want To Play...(Y/N) ******************************";
cin>>ch;
if((ch=='Y')||(ch=='y'))
{
cout<<"\n\n\nLOADING..";
for(i=0;i<70;i++)
 {
cout<<"Þ";
delay(50);
 }

cleardevice();
setbkcolor(RED);
inst();
A:
cleardevice();
setbkcolor(CYAN);
option();
cout<<"\n\n\n\tEnter your choice..";
cin>>ch1;
switch(ch1)
{
case 1:
{
z:
cleardevice();
setbkcolor(RED);
toss();
line(100,100,100,300);
line(100,100,300,100);
line(300,100,300,300);
line(100,300,300,300);

line(100,200,300,200);
setfillstyle(SOLID_FILL,BLUE);
circle(200,150,20);
floodfill(201,151,WHITE);

//line(180,130,220,170);
//line(220,130,180,170);
 setfillstyle(SOLID_FILL,GREEN);
 circle(200,250,20);
 floodfill(201,251,WHITE);
aftertoss();

cleardevice();
setbkcolor(RED);
	   a1=100;
	     b=400;
//mouse functioning

	    setposi(a1,b);
	     callmouse();

	     a1=100;
	     b=400;
	     setposi(a1,b);
	     callmouse();
	     a:
	   play();
	   if(choice=='y'||choice=='Y')
	   {
	   choice='n';
	   goto z;
	   }

	     cl=0;
	     while(cl!=1)
	     {
line(200,100,500,100);
line(200,100,200,400);
line(200,400,500,400);
line(500,100,500,400);

line(300,120,300,380);
line(400,120,400,380);
line(220,200,480,200);
line(220,300,480,300);

	 restrictmouseptr(200,100,500,400);

		    mouseposi(x,y,cl);

		    gotoxy(10,9);

		    if(kbhit())
		    {
		     setbkcolor(WHITE);
		     last();
		    }

	     }
	     if(p==1)
	     {
		  if((x>200&&x<300)&&(y>100&&y<200)&&(a[0]==0))
		  {
		  a[0]=1;
		  setfillstyle(SOLID_FILL,GREEN);

		   circle(250,150,20);
		   floodfill(251,151,WHITE);
		   delay(500);
		  }
		  if((x>300&&x<400)&&(y>100&&y<200)&&(a[1]==0))
		  {
		  a[1]=1;
		  setfillstyle(SOLID_FILL,GREEN);
		   circle(350,150,20);
		   floodfill(351,151,WHITE);
		   delay(500);
		  }
		  if((x>400&&x<500)&&(y>100&&y<200)&&(a[2]==0))
		  {
		  a[2]=1;
		   setfillstyle(SOLID_FILL,GREEN);
		   circle(450,150,20);
		   floodfill(451,151,WHITE);
		   delay(500);
		  }
		  if((x>200&&x<300)&&(y>200&&y<300)&&(a[3]==0))
		  {
		  a[3]=1;
		   setfillstyle(SOLID_FILL,GREEN);
		   circle(250,250,20);
		   floodfill(251,251,WHITE);
		   delay(500);
		  }
		  if((x>300&&x<400)&&(y>200&&y<300)&&(a[4]==0))
		  {
		  a[4]=1;
		   setfillstyle(SOLID_FILL,GREEN);
		   circle(350,250,20);
		   floodfill(351,251,WHITE);
		   delay(500);
		  }
		  if((x>400&&x<500)&&(y>200&&y<300)&&(a[5]==0))
		  {
		   a[5]=1;
		   setfillstyle(SOLID_FILL,GREEN);
		   circle(450,250,20);
		   floodfill(451,251,WHITE);
		   delay(500);
		  }
		  if((x>200&&x<300)&&(y>300&&y<400)&&(a[6]==0))
		  {
		  a[6]=1;
		   setfillstyle(SOLID_FILL,GREEN);
		   circle(250,350,20);
		   floodfill(251,351,WHITE);
		   delay(500);
		  }
		  if((x>300&&x<400)&&(y>300&&y<400)&&(a[7]==0))
		  {
		  a[7]=1;

		   setfillstyle(SOLID_FILL,GREEN);
		   circle(350,350,20);
		   floodfill(351,351,WHITE);
		   delay(500);
		  }
		  if((x>400&&x<500)&&(y>300&&y<400)&&(a[8]==0))
		  {
		  a[8]=1;
		   setfillstyle(SOLID_FILL,GREEN);
		   circle(450,350,20);
		   floodfill(451,351,WHITE);
		   delay(500);
		  }

		  p++;
		  goto a;
	     }
	     else{
		  if((x>200&&x<300)&&(y>100&&y<200)&&(a[0]==0))
		  {
		   a[0]=2;
		   setfillstyle(SOLID_FILL,BLUE);
		   circle(250,150,20);
		   floodfill(251,151,WHITE);
		  // line(220,120,280,180);
		   //line(220,180,280,120);
		   delay(500);
		  }
		  if((x>300&&x<400)&&(y>100&&y<200)&&(a[1]==0))
		  {
		    a[1]=2;
		    setfillstyle(SOLID_FILL,BLUE);
		   circle(350,150,20);
		   floodfill(351,151,WHITE);
		   //line(320,120,380,180);
		   //line(320,180,380,120);
		   delay(500);
		  }
		  if((x>400&&x<500)&&(y>100&&y<200)&&(a[2]==0))
		  {
		    a[2]=2;
		    setfillstyle(SOLID_FILL,BLUE);
		   circle(450,150,20);
		   floodfill(451,151,WHITE);
		// line(420,120,480,180);
		 //line(420,180,480,120);
		   delay(500);
		  }
		  if((x>200&&x<300)&&(y>200&&y<300)&&(a[3]==0))
		  {
		     a[3]=2;
		     setfillstyle(SOLID_FILL,BLUE);
		   circle(250,250,20);
		   floodfill(251,251,WHITE);
		 //line(220,220,280,280);
		 //line(220,280,280,220);
		   delay(500);
		  }
		  if((x>300&&x<400)&&(y>200&&y<300)&&(a[4]==0))
		  {
		  a[4]=2;
		  setfillstyle(SOLID_FILL,BLUE);
		   circle(350,250,20);
		   floodfill(351,251,WHITE);
		   //line(320,220,380,280);
	      //	 line(320,280,380,220);
		   delay(500);
		  }
		  if((x>400&&x<500)&&(y>200&&y<300)&&(a[5]==0))
		  {
		    a[5]=2;
		    setfillstyle(SOLID_FILL,BLUE);
		   circle(450,250,20);
		   floodfill(451,251,WHITE);
		// line(420,220,480,280);
		 //line(420,280,480,220);
		   delay(500);
		  }
		  if((x>200&&x<300)&&(y>300&&y<400)&&(a[6]==0))
		  {
		    a[6]=2;
		      setfillstyle(SOLID_FILL,BLUE);
		   circle(250,350,20);
		   floodfill(251,351,WHITE);
		 //line(220,320,280,380);
		 //line(220,380,280,320);
		   delay(500);
		  }
		  if((x>300&&x<400)&&(y>300&&y<400)&&(a[7]==0))
		  {
		    a[7]=2;

		   setfillstyle(SOLID_FILL,BLUE);
		   circle(350,350,20);
		   floodfill(351,351,WHITE);
		// line(320,320,380,380);
		// line(320,380,380,320);
		   delay(500);
		  }
		  if((x>400&&x<500)&&(y>300&&y<400)&&(a[8]==0))
		  {
		   a[8]=2;
		   setfillstyle(SOLID_FILL,BLUE);
		   circle(450,350,20);
		   floodfill(451,351,WHITE);
		 //line(420,320,480,380);
		 //line(420,380,480,320);
		   delay(500);

		  }
		   p--;
		   goto a;
		    }

	     getch();
	     mousehide();
break;
}
case 2:
 {
setbkcolor(RED);
inst();
goto A;
//break;
 }
 case 3:
 {
 exit(0);
 }
 default:
 {
 goto A;
 //break;
 }
}
}

getch();
}
void inst()
{
char ch2,i;
cout<<"\t\t\tNOTICE: READ INSTRUCTIONS TO PREOCEED..";
cout<<"\n\n\t\tINSTRUCTION:";
cout<<"\n\n\t\t\t*** It is a 2 Player game ***";
cout<<"\n\n1.The object of TIC TAC TOE is to get Three in a row. \n(it may be horizontally/vertically/diagnolly)";
cout<<"\n\n2.You Play on 3*3 game board.";
cout<<"\n\n3.The 1st player is known as X and the second is O.";
cout<<"\n\n4.Players alternate placing Xs and Os on the game board untill either opponent \n has three in a row or all  nine squares are filled.";
cout<<"\n\n5.X always goes first then O.";
cout<<"\n\n\t\t\t\t*** THANKYOU ***";
cout<<"\n\n\n\n\n*** Press any key to Proceed ***";
cin>>ch2;
cout<<"\n\n\n\n\n\n\nLOADING..";
for(i=0;i<70;i++)
 {
cout<<"Þ";
delay(50);
 }
}
void option()
{

cout<<"\n\t1. Toss";
cout<<"\n\n\t2. Instructions";
cout<<"\n\n\t3. Quit Game ";
 }

 void toss()
{

 int ch3;
 cout<<"\n\n*** Toss ***";
 cout<<" choose X/0 ";
srand(time(0));   //to generate new batch of random number
int gg=rand();
if(gg%2==0)
 {   p=1;
cout<<"\n\nPlayer 1 won the toss and allowed to choose first(BLUE/GREEN)..";
 }
else
 {       p=2;
cout<<"\n\nPlayer 2 won the toss and allowed to choose first(BLUE/GREEN)..";
 }
}
void aftertoss()
{
char ch5;

cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tChoose BLUE/GREEN..";

cin>>ch5;
}
       //mouse
       int callmouse()
       {
	      in.x.ax=1;
	      int86(51,&in,&out);
	      return 1;
       }
       void mouseposi(int &xpos,int &ypos,int &click)
       {
	      in.x.ax=3;
	      int86(51,&in,&out);
	      click=out.x.bx;
	      xpos=out.x.cx;
	      ypos=out.x.dx;
	}
       int mousehide()
       {
	      in.x.ax=2;
	      int86(51,&in,&out);
	      return 1;
       }
      void setposi(int &xpos,int &ypos)
      {
	     in.x.ax=4;
	     in.x.cx=xpos;
	     in.x.dx=ypos;
	     int86(51,&in,&out);
      }
      void restrictmouseptr(int x1,int y1,int x2,int y2)
	  {
		 in.x.ax=7;
		 in.x.cx=x1;
		 in.x.dx=x2;
		 int86(51,&in,&out);
		 in.x.ax=8;
		 in.x.cx=y1;
		 in.x.dx=y2;
		 int86(51,&in,&out);
	  }
			 void play()
			 {
		  if( ((a[0]==a[1])&&(a[1]==a[2])&&(a[2]==a[0])&&(a[0]==2)) || ((a[3]==a[4])&&(a[4]==a[5])&&(a[5]==a[3])&&(a[3]==2)) || ((a[6]==a[7])&&(a[7]==a[8])&&(a[8]==a[6])&&(a[6]==2)) || ((a[0]==a[4])&&(a[4]==a[8])&&(a[8]==a[0])&&(a[0]==2)) || ((a[2]==a[4])&&(a[4]==a[6])&&(a[6]==a[2])&&(a[2]==2)) || ((a[0]==a[3])&&(a[3]==a[6])&&(a[6]==a[0])&&(a[0]==2)) || ((a[1]==a[4])&&(a[4]==a[7])&&(a[7]==a[1])&&(a[1]==2)) || ((a[2]==a[5])&&(a[5]==a[8])&&(a[8]==a[2])&&(a[2]==2)))
		  {
		  cout<<"Player 2 winss.";
		  }
		  else if( ((a[0]==a[1])&&(a[1]==a[2])&&(a[2]==a[0])&&(a[0]==1))||((a[3]==a[4])&&(a[4]==a[5])&&(a[5]==a[3])&&(a[3]==1))||((a[6]==a[7])&&(a[7]==a[8])&&(a[8]==a[6])&&(a[6]==1))||((a[0]==a[4])&&(a[4]==a[8])&&(a[8]==a[0])&&(a[0]==1))||((a[2]==a[4])&&(a[4]==a[6])&&(a[6]==a[2])&&(a[2]==1)) || ((a[0]==a[3])&&(a[3]==a[6])&&(a[6]==a[0])&&(a[0]==1)) || ((a[1]==a[4])&&(a[4]==a[7])&&(a[7]==a[1])&&(a[1]==1)) || ((a[2]==a[5])&&(a[5]==a[8])&&(a[8]==a[2])&&(a[2]==1)))
		  {
		  cout<<"Player 1 wins";
		  }
		  else if(v==10)
		  {  v=1;
		  for(int j=0;j<9;j++)
		  {
		   a[j]=0;
		  }
		   cout<<"Match tied";

		   cout<<"\n\n\n\n\nWant to play Again..";
		  cin>>choice;
		  }
		      v++;
			 }
			 void men()
			 {
			 int u1,u2,v1,v2;
			 for(int j=0;j<140;j++)
			 {
			 outtextxy(250,20,"TIC! TAC! TOE! (X/O)");


			 //box

			 line(230,50,380,50);

line(230,50,230,170);
line(230,170,380,170);
line(380,50,380,170);
line(240,90,370,90);
line(240,130,370,130);
line(280,60,280,160);
line(330,60,330,160);

line(250,60,270,80);
line(250,80,270,60);
line(295,100,315,120);
line(295,120,315,100);
//setfillstyle(SOLID_FILL,GREEN);
//circle(255,70,12);
//floodfill(356,151,WHITE);

//setfillstyle(SOLID_FILL,BLUE);
//circle(300,110,12);
//floodfill(356,151,WHITE);

//setfillstyle(SOLID_FILL,GREEN);
circle(355,150,12);
//floodfill(356,151,WHITE);


			 circle(100+j,200,20);
			 //neck
			 line(95+j,220,95+j,230);
			 line(105+j,220,105+j,230);
			  //lower  body
			 line(70+j,230,130+j,230);
			 line(70+j,230,80+j,280);
			 line(80+j,280,120+j,280);
			 line(80+j,285,120+j,285);
			 line(120+j,280,130+j,230);
			 line(80+j,280,80+j,285);
			 line(120+j,280,120+j,285);
			  outtextxy(76+j,250,"Player");
			outtextxy(95+j,258,"1");
			  //legs
		       line(100+j,285,70+j,310);
		       line(100+j,285,130+j,310);
		       //hands
		       line(126+j,240,140+j,250);
		       line(140+j,250,155+j,230);
			 //eyes
		       putpixel(90+j,195,WHITE);
			putpixel(110+j,195,WHITE);
			line(100+j,200,100+j,205);
				//road
			line(0,320,650,320) ;
			//face
			circle(500-j,200,20);
			//neck
			line(495-j,220,495-j,230);
			line(505-j,220,505-j,230);
			//body
			line(470-j,230,530-j,230);
			line(470-j,230,480-j,280);
			line(480-j,280,520-j,280);
			line(480-j,285,520-j,285);
			line(520-j,280,530-j,230);
			line(480-j,280,480-j,285);
			line(520-j,280,520-j,285);
			//legs
			line(500-j,285,470-j,310);
			line(500-j,285,530-j,310);
			//hands
			line(473-j,240,456-j,246);
			line(456-j,246,440-j,228);
			//eyes
			putpixel(490-j,195,WHITE);
			putpixel(510-j,195,WHITE);
			line(500-j,200,500-j,205);
			  arc(500-j,210,165,10,5);
			    arc(100+j,210,165,10,5);
			outtextxy(478-j,250,"Player");
				outtextxy(495-j,258,"2");
			      delay(20);

			     cleardevice();
			}

			 }
			 void last()
			 {
			 for(int b1=0;b1<=50;b1++)
			{
			clrscr();
		     cleardevice();
		      setcolor(b1);
		      settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
		     outtextxy(100,100,"THANK YOU !! ");
		     outtextxy(50,220,"Vaibhav Sadana");
		      outtextxy(50,270,"Rishabh Kumar");
		      outtextxy(50,320,"Ravi Soni");

		    delay(90);


		   }
		   if(kbhit())
		       {
		       exit(0);
		       }
			 }

