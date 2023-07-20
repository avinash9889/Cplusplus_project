#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

class atm
{
    long int accountno;
    string name;
    int pin;
    double balance;
    string mobile_no;
    public:
    
    
    // Set the data of details 
    
    void setdata(long int accountno_a,string name_a,int pin_a,double balance_a,string mobile_no_a)
    {
        accountno=accountno_a;
        name=name_a;
        pin=pin_a;
        balance=balance_a;
        mobile_no=mobile_no_a;
    }
    
    // get account function returning user account noexcept
    long int getaccountno()
    {
        return accountno;
    }
    
    
    string getname()
    {
        return name;
    }
    
    
    int getpin()
    {
        return pin;
    }
    
    double getbalance()
    {
        return balance;
    }
    
    string getmobileno()
    {
        return mobile_no;
    }
    
    //set mobile no. function upadating user mobile no
    void setmobileno(string pre_mob,string mob_new)
    {
        if(pre_mob ==mobile_no)
        {
            mobile_no=mob_new;
            cout<<endl<<"Successfully updated";
            _getch();
        }
        else
        {
            cout<<endl<<"INcorrect old mobile no!!!";
        }
    }
    
    // cash withdraw function for withdrawing cash from aatm
    
    void cashwithdraw(int amount_a)
    {
        if(amount_a>0 && amount_a<balance)
        {
            balance-=amount_a;
            cout<<endl<<"please collect your Cash";
            cout<<endl<<"Availble balance is "<<balance;
            _getch();
        }
        else
        {
            cout<<endl<<"INvalid input or Insufficient balance";
            _getch();
        }
    }
    
    
};   // Here class ends 

// int function started

int main()
{
    int choice,enterpin;
    long int enteraccountno;
    system("cls");
    atm usr;
    usr.setdata(1234567,"Avinash",9584,56000.55,"9889061206");
    
    do
    {
        system("cls");
        cout<<endl<<"**** Welcome to aTm***"<<endl;
        cout<<endl<<"enter account no";
        cin>>enteraccountno;
        
        cout<<endl<<"enter pin";
        cin>>enterpin;
        
        
        if((enteraccountno == usr.getaccountno()) && (enterpin== usr.getpin()))
        {
            do
            {
                int amount=0;
                string oldmobile,newmobile;
                
                system("cls");
                
                //User interface
                
                cout<<endl<<"** Welcome to ATM ***"<<endl;
                cout<<endl<<"Select options";
                cout<<endl<<"1. Check balance";
                cout<<endl<<"2. Cash withdrawing";
                cout<<endl<<"3. Show user details";
                cout<<endl<<"4. Update mobile no";
                cout<<endl<<"5. exit";
                
                cin>>choice;
                
                switch(choice)
                {
                    case 1:
                    
                    cout<<endl<<"Your bank balance is "<<usr.getbalance();
                    _getch();
                    break;
                    
                    case 2:
                    cout<<endl<<"Enter the amount";
                    cin>>amount;
                    usr.cashwithdraw(amount);
                    _getch();
                    break;
                    
                    case 3:
                    cout<<endl<<"user details are";
                    cout<<endl<<"Acc No. is "<<usr.getaccountno();
                    cout<<endl<<"Name is "<<usr.getname();
                    cout<<endl<<"Balace is "<<usr.getbalance();
                    cout<<endl<<"Mobile no. is "<<usr.getmobileno();
                    
                    _getch();
                    
                    break;
                    
                    case 4:
                    cout<<endl<<"Enter old mobile no";
                    cin>>oldmobile;
                    cout<<endl<<"Enter new mobile no";
                    cin>>newmobile;
                    
                    usr.setmobileno(oldmobile,newmobile);
                    
                    _getch();
                    
                    break;
                    
                    case 5:
                    
                    exit(0);
                    
                    default:
                    cout<<endl<<"enter Valid data !!!!!";
                    _getch();
                }
            }while(1);
        }
        else
                {
                    cout<<"enter details are Invalid";
                }
    }while(1);
    return 0;
}
