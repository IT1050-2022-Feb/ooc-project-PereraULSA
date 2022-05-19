#include<iostream>
#include<string>
#include<cstring>
#include "Credentials.h"
using namespace std;

class Student: public Credentials{
    private:
          char SID[7];

    public:
          Student(){
            strcpy(SID,"Crs0000");
          }

          void setSID(char id[7]){
            strcpy(SID,id);
          }

          void DisplayDetails(){
            cout<<"This is student class"<<endl;
          }
};