#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

class resturant{
	
	int sum=0;
	
	public:
		void burger();
		void rolls_dosa();
		void paratha_pakoda();
		void rice_dal();
		void veg();
		void non_veg();
		void roti_bread();
		void salad();
		void raita();
		void exits();
		
};

void resturant :: burger()
{   int x;
	
    do{
    	cout<<endl<<endl; 
    	int a,n;
	  cout<<"press 1 for Aloo Tikki Burger : 100 Rs\n";
	  cout<<"press 2 for Aloo Tikki cream Burger : 100 Rs\n";
	  cout<<"press 3 for Aloo Tikki cheese Burger :150 Rs\n";
	  cout<<"press 4 for Mix Veg Burger :200 Rs\n";
	  cout<<"press 5 for Chicken Burger :150 Rs\n";
	cin>>n;
	cout<<"Enter Number of Plates :";
    cin>>a;
    	switch(n){
    	case 1:
    		sum+=a*100;
    		break;
    	case 2:
    		sum+=a*100;
    		break;
    	case 3:
    		sum+=a*150;
    		break;
    	case 4:
    		sum+=a*200;
    		break;
    	case 5:
    		sum+=a*150;
    		break;
    	default:
    		break;
     	}
     	cout<<"\n do you want to select next option in prev menu then press :: y \n";
	    cout<<"if you want to exit then press :: N ";
	    x=getch();
	    
	}while(x=='y'|| x=='Y');
    
	
}
void resturant :: rolls_dosa()
{
	int x;
    do{
    	cout<<endl<<endl; 
    		int a,n;
	  cout<<"press 1 for Veg Rolls : 100 Rs\n";
	  cout<<"press 2 for Paneer Rolls : 100 Rs\n";
	  cout<<"press 3 for Aloo Rolls : 150 Rs\n";
	  cout<<"press 4 for Paneer Tikka Rolls : 200 Rs\n";
	  cout<<"press 5 for Chicken Tikka Rolls :150 Rs\n";
	  cout<<"press 6 for Simple Dosa : 100 Rs\n";
	  cout<<"press 7 for Special Dosa : 150 Rs\n";
	cin>>n;
	cout<<"Enter Number of Plates :";
    cin>>a;
    	switch(n){
    	case 1:
    		sum+=a*100;
    		break;
    	case 2:
    		sum+=a*100;
    		break;
    	case 3:
    		sum+=a*150;
    		break;
    	case 4:
    		sum+=a*200;
    		break;
    	case 5:
    		sum+=a*150;
    		break;
    	case 6:
    		sum+=a*100;
    		break;
    	case 7:
    		sum+=a*150;
    		break;
    	default:
    		break;
     	}
     	cout<<"\n do you want to select next option in prev menu then press :: y \n";
	    cout<<"if you want to exit then press :: N ";
	    x=getch();
	    
	}while(x=='y'|| x=='Y');
}
void resturant :: paratha_pakoda()
{
	int x;
    do{
    	cout<<endl<<endl; 
    	int a,n;
	  cout<<"press 1 for Plain Paratha : 100 Rs\n";
	  cout<<"press 2 for Paneer Paratha : 100 Rs\n";
	  cout<<"press 3 for Lachha Paratha : 150 Rs\n";
	  cout<<"press 4 for Aloo Paratha : 200 Rs\n";
	  cout<<"press 5 for Onion Paratha : 150 Rs\n";
	  cout<<"press 6 for Aloo Pakoda : 100 Rs\n";
	  cout<<"press 7 for Paneer Pakoda : 150 Rs\n";
	  cout<<"press 8 for Mix Veg Pakoda : 150 Rs\n";
	cin>>n;
	cout<<"Enter Number of Plates :";
    cin>>a;
    	switch(n){
    	case 1:
    		sum+=a*100;
    		break;
    	case 2:
    		sum+=a*100;
    		break;
    	case 3:
    		sum+=a*150;
    		break;
    	case 4:
    		sum+=a*200;
    		break;
    	case 5:
    		sum+=a*150;
    		break;
    	case 6:
    		sum+=a*100;
    		break;
    	case 7:
    		sum+=a*150;
    		break;
    	case 8:
    		sum+=a*150;
    		break;
    	default:
    		break;
     	}
     	cout<<"\n do you want to select next option in prev menu then press :: y \n";
	    cout<<"if you want to exit then press :: N ";
	    x=getch();
	    
	}while(x=='y'|| x=='Y');
	
	
}
void resturant :: rice_dal()
{
	int x;
	do{
		cout<<endl<<endl; 
    	int a,n;
	  cout<<"press 1 for Jeera Rice : 100 Rs\n";
	  cout<<"press 2 for Plain Rice : 100 Rs\n";
	  cout<<"press 3 for Fried Rice : 150 Rs\n";
	  cout<<"press 4 for Special Pulao : 200 Rs\n";
	  cout<<"press 5 for Plain Pulao : 150 Rs\n";
	  cout<<"press 6 for Plain Dal : 100 Rs\n";
	  cout<<"press 7 for Fried Dal : 150 Rs\n";
	  cout<<"press 8 for Tadka : 150 Rs\n";
	cin>>n;
	cout<<"Enter Number of Plates :";
    cin>>a;
    	switch(n){
    	case 1:
    		sum+=a*100;
    		break;
    	case 2:
    		sum+=a*100;
    		break;
    	case 3:
    		sum+=a*150;
    		break;
    	case 4:
    		sum+=a*200;
    		break;
    	case 5:
    		sum+=a*150;
    		break;
    	case 6:
    		sum+=a*100;
    		break;
    	case 7:
    		sum+=a*150;
    		break;
    	case 8:
    		sum+=a*150;
    		break;
    	default:
    		break;
     	}
     	cout<<"\n do you want to select next option in prev menu  then press :: y \n";
	    cout<<"if you want to exit then press :: N ";
	    x=getch();
	    
	}while(x=='y'|| x=='Y');
	
	
	
}
void resturant :: veg()
{
	int x;
	do{
		cout<<endl<<endl; 
    	int a,n;
	  	cout<<"press 1 for Simple Veg :100 Rs\n";
	  cout<<"press 2 for Mix Veg : 100 RS\n";
	  cout<<"press 3 for Panner Kadhai : 150 Rs\n";
	  cout<<"press 4 for Sahi Paneer : 200 Rs\n";
	  cout<<"press 5 for Manchuriyan : 150 Rs\n";
	  cout<<"press 6 for Aloo Matar : 100Rs\n";
	  cout<<"press 7 for Aloo Onion : 150 Rs\n";
	cin>>n;
	cout<<"Enter Number of Plates :";
    cin>>a;
    	switch(n){
    	case 1:
    		sum+=a*100;
    		break;
    	case 2:
    		sum+=a*100;
    		break;
    	case 3:
    		sum+=a*150;
    		break;
    	case 4:
    		sum+=a*200;
    		break;
    	case 5:
    		sum+=a*150;
    		break;
    	case 6:
    		sum+=a*100;
    		break;
    	case 7:
    		sum+=a*150;
    		break;
    
    	default:
    		break;
     	}
     	cout<<"\n do you want to select next option in prev menu  then press :: y \n";
	    cout<<"if you want to exit then press :: N ";
	    x=getch();
	    
	}while(x=='y'|| x=='Y');
	
}
void resturant :: non_veg()
{
	int x;
  do{
  	cout<<endl<<endl; 
    	int a,n;
	  	cout<<"press 1 for Simple Veg :100 Rs\n";
	  cout<<"press 2 for Mix Veg : 100 RS\n";
	  cout<<"press 3 for Panner Kadhai : 150 Rs\n";
	  cout<<"press 4 for Sahi Paneer : 200 Rs\n";
	  cout<<"press 5 for Manchuriyan : 150 Rs\n";
	  cout<<"press 6 for Aloo Matar : 100Rs\n";
	  cout<<"press 7 for Aloo Onion : 150 Rs\n";
	cin>>n;
	cout<<"Enter Number of Plates :";
    cin>>a;
    	switch(n){
    	case 1:
    		sum+=a*100;
    		break;
    	case 2:
    		sum+=a*100;
    		break;
    	case 3:
    		sum+=a*150;
    		break;
    	case 4:
    		sum+=a*200;
    		break;
    	case 5:
    		sum+=a*150;
    		break;
    	case 6:
    		sum+=a*100;
    		break;
    	case 7:
    		sum+=a*150;
    		break;
    
    	default:
    		break;
     	}
     	cout<<"\n do you want to select next option in prev menu  then press :: y \n";
	    cout<<"if you want to exit then press :: N ";
	    x=getch();
	    
	}while(x=='y'|| x=='Y');
		
}
void resturant :: roti_bread()
{
	int x;
	do{
		cout<<endl<<endl; 
    	int a,n;
	  	 cout<<"press 1 for Tandoori Roti : 10 Rs\n";
	     cout<<"press 2 for Butter Tandoori Roti :10 Rs\n";
	     cout<<"press 3 for veg Stuff Naan : 15 Rs\n";
	     cout<<"press 4 for Paneer Stuff Naan : 15 Rs\n";
	     cout<<"press 5 for Butter Naan : 20 Rs\n";
	     cout<<"press 6 for Roomali Roti : 20 Rs\n";
	     cout<<"press 7 for Roti : 10 Rs\n";
	     cout<<"press 8 for Butter Roti : 10 Rs\n";
	cin>>n;
	cout<<"Enter Number of Plates :";
    cin>>a;
    	switch(n){
    	case 1:
    		sum+=a*10;
    		break;
    	case 2:
    		sum+=a*10;
    		break;
    	case 3:
    		sum+=a*15;
    		break;
    	case 4:
    		sum+=a*15;
    		break;
    	case 5:
    		sum+=a*20;
    		break;
    	case 6:
    		sum+=a*20;
    		break;
    	case 7:
    		sum+=a*10;
    		break;
    	case 8:
    		sum+=a*10;
    		break;
    
    	default:
    		break;
     	}
     	cout<<"\n do you want to select next option in prev menu  then press :: y \n";
	    cout<<"if you want to exit then press :: N ";
	    x=getch();
	    
	}while(x=='y'|| x=='Y');
	
}
void resturant :: salad()
{
	int x;
	do{
		cout<<endl<<endl; 
    	int a,n;
	  	 cout<<"press 1 for Simple Salad : 10 Rs\n";
	  cout<<"press 2 for Cucumber Salad : 10 Rs\n";
	  cout<<"press 3 for Onion Salad : 15 Rs\n";
	  cout<<"press 4 for Special Salad : 15 Rs\n";
	cin>>n;
	cout<<"Enter Number of Plates :";
    cin>>a;
    	switch(n){
    	case 1:
    		sum+=a*10;
    		break;
    	case 2:
    		sum+=a*10;
    		break;
    	case 3:
    		sum+=a*15;
    		break;
    	case 4:
    		sum+=a*15;
    		break;
    	
    	default:
    		break;
     	}
     	cout<<"\n do you want to select next option in prev menu  then press :: y \n";
	    cout<<"if you want to exit then press :: N ";
	    x=getch();
	    
	}while(x=='y'|| x=='Y');
}
void resturant :: raita()
{
	int x;
	do{
		cout<<endl<<endl; 
   	int a,n;
	cout<<"press 1 for Boondi : 10 Rs\n";
	  cout<<"press 2 for cucumber : 10Rs\n";
	  cout<<"press 3 for Mix Veg : 15 Rs\n";
	cin>>n;
	cout<<"Enter Number of Plates :";
    cin>>a;
    	switch(n){
    	case 1:
    		sum+=a*10;
    		break;
    	case 2:
    		sum+=a*10;
    		break;
    	case 3:
    		sum+=a*15;
    		break;
    
    	default:
    		break;
     	}
     	cout<<"\n do you want to select next option in prev menu   then press :: y \n";
	    cout<<"if you want to exit then press :: N ";
	    x=getch();
	    
	}while(x=='y'|| x=='Y');
}

