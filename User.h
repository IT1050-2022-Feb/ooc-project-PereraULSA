#include <iostream>
#include<string>
using namespace std;

class User{
	protected:
		string name;
		string address;
		int age;
		int ContactNo;
		string email;
		string school;
		
	public:
		User(){
			name="Null";
			address="Null";
			age=00;
			ContactNo=0000000000;
			email="Null";
			school="Null";
		};
		User(string Uname, string Uaddress, int Uage, int tel, string Uemail, string Uschool){
			name=Uname;
			address=Uaddress;
			age=Uage;
			ContactNo=tel;
			email=Uemail;
			school= Uschool;
		};
		void DisplayUserDetails(){
			cout<<"Name- "<<name<<endl;
			cout<<"Address- "<<address<<endl;
			cout<<"Age- "<<age<<endl
				<<"Contact Number- "<<ContactNo
				<<endl
				<<"Email- "<<email<<endl
				<<"School- "<<school<<endl;
		};
};
