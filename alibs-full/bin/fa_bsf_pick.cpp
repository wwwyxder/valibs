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
        cerr<<"Usage: fa_bsf_pick <oneline_reads.fa> <aln.sam> <out.fa>//the reads file must be sortted.";
        return 1;
    }
    ifstream reads(argv[1]);
    string cmd=(string)"cut -f 1 "+argv[2]+"|LC_ALL=C sort -u > aln_tmp_f1";
    system(cmd.c_str());
    cmd = (string)"cut -f 1 "+argv[1]+">read_names";
    system(cmd.c_str());
    ifstream aln("aln_tmp_f1");
    ifstream rd("read_names");
    ofstream out("extracted_reads");
    string line;
    string str;
    string line_name;
    do{
        getline(aln,str);
    }while(str[0]=='@');

    while(getline(reads,line)){
        getline(rd,line_name);
        //cerr<<">>>"<<line[0]<<endl<<">>>"<<str<<endl;getchar();
        if(line_name==">"+str){
            getline(aln,str);
        }else{
            out<<line<<"\n";
        }
    }
    cmd = (string)"fa_from_oneline.sh <extracted_reads >"+argv[3];
    system(cmd.c_str());
    return 0;
}
