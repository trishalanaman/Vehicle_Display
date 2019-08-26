#include<process.h>
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdio.h>
void graph()
{	for(int a=0;a<170;a++)
	{clearviewport();
	if((a%11)==0||(a%7)==0)
	{delay(9);
	setbkcolor(5);
	}
	if(((a%3)==0)||((a%5)==0))
	{delay(9);
	setbkcolor(BLUE);
	}
	else
	{delay(9);
	setbkcolor(4);
	} }
		floodfill(55,55,3);
		for(a=55;a<280;a++)
		{
		setfillstyle(7,BLUE);
		fillellipse(a,a,50,50);
		setfillstyle(7,BLUE);
		fillellipse(639-a,479-a,50,50);
		setfillstyle(7,BLUE);
		fillellipse(639-a,a,50,50);
		setfillstyle(7,BLUE);
		fillellipse(a,479-a,50,50);
		setfillstyle(7,BLUE);
		fillellipse(315,a,50,50);
		setfillstyle(7,BLUE);
		fillellipse(315,479-a,50,50);
		}

for(a=0;a<130;a++)
{
delay(10);
setfillstyle(1,9);
fillellipse(320,240,a*1.33,a);
}
settextstyle(GOTHIC_FONT,0,7);
outtextxy(180,190,"vehicle sale");
rectangle(55,55,584,424);   //for capture image
delay(600);
			clrscr();
			clearviewport();
			rectangle(5,5,630,472);
			settextstyle(GOTHIC_FONT,0,6);
			outtextxy(87,1,"Group members name");
			rectangle(35,75,605,250);
			settextstyle(7,0,4);
			outtextxy(55,95,"Shravan Soni");
			outtextxy(55,170,"Akash Gupta");
			outtextxy(321,95,"Divya Shukla");
			outtextxy(321,170,"Trishala Naman");
			settextstyle(GOTHIC_FONT,0,6);
			delay(900);
			outtextxy(200,245,"Guided by");
			delay(800);
			rectangle(35,325,605,420);
			settextstyle(7,0,4);
			outtextxy(165,340,"Mr Vishal Gupta");
			getch();
}

class buy
{
 public:
 int choice;   //vehicle
 int ch;      //for company
 int choose;    //for option
 int colour;
 void color();
 void getdata();
  char name[20],add[50],occ[40],father[20],email[20],mob_no[10];
 int inc;
 void buyreplace();
 void buymenu();
	void car();
	void scooty();
	void bike();
	void bus();
		void byamaha();
		void bhero();
		void bbajaj();
		void bsuzuki();
			void caudi();
			void clamborghini();
			void ctata();
			void cmaruti();
				void stvs();
				void shonda();
				void shero();
				void smahindra();
			void uhino();
			void uvolvo();
			void utata();
			void umercedes();
 void category();
}o1;
 void buy ::getdata()
 {	rectangle(5,5,630,472);
  cout<<"\n\t\t\tENTER YOUR DETAILS";
 cout<<"\n\tENTER YOUR NAME:\n\n";
 cout<<"\tENTER YOUR FATHER'S NAME:\n\n";
 cout<<"\tENTER YOUR OCCUPATION:\n\n";
 cout<<"\tENTER YOUR ADDRESS:\n\n";
 cout<<"\tENTER YOUR PHONE NUMBER(e.g.8876445654):\n\n";
 cout<<"\tENTER YOUR EMAIL ACCOUNT:\n\n";
 cout<<"\tENTER YOUR ANNUAL INCOME:";
 gotoxy(25,3);cout<<"_";gets(name);
  gotoxy(34,5);cout<<"_";gets(father);
 gotoxy(31,7);cout<<"_";gets(occ);
    gotoxy(28,9);cout<<"_";gets(add);
     gotoxy(49,11);cout<<"_";gets(mob_no);
      gotoxy(34,13);cout<<"_";gets(email);
       gotoxy(34,15);cout<<"_";cin>>inc;

 }
 void buy ::buyreplace()
 {
 clrscr();
 clearviewport();
 rectangle(5,5,630,472);
 settextstyle(GOTHIC_FONT,0,4);
 outtextxy(130,5,"Welcome") ;
 delay(500);
 outtextxy(250,5, "to the") ;
 delay(500);
 outtextxy(340,5,"vehicle");
 delay(500);
 outtextxy(440,5,"sale");

 int a1;
 for(int i=0;i<61;i++)
 {
 fillellipse(140,120,(10.0/6.0)*i,i);
 delay(25);
 }
 setcolor(RED);
 settextstyle(1,0,4);
 outtextxy(90,100,"1.BUY");
for(i=0;i<61;i++)
{
 fillellipse(445,120,(10.0/6.0)*i,i);
 delay(25);}
  setcolor(RED);
 settextstyle(1,0,4);
 outtextxy(400,100,"2.EXIT");

 x:
 gotoxy(4,23);
 cout<<"your choice::";
 cin>>a1;
 switch(a1)
  {case 1:o1.buymenu();break;
   case 2:cout<<"THANKS FOR COMING ";getch();exit(1);break;

   default :cout<<"WRONG CHOICE\n PLEASE CHOOSE AGAIN";goto x;
  }

getch();
}

void buy::color()
{clrscr();
clearviewport();
cout<<"\tSELECT THE COLOUR YOU LIKE";
setfillstyle(1,WHITE);
fillellipse(140,100,50,50);
setfillstyle(1,8);
fillellipse(350,100,50,50);
setfillstyle(1,RED);
fillellipse(353,260,50,50);
setfillstyle(1,BLUE);
fillellipse(145,260,50,50);
cout<<"\n\n\t1.\t\t\t   2.\n\n\n\n\n\n\n\n\n\n\t3.\t\t\t   4.";
 q:

 gotoxy(6,23);
 cout<<"\tYOUR CHOICE IS::";
 cin>>colour;
 if(colour>4)
 {cout<<"WRONG CHOICE:::: SELECT AGAIN ";goto q;  }
 clrscr();
 clearviewport();
	rectangle(5,5,630,472);
 cout<<"\n\t\t\tTHE CATEGORY YOU HAVE SELECTED IS";
 category();
}

