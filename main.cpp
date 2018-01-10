#include<iostream>
using namespace std;
int main()
{
cout<<"Enter the name of the person you want to write to\n";   //this is the prompt,because it is the first request to the user
string first_name;                 //we create an object in memory to hold the name entered by the user.
                                   //it is of type string and name first_name
cin>>first_name;

cout<<"Enter your friend's name\n";
string friend_name;
cin>>friend_name;

cout<<"Enter the age of the recepient\n";
int age=0;
cin>>age;
if(age<=0 || age>110)
cout<<"You are kidding!\n";
                   
cout<<"If your friend is male type 'm' else type 'f'\n";
char friend_sex;
cin>>friend_sex;

cout<<"Dear "<<first_name<<",\nHow are you? How is your dog doing?\nHave you seen "<<friend_name<<" lately?\n";

if(friend_sex=='m')
{
cout<<"If you see "<<friend_name<<" please ask him to call me\n";
}
else
{
cout<<"If you see "<<friend_name<<" please ask her to call me\n";
}

cout<<"I hear you just had a birthday and you are "<<age<<" years old\n";

if(age<12)
{
cout<<"Next year you will be "<<age+1<<"\n";
}

if (age==17)
{
cout<<"Next year you will be able to vote\n";
}

if(age>70)
{
cout<<"I hope you enjoy your retirement\n";
}

cout<<"Yours Sincerely"<<"\n \n"<<"Arvind Kumar";
}
