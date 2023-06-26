#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;
void reg(void);
void log(void);

int main(void)
{
    int choice=0;
    cout<<"Enter Your Choice :"<<endl;
    cout<<"1. Registration\n2.login"<<endl;
    cin>>choice;
    if(choice==1)
    {
       reg();
       cout<<"\n\n"<<endl;
       cout<<"|||>>>LOGGING IN<<<|||"<<endl;
       cout<<"Press Any Button....";
       log(); 
    }
    else if(choice==2)
    {
        log();
    }
    
    return 0;
}

void reg(void)
{
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string fname;
    cout<<"Enter Your First Name : ";
    getline(cin,fname);
    string lname;
    cout<<"Enter Your Last Name  : ";
    getline(cin,lname);
    string usrname;
    cout<<"Enter Your Username   : ";
    getline(cin,usrname);
    string pass;
    cout<<"Enter Your Password   : ";
    getline(cin,pass);
    ofstream out("lock.txt",ios::app);
    out<<"\n";
    out<<fname<<"\t"<<lname<<"\t"<<usrname<<"\t"<<pass;
    out.close();
}


void log(void)
{
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string usrname,pword,urname,pass,fname,lname;
    int flag=0;
    cout<<"Enter Your Username : ";
    getline(cin,usrname);
    cout<<"Enter Your Password : ";
    getline(cin,pword);
    ifstream read("lock.txt");
    while(!read.eof())
    {
        read>>fname>>lname>>urname>>pass;
        if(urname==usrname && pass==pword)
        {
            flag=1;
            break;
        }
        else
        {
            flag=0;
            continue;
        }
    }
    read.close();
    if(flag==1)
    {
        cout<<"login successful"<<endl;
    }
    else if(flag==0)
    {
        cout<<"login failed"<<endl;
    }
}