void buy::category()
{cout<<"\n\tvehicle:";
switch(choice)
{case 1:cout<<"CAR\n";break;
case 2:cout<<"BIKE\n";break;
case 3:cout<<"SCOOTY\n";break;
case 4:cout<<"BUS\n";break;
}
cout<<"\tcompany:";
if(choice==1)   //car company
{	switch(ch)
	{case 1:cout<<"MARUTI\n";cout<<"\tMODEL:BALENO\n";break;
	case 2:cout<<"AUDI\n\tMODEL:S5\n";break;
	case 3:cout<<"LAMBORGHINI\n\tMODEL:HURAACANE\n";break;
	case 4:cout<<"TATA\n\tMODEL:VISTA\n";break;
	}
}

if(choice==2)     //bike company
{	switch(ch)
	{case 1:cout<<"HERO\n\tMODEL:KARIZMA ZMR\n";break;
	case 2:cout<<"YAMAHA\n\tMODEL:R1M\n";break;
	case 3:cout<<"SUZUKI\n\tMODEL:GIXXER\n";break;
	case 4:cout<<"BAJAJ\n\tMODEL:PULSAR\n";break;
	}
}
if(choice==3)    //scooty company
{	switch(ch)
	{case 1:cout<<"TVS\n\tMODEL:JUPITER\n";break;
	case 2:cout<<"MAHINDRA\n\tMODEL:GUSTO\n";break;
	case 3:cout<<"HERO\n\tMODEL:PLEASURE\n";break;
	case 4:cout<<"HONDA\n\tMODEL:ACTIVA\n";break;
	}
}
if(choice==4)     //bus company
{	switch(ch)
	{case 1:cout<<"HENO\n\tMODEL:2AXIIE\n";break;
	case 2:cout<<"MARCEDES\n\tMODEL:6BXIIE \n";break;
	case 3:cout<<"TATA\n\tMODEL:SA11\n";break;
	case 4:cout<<"VOLVO\n\tMODEL:8Vxiie SPECIAL BUS\n";break;
	}
}
cout<<"\tcolour:";
switch(colour)
{case 1:cout<<"WHITE";break ;
case 2:cout<<"GREY";break   ;
case 3:cout<<"BLUE";break    ;
case 4:cout<<"RED";break     ;
}
char last; //for last choice go to bill
gotoxy(6,23);
cout<<"::DO YOU WANT TO CONTINUE::\t\\(y for yes n for no)";
cout<<"\n   YOUR CHOICE::";
cin>>last;


if(last=='Y'||last=='y')
{clrscr();
clearviewport();
o1.getdata();
}
else
{clrscr();
clearviewport();
rectangle(5,5,630,472);
settextstyle(GOTHIC_FONT,0,4);
outtextxy(75,235,"thank you for coming");
getch();
clrscr();
clearviewport();
rectangle(5,5,630,472);
outtextxy(70,235,"::::bye bye ::::");
getch();

}
}
void buy ::buymenu()
 {
 clrscr();
 clearviewport();
	rectangle(5,5,630,472);

 setbkcolor(9);
 cout<<"\n\n   choose the vehicle you want";
 settextstyle(4,0,3);
 setcolor(5);
 outtextxy(160,0,"welcome") ;
 delay(500);
 outtextxy(250,2, "to the") ;
 delay(500);
 outtextxy(315,2,"buy");
 delay(500);
 outtextxy(370,2,"menu");

a:						      //label used
 for(int i=0;i<61;i++)
{ fillellipse(140,120,(10.0/6.0)*i,i);
 delay(25);}
 setcolor(5);
 settextstyle(1,0,4);
 outtextxy(90,99,"1.CAR");
 for(i=0;i<61;i++)
 {
 fillellipse(420,120,(10.0/6.0)*i,i);
 delay(25);
 }
 setcolor(5);
 settextstyle(1,0,4);
 outtextxy(377,99,"2.BIKE");


  for( i=0;i<61;i++)
 {
 fillellipse(135,260,(10.0/6.0)*i,i);
 delay(25);}
 setcolor(5);
 settextstyle(1,0,4);
 outtextxy(71,239,"3.SCOOTY");

 for(i=0;i<61;i++)
 {
 fillellipse(420,260,(10.0/6.0)*i,i);
 delay(25);
 }
 setcolor(5);
 settextstyle(1,0,4);
 outtextxy(377,240,"4.BUS");

 gotoxy(6,23);
 cout<<"your choice::";
 cin>>choice;
	switch(choice)
	{case 1:o1.car();break;
	case 2:o1.bike();break;
	case 3:o1.scooty();break;
	case 4:o1.bus();break;
	default :cout<<"WRONG CHOICE ::::::PLEASE CHOOSE AGAIN\n";goto a;
	}

 }
 void buy ::car()                                      //func car defined
  {
  clrscr();
  clearviewport();

  cout<<"\t\t\t\t::::";
  delay(400);
  cout<<"CAR ";
  delay(400);
  cout<<"ZONE";
  cout<<"::::\n";

  setbkcolor(6);
  cout<<"select the company you want";
   for(int  i=0;i<61;i++)
 {
 fillellipse(140,100,(10.0/6.0)*i,i);
 delay(25);}
 setcolor(6);
 settextstyle(1,0,4);
 outtextxy(71,79,"1.MARUTI");
  for( i=0;i<61;i++)
 {
 fillellipse(420,100,(10.0/6.0)*i,i);
 delay(25);}
 setcolor(6);
 settextstyle(1,0,4);
 outtextxy(377,79,"2.AUDI");
  for( i=0;i<61;i++)
 {
 fillellipse(145,260,(10.0/6.0)*i,i);
 delay(25);}
 setcolor(6);
 settextstyle(1,0,2);
 outtextxy(71,245,"3.LAMBORGHINI");

  for( i=0;i<61;i++)
 {
 fillellipse(420,260,(10.0/6.0)*i,i);
 delay(25);}
 setcolor(6);
 settextstyle(1,0,4);
 outtextxy(374,240,"4.TATA");

  gotoxy(6,23);
  z:
  cout<<"your choice::";

  cin>>ch;
  switch(ch)
  {case 1:o1.cmaruti();break;
  case 2:o1.caudi();break;
  case 3:o1.clamborghini();break;
  case 4:o1.ctata();break;
  default :cout<<" Wrong Choice ::::::Please Choose Again";goto z;
  }
  }

	void buy::cmaruti()
	{
	clrscr();
	clearviewport();

	setcolor(4);
	settextstyle(1,0,2);
	cout<<"\t\t\t\t::::";
	delay(500);
	cout<<"MARUTI";
	cout<<"::::\n";
	cout<<"\t\t\t\tMODEL::BALENO";
	cout<<"\n\nEngine-\t\t\t6204cc\nCapacity-\t\t4 Seater\n\nSPECIFICATIONS:-\n\n";
	cout<<"Overall Lenth:\t\t44859mm\nOverall Width:\t\t2254mm\nOverall Height:\t\t1165mm\nGround Clearance:\t187mm";
	cout<<"\n\nENGINE:-\n\nTorque:\t\t\t560Nm@6500rpm\nDisplacement:\t\t4204cc\nPower:\t \t\t610PS@8250rpm \nNo. of cylinders:\t10";
	getch(); clrscr(); clearviewport();
	cout<<"\t\t\tMENU\n\n1.To continue <press 1>\n2.To Go to CAR MENU  <press 2>\n3.To Go to BUY MENU  <press 3>\n4.To go to MAIN MENU <press 4>\n\nYour choice is";
	cin>>choose;
	 switch(choose)
  {
  case 1:o1.color();
	break;
  case 2:o1.car();
	break;
  case 3:o1.buymenu();
	break;
  case 4:o1.buyreplace();
	break;
  case 5:o1.cmaruti();
	break;
  default:cout<<"sorry\n";getch();exit(0);

	}
	}
	void buy::caudi()
	{clrscr(); clearviewport();


	cout<<"\t\t\tCompany:AUDI\n\n\t\tAUDi S5";
	cout<<"\n\nEngine-\t\t\t5255cc\nCapacity-\t\t4 Seater\n\nSPECIFICATIONS:-\n\n";
	cout<<"Overall Lenth:\t\t4444mm\nOverall Width:\t\t2288mm\nOverall Height:\t\t1195mm\nGround Clearance:\t75mm";
	cout<<"\n\nENGINE:-\n\nTorque:\t\t\t589Nm@6500rpm\nDisplacement:\t\t4090cc\nPower:\t \t\t610PS@9850rpm \nNo. of cylinders:\t17";
	getch(); clrscr(); clearviewport();
	cout<<"\t\t\tMENU\n\n1.To continue  <press 1>\n";
  cout<<"2.To Go to CAR MENU  <press 2>\n";
  cout<<"3.To Go to BUY MENU  <press 3>\n";
  cout<<"4.To go to MAIN MENU <press 4>\n\n";
  cout<<"5.To see details once agin <press 5>";
  cout<<"Your choice is  ";
  cin>>choose;
  switch(choose)
  {
  case 1:o1.color();
	break;
  case 2:o1.car();
	break;
  case 3:o1.buymenu();
	break;
  case 4:o1.buyreplace();
	break;
  case 5:o1.caudi();
	break;
  default:cout<<"sorry\n";getch();exit(0);
	}
	}

	void buy::clamborghini()
	{
	clrscr(); clearviewport();

	cout<<"\t\t\tCompany:lAMBORGHINI \n\n\t\t\tHURAACAN";
	cout<<"\n\nEngine-\t\t\t5204cc\nCapacity-\t\t2 Seater\n\nSPECIFICATIONS:-\n\n";
	cout<<"Overall Lenth:\t\t4459mm\nOverall Width:\t\t2236mm\nOverall Height:\t\t1165mm\nGround Clearance:\t135mm";
	cout<<"\n\nENGINE:-\n\nTorque:\t\t\t560Nm@6500rpm\nDisplacement:\t\t4204cc\nPower:\t \t\t610PS@8250rpm \nNo. of cylinders:\t10";
	getch(); clrscr(); clearviewport();

	 cout<<"\t\t\tMENU\n\n1.To continue  Lamborghini  <press 1>\n";
  cout<<"2.To Go to CAR MENU  <press 2>\n";
  cout<<"3.To Go to BUY MENU  <press 3>\n";
  cout<<"4.To go to MAIN MENU <press 4>\n\n";
  cout<<"5.To see details once agin <press 5>";
  cout<<"Your choice is  ";
  cin>>choose;
  switch(choose)
  {
  case 1:o1.color();
	break;
  case 2:o1.car();
	break;
  case 3:o1.buymenu();
	break;
  case 4:o1.buyreplace();
	break;
  case 5:o1.clamborghini();
	break;
  default:cout<<"sorry\n";getch();exit(0);
	  }
	}


	void buy::ctata()
	{clrscr(); clearviewport();

	cout<<"\t\t\tCompany:TATA\n\n\t\t\tVISTA";
	cout<<"\n\nEngine-\t\t\t5265cc\nCapacity-\t\t4 Seater\n\nSPECIFICATIONS:-\n\n";
	cout<<"Overall Lenth:\t\t4879mm\nOverall Width:\t\t2456mm\nOverall Height:\t\t1065mm\nGround Clearance:\t145mm";
	cout<<"\n\nENGINE:-\n\nTorque:\t\t\t560Nm@6544rpm\nDisplacement:\t\t2204cc\nPower:\t \t\t600PS@8250rpm \nNo. of cylinders:\t16";
	getch(); clrscr(); clearviewport();
	cout<<"\t\t\tMENU\n\n1.To continue  <press 1>\n";
  cout<<"2.To Go to CAR MENU  <press 2>\n";
  cout<<"3.To Go to BUY MENU  <press 3>\n";
  cout<<"4.To go to MAIN MENU <press 4>\n\n";
  cout<<"5.To see details once agin <press 5>";
  cout<<"Your choice is  ";
  cin>>choose;
  switch(choose)
  {
  case 1:o1.color();
	break;
  case 2:o1.car();
	break;
  case 3:o1.buymenu();
	break;
  case 4:o1.buyreplace();
	break;
  case 5:o1.ctata();
	break;
  default:cout<<"sorry\n";getch();exit(0);
	}
    }



 void buy ::bike()                                   //func bike defined
  {clrscr();
  clearviewport();
  setbkcolor(6);

  cout<<"\t\t\t\t::::";
  delay(450);
  cout<<"BIKE ";
  delay(450);
  cout<<"ZONE";
  cout<<"::::";
  cout<<"\nselect the company you want";
   for(int i=0;i<61;i++)
 {
 fillellipse(140,100,(10.0/6.0)*i,i);
 delay(25);}
 setcolor(6);
 settextstyle(1,0,4);
 outtextxy(75,79,"1.HERO");
   for( i=0;i<61;i++)
 {
 fillellipse(420,100,(10.0/6.0)*i,i);
 delay(25);
 }
 setcolor(6);
 settextstyle(1,0,4);

 outtextxy(353,79,"2.YAMAHA");
  for( i=0;i<61;i++)
 {
 fillellipse(145,260,(10.0/6.0)*i,i);
 delay(25);
 }
 setcolor(6);
 settextstyle(1,0,4);
 outtextxy(71,242,"3.SUZUKI");

  for( i=0;i<61;i++)
 {
 fillellipse(420,260,(10.0/6.0)*i,i);
 delay(25);
 }
 setcolor(6);
 settextstyle(1,0,4);
 outtextxy(368,240,"4.BAJAJ");



  gotoxy(6,23);
  y:
  cout<<"your choice::";
  cin>>ch;
  switch(ch)
  {case 1:o1.bhero();break;
   case 2:o1.byamaha();break;
   case 3:o1.bsuzuki();break;
   case 4:o1.bbajaj();break;
   default :cout<<"Wrong Choice:::::::: Please Choose Again\n ";goto y;

}
  }
	void buy ::byamaha()
	{
	clrscr(); clearviewport();

	cout<<"\t\t\t    Company :Yamaha\n\t\t\t^^^^^^^^^^^^^^^";
	cout<<"\n\n\t\t\t  Bike Name : YF R1M\n";
	cout<<"\n\t\t\tDimension And Weights:-\n\nOver all Length	       2135mm\nOverall Width           780mm\nOverall Height         1285mm\nGround Clearance	140mm\n";
	cout<<"\n\t\t\t\tEngine:-\n\nMax torque	19.12Nm\ndisplacement	  220cc\nMax Power	21.05Ps\n";
	cout<<"\n\t\t\tWeights And Fuel Capacities:-\n\nFuel Tannk Capacity	30 L\nReserve			5L\nDry Weight	        200kg\n";
	cout<<"\n\t\t\tWheels:-\n\nWheel Type	Alloys\nTyre Front	100/1050x19inches\nTyre Rear	1220/80x17 inches\n";
	getch(); clrscr(); clearviewport();

	 cout<<"\t\t\tMENU\n\n1.To continue <press 1>\n";
  cout<<"2.To Go to BIKE MENU  <press 2>\n";
  cout<<"3.To Go to BUY MENU  <press 3>\n";
  cout<<"4.To go to MAIN MENU <press 4>\n\n";
  cout<<"5.To see details once agin <press 5>";
  cout<<"Your choice is  ";
  cin>>choose;
  switch(choose)
  {
  case 1:o1.color();
	break;
  case 2:o1.bike();
	break;
  case 3:o1.buymenu();
	break;
  case 4:o1.buyreplace();
	break;
  case 5:o1.byamaha();
	break;
  default:cout<<"sorry\n";getch();exit(0);
	}
      }
	void buy::bhero()
	{
	clrscr();  clearviewport();
	cout<<"\t\t\t    Company : Hero\n\t\t\t    ^^^^^^^^^^^^^^";
	cout<<"\n\n\t\t\t  Bike Name : KARIZMA ZMR\n";
	cout<<"\n\t\t\tDimension And Weights:-\n\nOver all Length	       1999mm\nOverall Width           695mm\nOverall Height         1120mm\nGround Clearance	170mm\n";
	cout<<"\n\t\t\t\tEngine:-\n\nMax torque	24.14Nm\ndisplacement	  250cc\nMax Power	21.05Ps\n";
	cout<<"\n\t\t\tWeights And Fuel Capacities:-\n\nFuel Tannk Capacity	20 L\nReserve			3L\nDry Weight	        132kg\n";
	cout<<"\n\t\t\tWheels:-\n\nWheel Type	Alloys\nTyre Front	96/80x16inches\nTyre Rear	1220/80x17 inches\n";
		getch(); clrscr(); clearviewport();
 cout<<"\t\t\tMENU\n\n1.To continue  <press 1>\n";
  cout<<"2.To Go to BIKE MENU  <press 2>\n";
  cout<<"3.To Go to BUY MENU  <press 3>\n";
  cout<<"4.To go to MAIN MENU <press 4>\n\n";
  cout<<"5.To see details once agin <press 5>";
  cout<<"Your choice is  ";
  cin>>choose;
  switch(choose)
  {
  case 1:o1.color();
	break;
  case 2:o1.bike();
	break;
  case 3:o1.buymenu();
	break;
  case 4:o1.buyreplace();
	break;
  case 5:o1.bhero();
	break;
  default:cout<<"sorry\n";getch();exit(0);
	}
     }


	void buy::bsuzuki()
	{
	clrscr();  clearviewport();

	cout<<"\t\t\t    Company : Suzukhi\n\t\t\t    ^^^^^^^^^^^^^^^^^";
	cout<<"\n\n\t\t\t  Bike Name : GIXXER\n";
	cout<<"\n\t\t\tDimension And Weights:-\n\nOver all Length	       2010mm\nOverall Width           700mm\nOverall Height         1065mm\nGround Clearance	155mm\n";
	cout<<"\n\t\t\t\tEngine:-\n\nMax torque	21.12Nm\ndisplacement	  210cc\nMax Power	22.05Ps\n";
	cout<<"\n\t\t\tWeights And Fuel Capacities:-\n\nFuel Tannk Capacity	17 L\nReserve			2.5L\nDry Weight	        145kg\n";
	cout<<"\n\t\t\tWheels:-\n\nWheel Type	Alloys\nTyre Front	90/90x17inches\nTyre Rear	100/80x17 inches\n";
		getch(); clrscr(); clearviewport();
	 cout<<"\t\t\tMENU\n\n1.To continue <press 1>\n";
  cout<<"2.To Go to BIKE MENU  <press 2>\n";
  cout<<"3.To Go to BUY MENU  <press 3>\n";
  cout<<"4.To go to MAIN MENU <press 4>\n\n";
  cout<<"5.To see details once agin <press 5>";
  cout<<"Your choice is  ";
  cin>>choose;
  switch(choose)
  {
  case 1:o1.color();
	break;
  case 2:o1.bike();
	break;
  case 3:o1.buymenu();
	break;
  case 4:o1.buyreplace();
	break;
  case 5:o1.bsuzuki();
	break;
  default:cout<<"sorry\n";getch();exit(0);
	}
      }


	void buy::bbajaj()
	{
	clrscr();  clearviewport();

	cout<<"\t\t\t    Company : Bajaj\n\t\t\t    ^^^^^^^^^^^^^^^";
	cout<<"\n\n\t\t\t  Bike Name : PULSAR\n";
	cout<<"\n\t\t\tDimension And Weights:-\n\nOver all Length	       2035mm\nOverall Width           750mm\nOverall Height         1165mm\nGround Clearance	165mm\n";
	cout<<"\n\t\t\t\tEngine:-\n\nMax torque	19.12Nm\ndisplacement	  220cc\nMax Power	21.05Ps\n";
	cout<<"\n\t\t\tWeights And Fuel Capacities:-\n\nFuel Tannk Capacity	15 L\nReserve			2L\nDry Weight	        150kg\n";
	cout<<"\n\t\t\tWheels:-\n\nWheel Type	Alloys\nTyre Front	90/90x17inches\nTyre Rear	1220/80x17 inches\n";
	getch(); clrscr(); clearviewport();
	cout<<"\t\t\tMENU\n\n1.To continue  <press 1>\n";
  cout<<"2.To Go to BIKE MENU  <press 2>\n";
  cout<<"3.To Go to BUY MENU  <press 3>\n";
  cout<<"4.To go to MAIN MENU <press 4>\n\n";
  cout<<"5.To see details once agin <press 5>";
  cout<<"Your choice is  ";
  cin>>choose;
  switch(choose)
  {
  case 1:o1.color();
	break;
  case 2:o1.bike();
	break;
  case 3:o1.buymenu();
	break;
  case 4:o1.buyreplace();
	break;
  case 5:o1.bbajaj();
	break;
  default:cout<<"sorry\n";getch();exit(0);
	}
       }




 void buy ::scooty()                                  //func scooty defined
  {clrscr();clearviewport();

  cout<<"\t\t\t\t::::";
  delay(450);
  cout<<"SCOOTY ";
  delay(450);
  cout<<"ZONE";
  delay(450);
  cout<<"::::\n";
  cout<<"select the company you want\n";
   for(int i=0;i<61;i++)
 {
 fillellipse(140,100,(10.0/6.0)*i,i);
 delay(25);}
 setcolor(RED);
 settextstyle(1,0,4);
 outtextxy(88,79,"1.TVS");
  for( i=0;i<61;i++)
 {
 fillellipse(420,100,(10.0/6.0)*i,i);
 delay(25);}
 setcolor(RED);
 settextstyle(1,0,3);
 outtextxy(353,82,"2.MAHINDRA");
   for( i=0;i<61;i++)
 {
 fillellipse(145,260,(10.0/6.0)*i,i);
 delay(25);}
 setcolor(RED);
 settextstyle(1,0,4);
 outtextxy(84,242,"3.HERO");

 for( i=0;i<61;i++)
 {
 fillellipse(420,260,(10.0/6.0)*i,i);
 delay(25);
 }
 setcolor(RED);
 settextstyle(1,0,4);
 outtextxy(358,240,"4.HONDA");

  x:
  gotoxy(6,23);
  cout<<"your choice::";
  cin>>ch;
  switch(ch)
  {case 1:o1.stvs();break;
  case 2:o1.smahindra();break;
  case 3:o1.shero();break;
  case 4:o1.shonda();break;
  default:cout<<"Wrong Choice:::::::: Please Choose Again\n";goto x;
  }
     }
