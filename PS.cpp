#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
using namespace std;
class PS{
	private:
		int tu,mau;
	public:
		void hienthi();
		int ucln(int x,int y);
		void rutgon(PS p);
		PS operator+ (PS p1,PS p2);
		PS operator- (PS p1,PS p2);
		PS operator* (PS p1,PS p2);
		PS operator/ (PS p1,PS p2);
};
//ostream& operator<< (ostream &os, PS p){
//	os<<p.tu<<"/"<<p.mau;
//	return os;
//}
//istream& operator>> (istream &is,PS p){
//	cout<<"Nhap tu va mau: ";
//	is>>p.tu>>p.mau;
//	return is;
//}
void PS::hienthi(){
	cout<<this->tu<<"/"<<this->mau;
}
PS operator+ (PS p1,PS p2){
	PS cong;
	cong.tu = p1.tu*p2.mau + p1.mau* p2.tu;
	cong.mau = p1.mau * p2.mau;
	return rutgon(cong);
}
PS operator- (PS p1,PS p2){
	PS tru;
	tru.tu = p1.tu*p2.mau - p1.mau*p2.tu;
	tru.mau = p1.mau * p2.mau;
	return rutgon(tru);
}
PS operator* (PS p1, PS p2){
	PS nhan;
	nhan.tu = p1.tu * p2.tu;
	nha.mau = p1.mau * p2.mau;
	return rutgon(nhan);
}
PS operator/ (PS p1, PS p2){
	PS chia;
	chia.tu = p1.tu * p2.mau;
	chia.mau = p1.mau * p2.tu;
	return rutgon(chia);
}
int ucln(int x,int y){
	x = abs(x); 
	y = abs(y);
	if (x*y==0){
		return 1;
		while(x!=y){
			if (x>y)
				x-=y;
			else
				y-=x;	
			}
		}
	return x;
}
PS rutgon(PS p){
	PS q;
	int uoc = ucln(p.tu,p.mau);
	q.tu = p.tu / uoc;
	q.mau = p.mau / uoc;
	return q;
}	
int main(){
	PS ps1(2,3);
	PS ps2(5,3);
	PS ps3 = ps1.operator+(ps2);
	ps3.hienthi();
	PS ps3 = ps1.operator-(ps2);
	ps3.hienthi();
	PS ps3 = ps1.operator*(ps2);
	ps3.hienthi();
	PS ps3 = ps1.operator/(ps2);
	ps3.hienthi();
return 0;
}
