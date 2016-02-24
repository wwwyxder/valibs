#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
string c2t(string str){
    for(int i=str.size()-1;i>=0;--i){
        if(str[i]=='C'){
            if(str[i+1]=='G'){
                if(rand()%100<69){
                    str[i]='T';
                }
            }else{
                if(rand()%100<95){
                    str[i]='T';
                }
            }
        }
    }
    return str;
}
string g2a(string str){
    for(int i=1;i<str.size()-1;++i){
        if(str[i]=='G'){
            if(str[i-1]=='C'){
                if(rand()%100<69){
                    str[i]='A';
                }
            }else{
                if(rand()%100<95){
                    str[i]='A';
                }
            }
        }
    }
    return str;
}
int main()
{
    srand((unsigned)time(NULL));
    string line[4];
    while(getline(cin,line[0])){
        getline(cin,line[1]);
        getline(cin,line[2]);
        getline(cin,line[3]);
        cout<<line[0]<<"\n";
        if((rand()/67)%2==0){
            cout<<c2t(line[1])<<"\n";
        }else{
            cout<<g2a(line[1])<<"\n";
        }
        cout<<line[2]<<"\n"<<line[3]<<"\n";
    }
    return 0;
}
