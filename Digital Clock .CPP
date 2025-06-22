   #include<stdio.h>
   #include<conio.h>
   #include<time.h>
   #include<stdlib.h>
   #include<dos.h>
   void main()
   {
	clrscr();

		int x,y,c;
		gotoxy(15,6);
		printf("%c",201);
		gotoxy(15,19);
		printf("%c",200);
		gotoxy(65,6);
		printf("%c",187);
		gotoxy(65,19);
		printf("%c",188);
		for(x=15; x<64; x++)
		{
		gotoxy(x+1,6);
		printf("%c",205);
		}
		for(y=6; y<18; y++)
		{
		gotoxy(65,y+1);
		printf("%c",186);
		}
		for(x=63; x>14; x--)
		{
		gotoxy(x+1,19);
		printf("%c",205);
		}
		for(y=17; y>5; y--)
		{
		gotoxy(15,y+1);
		printf("%c",186);
		}
   int clock;
   gotoxy(1,1);
   printf("Normal clock=1\n");
   printf("Standard clock=2\n");
   printf("Choose the clock:");
   scanf("%d",&clock);
   if(clock==1)
   {
	while(1)
       {
	gotoxy(35,13);
	time_t s;
	struct tm* t;
	s=time(NULL);
	t=localtime(&s);
	printf("%02d:%02d:%02d",t->tm_hour,t->tm_min,t->tm_sec);
	if(s<=12)
	{
	printf(" PM");
	}
	else
	{
	printf(" AM");
	}
       } /*loop*/

   } /*if*/
   else if(clock==2)
   {           	int h,m,s;
		gotoxy(1,3);
		printf("Enter the value of hour ,minute and second :");
		scanf("%d %d %d",&h,&m,&s);
		int hour=h;
		int minute=m;
		int second=s;


		while(1)
	       {

		 gotoxy(35,13);
		 printf("%02d:%02d:%02d",hour,minute,second);
		 fflush(stdin);
		 second++;
		 if(second==60)
		 {
		 minute=minute+1;
		 second=0;
		 }
		 if(minute==60)
		 {
		 hour=hour+1;
		 minute=60;
		 }
		 if(hour==12)
		 {
		 hour=0;
		 minute=0;
		 second=0;
		 }
		 /* Meridim*/
		 if(hour<=12)
		 {printf("  AM");
         	 }
		 else
		 {
		 printf("  PM");
		 }
		 sleep(1);
	      }/*loop*/
   } /*else if*/
   else
   {
   printf("INVALID INPUT");
   }

	getch();
	}


