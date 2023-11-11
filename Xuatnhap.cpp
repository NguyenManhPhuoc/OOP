/* HAM BAN */
#include<bits/stdc++.h>
using namespace std;
class phanso{
	private:
		int tu,mau;
	public:
		phanso();
		phanso(int t,int m);
		void hienthi();
		void set_tu(int t);
		int get_tu();
		void set_mau(int m);
		int get_mau();
//		int ucln(int x,int y);
		phanso rutgon(phanso ob);
		friend ostream &operator<<(ostream &xuat, phanso ob);
		friend istream &operator>>(istream &nhap, phanso &ob);
		phanso operator+(phanso b);
		phanso operator++();
		phanso operator++(int);
};
phanso::phanso(){
	this->tu = 1;
	this->mau = 1;
}
phanso::phanso(int t,int m){
	this->tu = t;
	this->mau = m;
}
void phanso::hienthi(){
	cout<<this->tu<<"/"<<this->mau<<endl;
}
void phanso::set_tu(int t){
	this->tu = tu;
}
int phanso::get_tu(){
	return tu;
}
void phanso::set_mau(int m){
	this->mau = m;
}
int phanso::get_mau(){
	return mau;
}
ostream &operator<<(ostream &xuat, phanso ob){
	xuat<<ob.tu<<"/"<<ob.mau<<endl;
	return xuat;
}
istream &operator>>(istream &nhap, phanso &ob){
	cout<<"Nhap tu va mau: ";
	nhap>>ob.tu>>ob.mau;
	return nhap;
}
int ucln(int x,int y){
	if (x==y) return x;
	else if (x>y) x-=y;
	else y-=x;
	ucln(x,y);
}
phanso phanso::rutgon(phanso b){
	phanso ob;
	int uoc = ucln(ob.tu,ob.mau);
	ob.tu = ob.tu / uoc;
	ob.mau = ob.mau / uoc;
	return ob;
}
phanso phanso::operator+(phanso b){
	phanso tong;
	tong.tu = this->tu *b.mau + b.tu* this->mau;
	tong.mau = this->mau * b.mau;
	int uoc = ucln(tong.tu,tong.mau);
	tong.tu /= uoc;
	tong.mau /= uoc;
	return tong;
} 
phanso phanso::operator++(){
	this->tu += this->mau;
	this->mau = this->mau;
	return *this;
}
phanso phanso::operator++(int){
	phanso tmp = *this;
	this->tu += this->mau;
	this->mau = this->mau;
	return tmp;
}
int main(){
	phanso ps1,ps2,ps3,ps4;
	cin>>ps1>>ps2;
	ps3 = ps1 + (++ps2);
	cout<<"Tien to: "<<ps3;
	ps4 = ps1 + (ps2++);
	cout<<"Hau to: "<<ps4;
return 0;
}
