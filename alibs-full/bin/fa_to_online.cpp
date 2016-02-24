#include <iostream>
#include <string>
using namespace std;
int main()
{
    string line;
    bool b = true;
    while(getline(cin,line)){
        if(line[0]=='>'){
            cout<<"\n";
        }
        cout<<line;
    }
    return 0;
}
