#include<iostream>
#include<fstream>
#include<string>


using namespace std;

void append(int** tab, int n, int m, char* value);
int main(int argc, char* argv[]){
    ifstream file;
    string path(argv[1]);
    file.open(path,ios::binary| ios::in | ios::ate);

    if(!file.is_open()){
        cout<<"unable to open file\n";
        return -1;
    }

    streampos size;
    char* memblock;
    int n,m;
    n = 1;
    m = 1;
    int** dictionary = new int*[n];
    dictionary[0] = new int[m];

    size = file.tellg();
    memblock = new char[size];
    file.seekg(0,ios::beg);
    file.read(memblock, size);
    file.close();

    for(int i=0;i<size;i++){
        cout<< memblock[i] << endl;
    }
    cout<<"koniec";

    
    return 0;
}

void append(int** tab, int n, int m, char* value){
    n++;
    m++;
    int tab
}