void buy::stvs()
     {
     clrscr();   clearviewport();

     cout<<"\t\t\t\tCompany:TVS\n\t\t\t\t^^^^^^^^^^^";
     cout<<"\n\t\t\t  Model Name:TVS JUPITER\n\nSPECIFICATIONS:-";
     cout<<"\n\nDisplacement\t\t120cc \nMaximum power\t\t9.5bhp @ 7880rpm";
     cout<<"\nFuel Efficiency \t63kmpl \nBrake Type \t   \tDurm \t\nFront Disc \t \tNo\nAlloy wheels\t \tNo\n";
     cout<<"Kerb weight\t \t130 kg\nChassis Type \t\tSteel Type\nTop Speed \t\t70kmph\nTubeless tyres \t\tNo\nFuel Tank Capicity\t5Litres ";
     cout<<"\n\nFEATURES:-\n\nSpeedometer\t\tAnalague \nFuel Guage\t\tYes\nElectric Start\t\tYes\nTripmeter\t \tNO";
	getch(); clrscr(); clearviewport();

	cout<<"\t\t\tMENU\n\n1.To continue  <press 1>\n";
  cout<<"2.To Go to SCOOTY MENU  <press 2>\n";
  cout<<"3.To Go to BUY MENU  <press 3>\n";
  cout<<"4.To go to MAIN MENU <press 4>\n\n";
  cout<<"5.To see details once agin <press 5>";
  cout<<"Your choice is  ";
  cin>>choose;
  switch(choose)
  {
  case 1:o1.color();
	break;
  case 2:o1.scooty();
	break;
  case 3:o1.buymenu();
	break;
  case 4:o1.buyreplace();
	break;
  case 5:o1.stvs();
	break;
  default:cout<<"sorry\n";getch();exit(0);
	}
    }

     void buy::smahindra()
     {

     clrscr();   clearviewport();

     cout<<"\t\t\t\tCompany:Mahindra\n\t\t\t\t^^^^^^^^^^^^^^^^";
     cout<<"\n\t\t\tModel Name:Mahindra GUSTO\n\nSPECIFICATIONS:-";
     cout<<"\n\nDisplacement\t\t109cc \nMaximum power\t\t8bhp @ 7500rpm";
     cout<<"\nFuel Efficiency \t61kmpl \nBrake Type \t   \tDrum \t\nFront Disc \t \tNo\nAlloy wheels\t \tNo\n";
     cout<<"Kerb weight\t \t120 kg\nChassis Type \t\tUnderbone Steel Type\nTop Speed \t\t80 kmph\nTubeless tyres \t\tYes\nFuel Tank Capicity\t6litres ";
     cout<<"\n\nFEATURES:-\n\nSpeedometer\t\tAnologue \nFuel Guage\t\tYes\nElectric Start\t\tYes\nTripmeter\t \tNo";
	getch(); clrscr(); clearviewport();
	 cout<<"\t\t\tMENU\n\n1.To continue  <press 1>\n";
  cout<<"2.To Go to SCOOTY MENU  <press 2>\n";
  cout<<"3.To Go to BUY MENU  <press 3>\n";
  cout<<"4.To go to MAIN MENU <press 4>\n\n";
  cout<<"5.To see details once agin <press 5>";
  cout<<"Your choice is  ";
  cin>>choose;
  switch(choose)
  {
  case 1:o1.color();
	break;
  case 2:o1.scooty();
	break;
  case 3:o1.buymenu();
	break;
  case 4:o1.buyreplace();
	break;
  case 5:o1.smahindra();
	break;
  default:cout<<"sorry\n";getch();exit(0);
	}
      }

     void buy::shonda()
     {

     clrscr();  clearviewport();

     cout<<"\t\t\t\tCompany:Honda\n\t\t\t\t^^^^^^^^^^^^^";
     cout<<"\n\t\t\t  Model Name:Honda ACTIVA\n\nSPECIFICATIONS:-";
     cout<<"\n\nDisplacement\t\t119cc \nMaximum power\t\t9bhp @ 7800rpm";
     cout<<"\nFuel Efficiency \t66kmpl \nBrake Type \t   \tDurm \t\nFront Disc \t \tYes\nAlloy wheels\t \tNo\n";
     cout<<"Kerb weight\t \t125 kg\nChassis Type \t\tSteel Type\nTop Speed \t\t89 kmph\nTubeless tyres \t\tNo\nFuel Tank Capicity\t5.5Litres ";
     cout<<"\n\nFEATURES:-\n\nSpeedometer\t\tDigital \nFuel Guage\t\tYes\nElectric Start\t\tYes\nTripmeter\t \tYes";
     getch(); clrscr(); clearviewport();
	cout<<"\t\t\tMENU\n\n1.To continue  <press 1>\n";
  cout<<"2.To Go to SCOOTY MENU  <press 2>\n";
  cout<<"3.To Go to BUY MENU  <press 3>\n";
  cout<<"4.To go to MAIN MENU <press 4>\n\n";
  cout<<"5.To see details once agin <press 5>";
  cout<<"Your choice is  ";
  cin>>choose;
  switch(choose)
  {
  case 1:o1.color();
	break;
  case 2:o1.scooty();
	break;
  case 3:o1.buymenu();
	break;
  case 4:o1.buyreplace();
	break;
  case 5:o1.shonda();
	break;
  default:cout<<"sorry\n";getch();exit(0);
	}
      }


     void buy::shero()
     {

     clrscr();clearviewport();

     cout<<"\t\t\t\tCompany:Hero\n\t\t\t\t^^^^^^^^^^^^";
     cout<<"\n\t\t\t  Model Name:Hero PLEASURE\n\nSPECIFICATIONS:-";
     cout<<"\n\nDisplacement\t\t129cc \nMaximum power\t\t8.5bhp @ 7600rpm";
     cout<<"\nFuel Efficiency \t70kmpl \nBrake Type \t   \tDurm \t\nFront Disc \t \tYes\nAlloy wheels\t \tYes\n";
     cout<<"Kerb weight\t \t135 kg\nChassis Type \t\tAlloy Type\nTop Speed \t\t75 kmph\nTubeless tyres \t\tNo\nFuel Tank Capicity\t9.5Litres ";
     cout<<"\n\nFEATURES:-\n\nSpeedometer\t\tAnalogue \nFuel Guage\t\tYes\nElectric Start\t\tYes\nTripmeter\t \tNo";
     getch(); clrscr(); clearviewport();

      cout<<"\t\t\tMENU\n\n1.To continue <press 1>\n";
  cout<<"2.To Go to SCOOTY MENU  <press 2>\n";
  cout<<"3.To Go to BUY MENU  <press 3>\n";
  cout<<"4.To go to MAIN MENU <press 4>\n\n";
  cout<<"5.To see details once agin <press 5>";
  cout<<"Your choice is  ";
  cin>>choose;
  switch(choose)
  {
  case 1:o1.color();
	break;
  case 2:o1.scooty();
	break;
  case 3:o1.buymenu();
	break;
  case 4:o1.buyreplace();
	break;
  case 5:o1.shero();
	break;
  default:cout<<"sorry\n";getch();exit(0);
	}
     }

  void buy ::bus()                                        //func bus defined
  {clrscr(); clearviewport();

  cout<<"\t\t\t\t::::";
  delay(450);
  cout<<"BUS ";
  delay(450);
  cout<<"ZONE";
  cout<<"::::\n";
  cout<<"select the company you want\n";
  for(int i=0;i<61;i++)
 {
 fillellipse(140,100,(10.0/6.0)*i,i);
 delay(25);}
 setcolor(RED);
 settextstyle(1,0,4);
 outtextxy(88,79,"1.HINO");
  for( i=0;i<61;i++)
 {
 fillellipse(420,100,(10.0/6.0)*i,i);
 delay(25);}
 setcolor(RED);
 settextstyle(1,0,3);
 outtextxy(353,82,"2.MERCEDES");
  for( i=0;i<61;i++)
 {
 fillellipse(145,260,(10./6.0)*i,i);
 delay(25);}
 setcolor(RED);
 settextstyle(1,0,4);
 outtextxy(84,242,"3.TATA");

  for( i=0;i<61;i++)
 {
 fillellipse(420,260,(10.0/6.0)*i,i);
 delay(25);}
 setcolor(RED);
 settextstyle(1,0,4);
 outtextxy(358,240,"4.VOLVO");

  v:
  gotoxy(6,23);
  cout<<"your choice::";
    cin>>ch;
    switch(ch)
    {case 1:o1.uhino();break;
    case 2:o1.umercedes();break;
    case 3:o1.utata();break;
    case 4:o1.uvolvo();break;
    default:cout<<"Wrong Choice:::::::Please Choose Again\n";goto v;
    }

   }
