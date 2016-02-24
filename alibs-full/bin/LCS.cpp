#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>
using std::vector;
using std::cout;
using std::cerr;
using std::cin;
using std::string;
using std::endl;
using std::ifstream;
using std::ofstream;
const int N=100;
inline int myMAX(int a,int b)
{
    return a>b?a:b;
}
void load_ref(string& ref,string path)
{
    string cmd;
    cmd="cat "+path+"|grep -v \"^>\"|tr -d '\\n' > "+path+".tmp";
    system(cmd.c_str());
    ifstream in((path+".tmp").c_str());
    getline(in,ref);
    cerr<<ref.size()<<endl;
    //cout<<"["<<cmd<<"]"<<endl;
    cmd="rm "+path+".tmp";
    system(cmd.c_str());
}
int LCS_TC(string A,string B,char** buf)//buf[i][j] 保存A[0...i],B[o...j]的最长公共字串长度
{
    for(int i=0;i<A.size();++i){
        if(A[i]==B[0]||A[i]=='T'&&B[0]=='C'){
            buf[i][0] = 1;
        }else{
            buf[i][0] = 0;
        }
    }
    for(int j=0;j<B.size();++j){
        if(A[0]==B[j]||A[0]=='T'&&B[j]=='C'){
            buf[0][j] = 1;
        }else{
            buf[0][j] = 0;
        }
    }
    for(int j=1;j<B.size();++j){
        for(int i=1;i<=A.size();++i){
            if(B[j]==A[i]||A[i]=='T'&&B[j]=='C'){
                buf[i][j] = buf[i-1][j-1] + 1;
            }else{
                buf[i][j] = myMAX(buf[i-1][j],buf[i][j-1]);
            }
        }
    }
    return buf[A.size()-1][B.size()-1];
}

int LCS_AG(string A,string B,char** buf)//buf[i][j] 保存A[0...i],B[o...j]的最长公共字串长度
{
    for(int i=0;i<A.size();++i){
        if(A[i]==B[0]||A[i]=='A'&&B[0]=='G'){
            buf[i][0] = 1;
        }else{
            buf[i][0] = 0;
        }
    }
    for(int j=0;j<B.size();++j){
        if(A[0]==B[j]||A[0]=='A'&&B[j]=='G'){
            buf[0][j] = 1;
        }else{
            buf[0][j] = 0;
        }
    }
    for(int j=1;j<B.size();++j){
        for(int i=1;i<=A.size();++i){
            if(B[j]==A[i]||A[i]=='A'&&B[j]=='G'){
                buf[i][j] = buf[i-1][j-1] + 1;
            }else{
                buf[i][j] = myMAX(buf[i-1][j],buf[i][j-1]);
            }
        }
    }
    return buf[A.size()-1][B.size()-1];
}
inline char tr(char ch){
    if(ch=='C') return 'G';
    if(ch=='T') return 'A';
    if(ch='A') return 'T';
    if(ch=='G') return 'C';
}
void modify(string& ref,string sampath)
{
    cerr<<"DEBUG:1"<<endl;
    string cmd;
    cmd="cat "+sampath+"|grep \"^@\" > modified."+sampath;
    system(cmd.c_str());
    cmd="cat "+sampath+"|grep -v \"^@\" > body."+sampath;
    system(cmd.c_str());
    cmd="cat body."+sampath+"|cut -f 1,2,4,10 > body_field."+sampath;
    system(cmd.c_str());
    ofstream out(("modified."+sampath).c_str(),ofstream::out|ofstream::app);
    ifstream full(("body."+sampath).c_str());
    ifstream field(("body_field."+sampath).c_str());

    char** buf = new char*[500];
    for(int i=0;i<500;++i){
        buf[i] = new char[500];
    }
    string vline[N];
    string vID[N];
    int vFLAG[N];
    int vpos[N];
    string vseq[N];
    int f=0;
    int l=0;
    getline(full,vline[l%N]);
    field>>vID[l%N]>>vFLAG[l%N]>>vpos[l%N]>>vseq[l%N];
    l=(l+1)%N;
    //int cnt=0;//DEBUG
    ofstream err;
    while(getline(full,vline[l%N])){
        err.open("err",ofstream::out|ofstream::app);//
        //err<<cnt++<<endl;//
        
        field>>vID[l%N]>>vFLAG[l%N]>>vpos[l%N]>>vseq[l%N];
        //err<<vID[l%N]<<"\t"<<vFLAG[l%N]<<"\t"<<vpos[l%N]<<"\t"<<vseq[l%N]<<endl;//
        //err.close();//
        l=(l+1)%N;
        if(vpos[(l-1+N)%N]==0) continue;
        if(vID[(l-1+N)%N]==vID[(l-2+N)%N]) continue;//当前读入的编号与上一个相同 
        if(((l-1)-f+N)%N==1){//只有一个则省略筛选步骤
            out<<vline[f]<<endl;
            f=(f+1)%N;
        }else{
            int max_index=-1;
            int max_LCS;
            int LCS;
            string s;
            for(int i=f;(i+1)%N!=l;i=(i+1)%N){
                if(vFLAG[i]&16){
                    s.resize(vseq[i].size());
                    for(int i=0;i<vseq[i].size();++i){
                        s[i] = tr(vseq[i][vseq[i].size()-1-i]);
                    }
                }else{
                    s=vseq[i];
                }//cerr<<"[[[["<<endl;;
                LCS=myMAX(LCS_TC(ref.substr(vpos[i],vseq[i].size()),s,buf),
                          LCS_AG(ref.substr(vpos[i],vseq[i].size()),s,buf));//cerr<<"]]]]"<<endl;
                if(LCS>max_LCS||max_index==-1){
                    max_index = i;
                    max_LCS = LCS;
                }
                
            }
            out<<vline[max_index]<<endl;
            f=(l-1+N)%N;
        }
       
    }
    out.close();
    full.close();
    field.close();
}

//main 函数参数：
//ref.fa，out.sam的路径
int main(int argc,char* argv[])
{
    if(argc!=3) {cout<<"usage:LCS <ref.fa> <out.sam> //the .sam file must be sortted."<<endl;return 1;}
    string ref;
    load_ref(ref,argv[1]);
    modify(ref,argv[2]);
    return 0;
}


