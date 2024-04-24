#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std; 

int main () {

    srand(time(nullptr));

int daysUntilExpiration = rand() % 12;

switch (daysUntilExpiration) {
case 0: 
    cout<<"Your subscription will expire soon. Renew now!"<<endl; break;
    break;
case 1:
    cout<<"Your subscription expires in " <<daysUntilExpiration<< " days"<<endl; 
    cout<<"Renew now and save 10%";break;
    break;
case 2:
    cout<<"Your subscription expires within a day"<<endl; 
    cout<<"Renew now and save 20%";break;
    break;
case 3:
    cout<<"Your subscription has expired"<<endl; break;
    break;

default:
    cout<<"You have an active subscription"<<endl; break;
    break;
}

}