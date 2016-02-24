#include <iostream>
#include <string>
using namespace std;
int main()
{
    string line;
    while(getline(cin,line)){
        if(line.size()>0){
            if(line[0]=='>'){
                cout<<line<<"\n";
            }else{
                int pos=0;
                while(pos+60<=line.size()){
                    cout<<line.substr(pos,60)<<"\n";
                    pos+=60;
                }
                if(pos<=line.size()){
                    cout<<line.substr(pos)<<"\n";
                }
            }
        }
    }
    return 0;
}