void buy::uhino()
	{

	clrscr();   clearviewport();

	cout<<"\n\t\t\t\tCompany:Hino\n\t\t\t\t^^^^^^^^^^^^";
	cout<<"\n\n";
	cout<<"\n\tType of bus:\t\t2Axiie School Bus\n\tSeats:\t\t\t41\nOdometer:\t\t671584km\n\tRegistration:\t\t3795MO\n\tState:\t\t\tNSW\n\tBody Model:\t\tPMC Adelaide\n";
	cout<<"\tChassis Model:\t\tHino BC144\n\tChassis Number:\t\tBC144\n\tSuspension:\t\tSpring\n\tGVM:\t\t\t9300kg\n\tEngine Model:\t\tHinoW09DB\n\tEngine Number:\t\tW06D17371\n";
	cout<<"\tFuel Type:\t\tDiesel\n\tHorse Power:\t\t140hp\nLocation:\t\tCentre\n\tSeat Belts:\t\tNo\n\tAirconditioning:\tNo";
	getch(); clrscr(); clearviewport();

	cout<<"\t\t\tMENU\n\n1.To continue   <press 1>\n";
  cout<<"2.To Go to BUS MENU  <press 2>\n";
  cout<<"3.To Go to BUY MENU  <press 3>\n";
  cout<<"4.To go to MAIN MENU <press 4>\n\n";
  cout<<"5.To see details once agin <press 5>";
  cout<<"Your choice is  ";
  cin>>choose;
  switch(choose)
  {
  case 1:o1.color();
	break;
  case 2:o1.bus();
	break;
  case 3:o1.buymenu();
	break;
  case 4:o1.buyreplace();
	break;
  case 5:o1.uhino();
	break;
  default:cout<<"sorry\n";getch();exit(0);
	}
      }

	void buy::umercedes()
	{

	clrscr(); clearviewport();

	cout<<"\t\t\t\tCompany:Mercedes\n\t\t\t\t^^^^^^^^^^^^^^^^";
	cout<<"\n\n\n";
	cout<<"\nType of bus:\t\t6bxiie Public Bus\nSeats:\t\t\t51\nOdometer:\t\t681484km\nRegistration:\t\t3755MO\nState:\t\t\tSSW\nBody Model:\t\tPMA Canada\n";
	cout<<"Chassis Model:\t\tHino BC144\nChassis Number:\t\tBC144\nSuspension:\t\tSpring\nGVM:\t\t\t9300kg\nEngine Model:\t\tHinoW09DB\nEngine Number:\t\tW06D17387\n";
	cout<<"Fuel Type:\t\tpetrol\nHorse Power:\t\t148hp\nLocation:\t\tCentre\nSeat Belts:\t\tYes\nAirconditioning:\tYes";
	getch(); clrscr(); clearviewport();
	 cout<<"\t\t\tMENU\n\n1.To continue  <press 1>\n";
  cout<<"2.To Go to BUS MENU  <press 2>\n";
  cout<<"3.To Go to BUY MENU  <press 3>\n";
  cout<<"4.To go to MAIN MENU <press 4>\n\n";
  cout<<"5.To see details once agin <press 5>";
  cout<<"Your choice is  ";
  cin>>choose;
  switch(choose)
  {
  case 1:o1.color();
	break;
  case 2:o1.bus();
	break;
  case 3:o1.buymenu();
	break;
  case 4:o1.buyreplace();
	break;
  case 5:o1.uhino();
	break;
  default:cout<<"sorry\n";getch();exit(0);
	}
	}


	void buy::utata()
	{

	clrscr();
	clearviewport();

	cout<<"\t\t\t\tCompany:TATA\n\t\t\t\t^^^^^^^^^^^^";
	cout<<"\n\n";
	cout<<"\nType of bus:\t\tSA11 School Bus\nSeats:\t\t\t70\nOdometer:\t\t671887km\nRegistration:\t\t3745MO\nState:\t\t\tMP\nBody Model:\t\tTRE upp\n";
	cout<<"Chassis Model:\t\tHino BC144\nChassis Number:\t\tBC144\nSuspension:\t\tSpring\nBUE:\t\t\t9387kg\nEngine Model:\t\tTataW09DB\nEngine Number:\t\tS06D17371\n";
	cout<<"Fuel Type:\t\tDiesel\nHorse Power:\t\t140hp\nLocation:\t\tCentre\nSeat Belts:\t\tNo\nAirconditioning:\tNo";
	getch();
	clrscr();
	clearviewport();
	cout<<"\t\t\tMENU\n\n1.To continue   <press 1>\n";
  cout<<"2.To Go to BUS MENU  <press 2>\n";
  cout<<"3.To Go to BUY MENU  <press 3>\n";
  cout<<"4.To go to MAIN MENU <press 4>\n\n";
  cout<<"5.To see details once agin <press 5>";
  cout<<"Your choice is  ";
  cin>>choose;
  switch(choose)
  {
  case 1:o1.color();
	break;
  case 2:o1.bus();
	break;
  case 3:o1.buymenu();
	break;
  case 4:o1.buyreplace();
	break;
  case 5:o1.utata();
	break;
  default:cout<<"sorry\n";getch();exit(0);
	}
	}



	void buy::uvolvo()
	{
		clrscr();
	clearviewport();

	cout<<"\t\t\t\tCompany:Volvo\n\t\t\t\t^^^^^^^^^^^^";
	cout<<"\n\n\t";
	cout<<"\nType of bus:\t8Vxiie Special Bus\nSeats:\t\t\t79\n";
	cout<<"Odometer:\t\t676754km\nRegistration:\t\t37921MO\nState:\t\t\tGHI\nBody Model:\t\tPMC Mumbai\n";
	cout<<"Chassis Model:\t\tHino BC144\nChassis Number:\t\tBC144\nSuspension:\t\tSpring\nGVM:\t\t\t9354kg\nEngine Model:\t\tVOLVO TiE\nEngine Number:\t\tW06D17856\n";
	cout<<"Fuel Type:\t\tDiesel\nHorse Power:\t\t140hp\nLocation:\t\tCentre\nSeat Belts:\t\tYes\nAirconditioning:\tNo";
	getch();
	clrscr();
	clearviewport();
	cout<<"\t\t\tMENU\n\n1.To continue  <press 1>\n";
  cout<<"2.To Go to BUS MENU  <press 2>\n";
  cout<<"3.To Go to BUY MENU  <press 3>\n";
  cout<<"4.To go to MAIN MENU <press 4>\n\n";
  cout<<"5.To see details once agin <press 5>\n";
  cout<<"Your choice is  ";
  cin>>choose;
  switch(choose)
  {
  case 1:o1.color();
	break;
  case 2:o1.bus();
	break;
  case 3:o1.buymenu();
	break;
  case 4:o1.buyreplace();
	break;
  case 5:o1.uvolvo();
	break;
  default:cout<<"sorry\n";getch();exit(0);
	}
	}


