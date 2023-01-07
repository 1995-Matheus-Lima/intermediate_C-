#include <iostream>

using namespace std;

int myLen(char* name){
    int tam = 0;
    do{
        tam++;
    }while(name[tam] !='\0');

    return tam;
}

char* myConcat(char* pFname,char* pSname){
    char* result = new char[myLen(pFname)+ myLen(pSname)];
    int position = 0,f =0 ,s=0;
    while(pFname[f] != '\0'){
        result[position] = pFname[f];
        f++;
        position++;
    }  
    while(pSname[s] != '\0'){
        result[position] = pSname[s];
        s++;
        position++;
    }  
    return result;
};

int main(){
    char* pFname = new char[15];
    char*  pSname = new char[15];
    char* result;
    cout << "What is your first name: ";
    cin >> pFname;
    cout << "What is your second name: ";
    cin >> pSname;
    result = myConcat(pFname, pSname);
    cout << result << endl;
    delete pFname;
    delete pSname;
    delete result;

    return 0;
}