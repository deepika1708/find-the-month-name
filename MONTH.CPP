#include<iostream.h>
#include<conio.h>
void main()
 {
 for(int i=1;i<=12;i++)
 {
 float a;
 char ch[12];
	       cout<<"Where t is the TEN"<<endl;
 cout<<"Where d is the TWILVE "<<endl;
 cout<<"Where e is the EIEVEN"<<endl;
 cout<<"Enter any number within (1 - 10,t,e,d)::";
 cin>>ch[12] ;

 switch(ch[12])
  {
 case '1':
  cout<<"Jenuary"<<endl;
  cout<<"31 days "<<endl;
 break;
 case '2' :
 cout<<"Febury"<<endl;
 cout<<"28/29 days"<<endl;
 break;

 case '3' :
  cout<<"March "<<endl;
  cout<<"31 days "<<endl;
 break;
 case '4':
 cout<<"April"<<endl;
 cout<<"30 days "<<endl;
 break;
 case '5':
 cout<<"Mai"<<endl;
 cout<<"31 days "<<endl;
 break;
 case '6':
  cout<<"June"<<endl;
  cout<<" 30 days"<<endl;
 break;
 case '7' :
  cout<<"JulY"<<endl;
  cout<<" 31 days "<<endl;
 break;
   case '8' :
   cout<<"August"<<endl;
   cout<<"31 days "<<endl;
  break;
  case '9' :
  cout<<"september"<<endl;
  cout<<" 30 days "<<endl;
  break;
  case 't' :
  cout<<"october"<<endl;
  cout<<" 31 days "<<endl;
  break;
  case 'e' :
  cout<<"November"<<endl;
  cout<<" 30 days "<<endl;
  break;
  case'd':
  cout<<"December"<<endl;
  cout<<"31 days "<<endl;
  break;
  default:
  {
  cout<<"It is not possible "<<endl;
  }
  }
  }
  getch();
  }