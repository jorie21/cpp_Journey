
#include <iostream>
using namespace std;

int main()
{

        int number;


        cout<< "The Jollibee menu"<<endl;
        cout<<"\n";


        cout<<"1. Yumburger solo"<<endl;
        cout<<"2. Yumburger with fries & drink"<<endl;
        cout<<"3. Cheesy yum burger"<<endl;
        cout<<"4. Cheesy yum burger with fries & drink"<<endl;
        cout<<"5. Bacon chessy yum burger"<<endl;
        cout<<"6. Bacon chessy yum burger with fries & drink"<<endl;
        cout<<endl;


        cout<<"Pick your number: ";
        cin>> number;
        cout<<endl;

        if ( number == 1 )
          cout<< "Yumburger solo is 39 pesos" <<endl;
           else if( number == 2 )
          cout<< "Yumburger with fries & drink is 88 pesos"<<endl;
           else if( number == 3 )
          cout<< "Cheesy yum burger is 50 pesos"<<endl;
           else if( number == 4 )
          cout<< "Cheesy yum burger with fries & drink is 103 pesos"<<endl;
          else{
            cout<<"INVALID";
          }


        return 0;


}


