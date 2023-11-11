#include<bits/stdc++.h>
#include<string>
using namespace std;
class mystring{
	private:
		char *str;
		int size;
	public:
		mystring();
		mystring(char *s);
		mystring(mystring &s);
		void operator=(mystring s);
		bool operator==(mystring s);
		char &operator [](int i);
		friend istream &operator>>(istream &in,mystring &s);
		friend ostream &operator<<(ostream &out,mystring s);
};
mystring::mystring(){
	this->str = NULL;
	this->size = 0;
}
//mystring::mystring(){
//	delete this->str;
//}
mystring::mystring(char *s){
	this->size = strlen(s) + 1;
	this->str = new char [this->size];
	for(int i=0;i<this->size;i++){
		if this->str[i] ==
			return true;
		else return false;
	}
}
mystring::mystring(&s){
	this->size = s.size + 1;
	this->str = new char[this->size];
	for(int i=0;i<this->size;i++)
		this->str[i] = s.str[i];
}
void mystring::operator=(mystring s){
	delete this;
	this->size = s.size + 1;
	this->str = new char[this->size];
	for(int i=0;i<this->size;i++)
		this->str[i] = s.str[i];
}
bool mystring::operator==(mystring s){
	this->size = s.size +1;
	this->str = new char[this->size];
	for(int i=0;i<this->size;i++)
		this->str[i] == s.str[i];
}
char &mystring::operator[](int i){
	return this->str[i];
}
istream &operator>>(istream &in,mystring &s){
	in>>s.size>>s.str;
}
ostream &operator<<(ostream &out,mystring s){
	for (int i=0; i<s.size;i++)
		cout<<s[i];
	return out;
}
int main(){
	char s[10];
	gets(s);
	mystring str(s); 
	mystring str2(str1); 
return 0;
}
