#include<bits/stdc++.h>
using namespace std;
class phanso{
	private:
		int tu,mau;
	public:
		phanso();
		phanso(int t,int m);
		void nhap();
		void xuat();
		void set_tu(int t);
		int get_tu();
		void set_mau(int m);
		int get_mau();
		int ucln(int x,int y);
		phanso cong(phanso ps1);
		phanso tru(phanso ps1);
		phanso nhan(phanso ps1);
		phanso chia(phanso ps1);
		phanso rutgon(phanso ps1);	
};	
phanso::phanso(){
	this->tu=1;
	this->mau=1;
}
phanso::phanso(int t,int m){
	this->tu = t;
	this->mau= m;
}
void phanso::nhap(){
	cout<<"Nhap tu so: ";
	cin>>this->tu;
	cout<<"Nhap mau so: ";
	cin>>this->mau;
}
void phanso::xuat(){
	cout<<this->tu<<"/"<<this->mau;
}
void phanso::set_tu(int t){
	this->tu = t;
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
int phanso::ucln(int x,int y){
	while(x!=y){
		if (x>y){
			x-=y;
		}
		else{
			y-=x;
		}
	}
	return x;
}
phanso phanso::rutgon(phanso ps1){
	if (ps1.tu!=0){
		int uoc = ucln(ps1.tu,ps1.mau);
		ps1.tu /= uoc;
		ps1.mau /= uoc;
		}
	return ps1;
}
phanso phanso::cong(phanso ps1){
	phanso ps;
	ps.tu = this->tu * ps1.get_mau() + ps1.get_tu() *this->mau;
	ps.mau = this->mau * ps1.get_mau();
	rutgon(ps1);
	return ps;
}
phanso phanso::tru(phanso ps1){
	phanso ps;
	ps.tu = this->tu*ps1.get_mau() - ps1.get_tu()*this->mau;
	ps.mau= this->mau*ps1.get_mau();
	rutgon(ps1);
	rutgon(ps1);
	return ps;
}
phanso phanso::nhan(phanso ps1){
	phanso ps;
	ps.tu= this->tu * ps1.get_tu();
	ps.mau = this->mau * ps1.get_mau();
	rutgon(ps1);
	return ps;
}
phanso phanso::chia(phanso ps1){
	phanso ps;
	ps.tu = this->tu * ps1.get_mau();
	ps.mau = this->mau * ps1.get_tu();
	rutgon(ps1);
	return ps;
}
int main(){
	phanso ps1;
	ps1.nhap();
	ps1.xuat();
	cout<<endl;
	phanso ps2;
	ps2.nhap();
	ps2.xuat();
	cout<<endl;
	phanso c = ps1.cong(ps2);
	cout<<"Cong hai phan so: ";
	c.xuat(); cout<<endl;
	phanso t = ps1.tru(ps2);
	cout<<"Tru hai phan so: ";
	t.xuat(); cout<<endl;
	phanso n = ps1.nhan(ps2);
	cout<<"Nhan hai phan so: ";
	n.xuat(); cout<<endl;
	phanso ch = ps1.chia(ps2);
	cout<<"Chia hai phan so: ";
	ch.xuat();
return 0;
}
