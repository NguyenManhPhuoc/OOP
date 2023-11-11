#include<bits/stdc++.h>
using namespace std;
class Hinhtron
{
	private:
		float x,y,r;
	public :
		void Nhap();
		void Xuat();
		float get_hdo();
		void set_hdo(float x);
		float get_tdo();
		void set_tdo(float y);
		float get_bkinh();
		void set_bkinh(float r);
		float get_dtich();
		float get_cvi();
};
void Hinhtron::Nhap(){
	cout<<"Nhap toa do tam va ban kinh: ";
	cin>>x>>y>>r;
}
float pi=3.14;
void Hinhtron::Xuat(){
	cout<<"Toa do tam: ("<<this->x<<","<<this->y<< ")"<<" ban kinh "<<r;
	cout<<x<<y<<r<<endl;
}
float Hinhtron::get_hdo(){
	return x;
}
void Hinhtron::set_hdo(float x){
	this->x=x;
}
float Hinhtron::get_tdo(){
	return y;
}
void Hinhtron::set_tdo(float y){
	this->y=y;
}
float Hinhtron::get_bkinh(){
	return r;
}
void Hinhtron::set_bkinh(float r){
	this->r=r;
}
float Hinhtron::get_dtich(){
	return pi*r*r;
}
float Hinhtron::get_cvi(){
	return pi*2*r;
}
int main()
{
	Hinhtron ob;
	ob.Nhap();
	ob.Xuat();
	cout<<"Hoanh do la: "<<ob.get_hdo()<<endl;
	cout<<"Tung do la: "<<ob.get_tdo()<<endl;
	cout<<"Dien tich la: "<<ob.get_dtich()<<endl;
	cout<<"Chu vi la: "<<ob.get_cvi();
return 0;
}