void resturant::exits()
{
	cout<<endl<<endl; 
	cout<<"Hello Sir"<<endl;
	cout<<"Total Bill of your Order :"<<sum;
}

int main(){
	int n,x;
	 resturant obj;
	 
	 cout<<"Hello Sir\n\nwelcome to Our Resturant"<<endl;
	 do{
	 	cout<<endl<<endl; 
	    cout<<"press 1 for Burger\n";
	    cout<<"press 2 for Rolls & Dosa \n";
	    cout<<"press 3 for Paratha & Pakoda\n";
	    cout<<"press 4 for Rice & Dal \n";
	    cout<<"press 5 for Veg\n";
	    cout<<"press 6 for Non Veg \n";
	    cout<<"press 7 for Roti & Bread's \n";
	    cout<<"press 8 for salad\n";
	    cout<<"press 9 for Raita\n";
	    cout<<"press 0 for Exit\n";
	    cin>>n;
	    
	    switch(n)
	    {
	    	case 1:
	    		obj.burger();
	    		break;
	    	
	    	case 2:
	    		obj.rolls_dosa();
	    		break;
	    	case 3:
	    		obj.paratha_pakoda();
	    		break;
	    	case 4:
	    		obj.rice_dal();
	    		break;
	    	case 5:
	    		obj.veg();
	    		break;
	    	case 6:
	    		obj.non_veg();
	    		break;
	    	case 7:
	    		obj.roti_bread();
	    		break;
	    	case 8:
	    		obj.salad();
	    		break;
	    	case 9:
	    		obj.raita();
	    		break;
	    	case 0:
	    		if(n==0){
	    			exit(1);
				}
			default:
				cout<<"Invalid Input \n Please, try Again";
				break;
		}
		
		cout<<"\n\n Go to  Main menu then press :: y \n";
	    cout<<"if you want to exit then press :: N ";
	    x=getch();
	    
	 }while(x=='y' || x=='Y');
	 
	 obj.exits();
	 
	getch();
	   return 0;
}
