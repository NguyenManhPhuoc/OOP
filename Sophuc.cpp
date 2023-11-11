#include<bits/stdc++.h>
using namespace std;
class SP{
	private:
		int thuc,ao;
	public:
		friend istream &operator>>(istream &in, SP &a);
		friend ostream &operator<<(ostream &out, SP a);
		SP operator+(SP a);
		SP operator-(SP a);
};
istream &operator>>(istream &in, SP &a){
	in>>a.thuc>>a.ao;
	return in;
}
ostream &operator<<(ostream &out, SP a){
	out<<a.thuc<<" "<<a.ao<<endl;
	return out;
}
SP SP::operator+(SP a){
	SP cong;
	cong.thuc = this->thuc + a.thuc;
	cong.ao = this->ao + a.ao;
	return cong;
}
SP SP::operator-(SP a){
	SP tru;
	tru.thuc = this->thuc - a.thuc;
	tru.ao = this->ao - a.ao;
	return tru;
}
int main(){
	SP a,b;
	cin>>a>>b;
	SP cong = a + b;
	SP tru = a - b;
	cout<<"Tong so phuc: "<<cong<<endl;
	cout<<"Hieu so phuc: "<<tru<<endl;
return 0;
}
