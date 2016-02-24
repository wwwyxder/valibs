#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;
using std::cerr;
int main(int argc,char* argv[])
{
    if(argc!=4){
        cerr<<"Usage: bsf_pick <reads> <aln.sam> <out.fq>//the reads file must be sortted.";
        return 1;
    }
    ifstream reads(argv[1]);
    string cmd=(string)"cut -f 1 "+argv[2]+"|LC_ALL=C sort -u > aln_tmp_f1";
    system(cmd.c_str());
    ifstream aln("aln_tmp_f1");
    ofstream out(argv[3]);
    string line[4];
    string str;
    do{
        getline(aln,str);
    }while(str[0]=='@');
    while(getline(reads,line[0])){
        getline(reads,line[1]);
        getline(reads,line[2]);
        getline(reads,line[3]);
        //cerr<<">>>"<<line[0]<<endl<<">>>"<<str<<endl;getchar();
        if(line[0]=="@"+str){
            getline(aln,str);
        }else{
            out<<line[0]<<"\n";
            out<<line[1]<<"\n";
            out<<line[2]<<"\n";
            out<<line[3]<<"\n";
        }
    }
}
