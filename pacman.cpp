#include <bits/stdc++.h>
#include "rlutil.h"
#include <conio.h>
#include <fstream>
#include <time.h>
#include <unistd.h>
using namespace std;

void display();



     char name[100][200]={
 " ________________________________________________________________________________________________ ",
 "|................................................................................................|",
 "|................................................................................................|",
 "|................................................................................................|",
 "|________............................................................................____________|",
 "         |..........................................................................|",
 "         |..........................................................................|",
 "         |..........................................................................|",
 "         |..........................................................................|",
 "         |..........................................................................|",
 "         |..........................................................................|",
 "         |..........................................................................|",
 "|~~~~~~~~...........................................................................~~~~~~~~~~~~~|",
 "|................................................................................................|",
 "|................................................................................................|",
 "|................................................................................................|",
 " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
 };

bool isvalid(int x,int y)
{
	if(name[x][y]=='|')return false;
	else if(name[x][y]=='~')return false;
	else if(name[x][y]=='_')return false;
	else if(name[x][y]=='X')return false;
	else return true;
}

int main()
{
	int x=1;int y=1;
    int a=0,b=0;
    long long int score=0;
  
  cout<<"       WELCOME TO ZACMAN\n\n       STAY AWAY FROM ""X""\n\n       ALL THE BEST";
  

  
 name[x][y]='@';
     	 
     	b=rand()%80+12;
		a=rand()%16+1; 
	 
		
		name[a][b]='X';  
	  
	
	  char input='p';			
	  bool game=true;
	  int i=0;

	  while(game)
	  {
	  	flag:
	  	input=getch();
		  
		 b=rand()%80+11;
		 a=rand()%16+1;  
		
		
		name[a][b]='X';  
		
		
		 b=rand()%80+11;
		 a=rand()%16+1;  
		
		
		name[a][b]='X';  
		    
		  
	  	switch(input)
	  	{
       	       case 72:     
			   	   while(1) {
			   if(isvalid(x-1,y)){
			   	   	
			   if(name[x-1][y]=='.')score++;
			   
			   name[x][y]=' ';
			                  
			   x-=1;
			   name[x][y]='@';
			   display();
			   sleep(.97);
			   system("clear");
			   if (kbhit())goto flag;
		}
		else 
		{
		if(name[x-1][y]=='X'){
		system("clear");
		cout<<"                     GAME OVER                 ";
		goto endd;	
		}
		
			
		display();  sleep(1);
		 system("clear");
			   if (kbhit())goto flag;
		}
	}
			   break;
	  		
			  case 80:     
			  
			   while(1) {
			   	if(isvalid(x+1,y)){
				   
			   if(name[x+1][y]=='.')score++;
			   
			   name[x][y]=' ';               
			   x+=1;
			   name[x][y]='@';
			   display();
			   sleep(.97);
			   system("clear");
			   if (kbhit())goto flag;
		}
	else 
		{
			
		if(name[x+1][y]=='X'){
		system("clear");

		cout<<"                     GAME OVER                 ";
		goto endd;	
		}
			
		display();  sleep(1);
		system("clear");
			   if (kbhit())goto flag;
		}
	}
			  break;
	  		  
				case 75: 
			   while(1) {
			   	if(isvalid(x,y-1)){
				   
				   if(name[x][y-1]=='.')score++;
				   
			   name[x][y]=' ';               
			   y-=1;
			   name[x][y]='@';
			   display();
			   sleep(.97);
			   system("clear");
			   if (kbhit())goto flag;
		}
	else 
		{
			
		if(name[x][y-1]=='X'){
		system("clear");
		cout<<"                     GAME OVER                 ";
		goto endd;	
		}
			
		display();  sleep(1);
		system("clear");
			   if (kbhit())goto flag;
		}
	}
				  break;      //left
	  		    
				case 77: 	   
				while(1) {
					if(isvalid(x,y+1)){
					
					if(name[x][y+1]=='.')score++;
					
			   name[x][y]=' ';               
			   y+=1;
			   name[x][y]='@';
			   display();
			   sleep(.97);
			   system("clear");
			   if (kbhit())goto flag;
		}
	else 
		{
			
		if(name[x][y+1]=='X'){
		system("clear");
		cout<<"                     GAME OVER                 ";
		goto endd;	
		}
			
		display();  sleep(1);
		system("clear");
			   if (kbhit())goto flag;
		}
	}
		  break;     //right
	  		
	  		
		  }
	  	
      }
			
			endd:int s,c=0;
			vector<int>v;
			
				ofstream myfile("gamescore.txt",ios::app);
		
				myfile<<score;
				myfile<<"\n";
				myfile.close();
				
				cout<<endl<<endl<<"Score"<<endl;
				
				ifstream obj("gamescore.txt");
				while(obj>>s)
				{cout<<s<<endl;
				v.push_back(s);
				c++;
			}
			sort(v.begin(),v.end());
			cout<<"\nThe Highest Score is: "<<v[c-1];
				
				
				return 0;
   }
						
						                  
      void display()
      {
      	system("color 2");
      		  for(int i=0;i<17;++i)
	  {
	  	for(int j=0;name[i][j]!='\0';++j)
	  	 cout<<name[i][j];
	  	 cout<<endl<<endl;
						}
				
	  }