void main()
 {int a;
 int gdriver=DETECT,gmode;
 initgraph(&gdriver,&gmode,"\\tc\\bgi");
 setbkcolor(4);      // color code 4 for redcolor
 graph();

clearviewport();
rectangle(5,5,630,472);
setfillstyle(1,YELLOW);
 settextstyle(4,0,4) ;    //font code 4 for ghothic_font
 outtextxy(130,5,"Welcome") ;
 delay(500);
 outtextxy(250,5, "to the") ;
 delay(500);
 outtextxy(340,5,"vehicle");
 delay(500);
 outtextxy(440,5,"sale");
 int a1;
 for(a=0;a<61;a++)
 {
 fillellipse(140,120,(10.0/6.0)*a,a);
 delay(25);
 }
 setcolor(RED);
 settextstyle(1,0,4);
 outtextxy(90,100,"1.BUY");
for(a=0;a<61;a++)
{
 fillellipse(445,120,(10.0/6.0)*a,a);
 delay(25);}
  setcolor(RED);
 settextstyle(1,0,4);
 outtextxy(400,100,"2.EXIT");

 x:
 gotoxy(4,23);
 cout<<"your choice::";
 cin>>a1;
 switch(a1)
  {case 1:o1.buymenu();break;
   case 2:cout<<"THANKS FOR COMING";getch();exit(1);break;

   default :cout<<"WRONG CHOICE\n\t PLEASE CHOOSE AGAIN";goto x;
  }

getch();
}
