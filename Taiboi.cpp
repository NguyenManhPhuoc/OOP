/* HAM BAN */
#include<bits/stdc++.h>
#include<iostream>
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
		void rutgon();
		void ucln(int a,int b);
		phanso operator+(phanso b);
		phanso operator-(phanso b);
		phanso operator*(phanso b);
		phanso operator/(phanso b);
		friend phanso operator+(phanso a, phanso b);
		friend phanso operator-(phanso a, phanso b);
		friend phanso operator*(phanso a, phanso b);
		friend phanso operator/(phanso a, phanso b);
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
// Ham tai boi chua 1 tham so //
phanso phanso::operator+(phanso b){
	phanso tong;
	tong.tu = this->tu * b.tu + b.mau * this->mau;
	tong.mau = this->mau * b.mau;
	return tong;
}
phanso phanso::operator-(phanso b){
	phanso tru;
	tru.tu = this->tu * b.tu - b.mau * this->mau;
	tru.mau = this->mau * b.mau;
	return tru;
}
phanso phanso::operator*(phanso b){
	phanso nhan;
 	nhan.tu = this->tu * b.tu;
	nhan.mau = this->mau * b.mau;
	return nhan;
}
phanso phanso::operator/(phanso b){
	phanso chia;
	chia.tu = this->tu * b.mau;
	chia.mau = this->mau * b.mau;
	return chia;
}
// Ham tai boi chua 2 tham so, dung ham friend//
phanso operator+(phanso a,phanso b){
	phanso tong;
	tong.tu = a.tu * b.mau + a.mau * b.tu;
	tong.mau = a.mau * b.mau;
	return tong;	
}
phanso operator-(phanso a,phanso b){
	phanso tru;
	tru.tu = a.tu * b.mau - a.mau * b.tu;
	tru.mau = a.mau * b.mau;
	return tru;
}
phanso operator*(phanso a,phanso b){
	phanso nhan;
	nhan.tu = a.tu * b.tu;
	nhan.mau = a.mau * b.mau;
	return nhan;
}
phanso operator/(phanso a,phanso b){
	phanso chia;
	chia.tu = a.tu * b.mau;
	chia.mau = a.mau * b.tu;
	return chia;
}
int main(){
	phanso ps1(2,3);
	phanso ps2(5,3);
	phanso ps3 = ps1.tong(ps2);
	ps3.hienthi();
return 0;
}

