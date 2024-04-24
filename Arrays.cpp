#include <iostream>
#include <string>

using namespace std;

int main () {

    string hope[] = {"B123","C234","A345","C15","B177","G3003","C235","B179"};

    int size = sizeof(hope) / sizeof(hope[0]);

    for (int i = 0; i < size; i++) {
        if (hope[i][0] == 'B')
            cout<<hope[i] <<endl;
    }
    
    return 0;

}