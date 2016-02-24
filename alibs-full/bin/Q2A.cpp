#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(int argc,char* argv[])
{
    if(argc!=3){
        cerr<<"usage: Q2A fq fa"<<endl;
        return 1;
    }
    ifstream in(argv[1]);
    ofstream out(argv[2]);
    string line;
    int no=1;
    while(getline(in,line)){
        if(no%4==1){
            line[0] = '>';
            out<<line<<"\n";
        }else if(no%4==2){
            int len = line.size();
            int pos=0;
            while(pos+50<=len){
                out<<line.substr(pos,50)<<"\n";
                pos+=50;
            }
            if(pos<=len-1){
                out<<line.substr(pos,len-pos)<<"\n";
            }
        }
        ++no;
    }
    in.close();
    out.close();
    
    return 0;
}
