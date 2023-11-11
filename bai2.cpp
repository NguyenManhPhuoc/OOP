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
		friend phanso cong(phanso a,phanso b);
		friend phanso tru(phanso a,phanso b);
		friend phanso nhan(phanso a,phanso b);
		friend phanso chia(phanso a,phanso b);
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
// Ham ban - FRIEND //
phanso cong(phanso a,phanso b){
	phanso tong;
	tong.tu = a.tu * b.mau + a.mau * b.tu;
	tong.mau = a.mau * b.mau;
	return tong;
}
phanso tru(phanso a,phanso b){
	phanso tru;
	tru.tu = a.tu * b.mau - a.mau * b.tu;
	tru.mau = a.mau * b.mau;
	return tru;
}
phanso nhan(phanso a,phanso b){
	phanso nhan;
	nhan.tu = a.tu * b.tu;
	nhan.mau = a.mau * b.mau;
	return nhan;
}
phanso chia(phanso a,phanso b){
	phanso chia;
	chia.tu = a.tu * b.mau;
	chia.mau = a.mau * b.tu;
	return chia;
}
int main(){
	phanso ps1(2,3);
	phanso ps2(5,3);
	phanso tong = cong(ps1,ps2);
	tong.hienthi();
	phanso hieu = tru(ps1,ps2);
	hieu.hienthi();
	phanso tich = nhan(ps1,ps2);
	tich.hienthi();
	phanso thuong = chia(ps1,ps2);
	thuong.hienthi();
return 0;
}
