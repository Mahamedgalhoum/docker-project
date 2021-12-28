#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
int user=0 , cpu=0 ;
    cout <<"heloo in paper-Scissors-rock play! \n";
    cout <<"please enter number  of round   \n";
    int r,cp=0,us=0;
cin>>r;
 for (int rounds=1 ; rounds<=r ; rounds++)
 {
    cout <<" \n\n\n 1)paper \n 2)Scissors \n 3)rock \n ";
    cout <<"please enter you choose 1 , 2 or 3 \n";
    cin >> user ;
    cpu = rand()%3+1;

     if(cpu==user)
    {
	cout<<"you choose same   \n";

    }
	else if (user ==2 && cpu== 1)
	{
    cout<<" cpu  choose   paper\n" ;
	cout<<" you win in this round …" ;
	++us;

	}
	else if (user ==1 && cpu== 2)
	{
    cout<<" cpu  choose   Scissors\n" ;
	cout<<"cpu win in this round …" ;
     cp++;
	}

	else if (user ==1 && cpu== 3)
	{
    cout<<" cpu  choose   rock\n" ;
	cout<<" you win in this round …" ;
    us++;
	}
	else if (user ==3 && cpu== 1)
	{
    cout<<" cpu  choose   paper" ;
	cout<<"cpu win in this round …" ;
++cp;
	}


	else if (user ==3 && cpu== 2)
	{
    cout<<" cpu  choose   Scissors\n" ;
	cout<<" you win in this round …" ;
   us++;
	}
	else if (user ==2 && cpu== 3)
	{

    cout<<" cpu  choose   rock\n" ;
	cout<<"cpu win in this round …" ;
++cp;
	}



}
if(cp>us)
    cout<<"\n\n\n\t\t\t\t computer win \n\n";
else if(us>cp)
    cout<<"\n\n\n\t\t\t\t you  win \n\n";
else
    cout<<"\n\n\n\t\t\t\tthe same \n\n";
cout<<"result   you cpu\n  ";
cout<<"score   "<<us<<"   "<<cp<<endl;

}
