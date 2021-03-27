#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<set>
#include<string.h>
#include<set>

using namespace std;

char *source;
char *target;
string sou, tar;
vector<char *> tar_vector;
set<string> se;

/*int checkduplicate(vector<string> myvector){
    set<string> se;
    
    for(int i=0; i < myvector.size(); ++i){
        se.insert(myvector[i]);
    }
        
    for(int i=0; i < myvector.size(); ++i){
        if (se.find(myvector[i] != se.end()){
            cerr << "Check duplicate target file names" << endl;
        }
    }
}*/

//function to copy source file to target file
int CopyFile(char *SourceFile, char *TargetFile){
    ifstream in;
    ofstream out;
    
    //check is source file existed
    ifstream checks(SourceFile,ios::in|ios::binary);
    if(!checks){
        cerr << "The Source File is not existed." << endl;
        exit(-1);
        }
        
    //check is target file already existed
    ifstream checkt(TargetFile,ios::in|ios::binary);
    if(checkt){
        cerr << "The Target File is already existed." << endl;
        exit(-1);
        }
        
    //create target file
    out.open(TargetFile,ios::out|ios::binary);
    if(out.fail()){
        cerr<<"Error 1: Fail to create the target file."<<endl;
        out.close();
        in.close();
        exit(-1);
    }
      
    //open source file
    out.open(SourceFile,ios::in|ios::binary);    
    if(in.fail()){
        cerr << "Error 2: Fail to open the source file."<<endl;
        in.close();
    	out.close();
        exit(-1);
    }
    
    
    // copy file
    else{
	ifstream in (SourceFile, ios::binary);
	ofstream out (TargetFile, ios::binary);
	
	out<<in.rdbuf();
        out.close();
        in.close();
        return 1;
       
    }
}
    
int main(int argc, char* argv[]){
    
   // convert argv[] elements to string array and verify the option 	
   for (int i=1;i<argc;i+=2){
            	
        if (strcmp(argv[i], "-s") == 0)
            {source = argv[i+1];
            sou = source;
            }
        else if(strcmp(argv[i], "-t") == 0)
            {target = argv[i+1];
            tar = target;
            //tar_vector.push_back(tar);
            tar_vector.push_back(target);
            se.insert(tar); 
            }
        else
        {cerr << "Please verify your option or file name." << endl;
        exit(-1);
        }
   };
   
   // check if there are any duplicated target
   if (tar_vector.size() != se.size()){
       cerr << "There are duplicated target file names in your input."<< endl;
       exit(-1);
   }
            
   // copy the source file to target file
   for (int j = 0; j < tar_vector.size();++j){
      if (CopyFile(source, tar_vector[j])){
      cout << "The target file " << tar_vector[j] << " copied successfully. "<< endl;
      }
   
      else{
          cerr << "The file copy operation failed." << endl;
      }
          
   }
   
   
}
/*
 
   cout << sou << endl;
   cout << tar << endl;
   cout << se.size()  << endl;
   cout << tar_vector.size() << endl;
   
   
   for (auto it = se.begin();it != se.end();++it){
   cout << *it<<endl;
   }

*/


