#include<bits/stdc++.h>
#include<string>
using namespace std;
class Canbo{
	private:
		string mcb,ht;
		bool gt;
	public:
		Canbo(){
			mcb=ht="";
			gt=0;
		}
		Canbo(string mcb,string ht,bool gt){
			this->mcb=mcb;
			this->ht=ht;
			this->gt=gt;
		}
		void nhap(){
			cout<<"Nhap ma can bo: "; cin>>this->mcb;
			cin.ignore();
			cout<<"Nhap ho ten: "; getline(cin,this->ht);
			cout<<"Gioi tinh: "; cin>>this->gt;
		}
		void hienthi(){
			cout<<"Ma can bo: "<<this->mcb<<endl;
			cout<<"Ho ten: "<<this->ht<<endl;
			cout<<"Gioi tinh: "<<this->gt<<endl;
		}
		string get_mcb(){
			return this->mcb;
		}
		string get_ht(){
			return this->ht;	
		}
		bool get_gt(){
			return this->gt;
		}
};
class Congnhan:public Canbo{
	private:
		int bac,snlv;
		string ngaykihd;
	public:
		Congnhan(){
			bac=snlv=0;
			ngaykihd="";
		}
		Congnhan(int bac,int snlv,string ngaykihd){
			this->bac=bac;
			this->snlv=snlv;
			this->ngaykihd=ngaykihd;
		}
		void nhap(){
			Canbo::nhap();
			cout<<"Nhap bac: "; cin>>this->bac;
			cout<<"Nhap snlv: "; cin>>this->snlv;
			cout<<"Nhap ngay ki hop dong: "; cin>>this->ngaykihd;
			cout<<endl;
		}
		void hienthi(){
				Canbo::hienthi();
				cout<<"Bac: "<<this->bac<<endl;
				cout<<"So ngay lam viec: "<<this->snlv<<endl;
				cout<<"Ngay ki hop dong: "<<this->ngaykihd<<endl;
				cout<<"Tien luong: "<<tienluong()<<endl;
				cout<<endl;
			}
		int tienluong(){
			int congnhat,tienluong = 0;
			if (bac==1){
				return this->snlv*300000;
				}
			if (bac==2){
				return this->snlv*350000;
				}
			if (bac==3){
				return this->snlv*400000;
				}
			return tienluong;
			}	
		int get_bac(){
			return this->bac;
		}	
		int get_snlv(){
			return this->snlv;
		}
		string get_ngaykihd(){
			return this->ngaykihd;
		}
		friend bool operator > (Congnhan a,Congnhan b){
			// 29/06/2004
			// 9/6/2004
			// 09/6/2004
		string s1 = a.get_ngaykihd();
		string s2 = b.get_ngaykihd();
		int ngay1,thang1,nam1,ngay2,thang2,nam2;
		if (s1[2] != '/') s1 = '0' + s1;
		if (s1[5] != '/') s1.insert(3,"0");
		ngay1 = (s1[0]-'0')*10 + s1[1]-'0';
		thang1 = (s1[3]-'0')*10 + s1[4]-'0';
		nam1 = (s1[6]-'0')*1000 + (s1[7]-'0')*100 + (s1[8]-'0')*10 +s1[9]-'0';
			
		if (s2[2] != '/') s2 = '0' + s2;
		if (s2[5] != '/') s2.insert(3,"0");
		ngay2 = (s2[0]-'0')*10 + s2[1]-'0';
		thang2 = (s2[3]-'0')*10 + s2[4]-'0';
		nam2 = (s2[6]-'0')*1000 + (s2[7]-'0')*100 + (s2[8]-'0')*10 +s2[9]-'0';
		
		if (thang1 != thang2) return thang1 < thang2;
		else if (nam1 != nam2) return nam1 < nam2;
		return ngay1 < ngay2;
		}
};
bool cmp(Congnhan a,Congnhan b){
		string s1 = a.get_ngaykihd();
		string s2 = b.get_ngaykihd();
		int ngay1,thang1,nam1,ngay2,thang2,nam2;
		if (s1[2] != '/') s1 = '0' + s1;
		if (s1[5] != '/') s1.insert(3,"0");
		ngay1 = (s1[0]-'0')*10 + s1[1]-'0';
		thang1 = (s1[3]-'0')*10 + s1[4]-'0';
		nam1 = (s1[6]-'0')*1000 + (s1[7]-'0')*100 + (s1[8]-'0')*10 +s1[9]-'0';
			
		if (s2[2] != '/') s2 = '0' + s2;
		if (s2[5] != '/') s2.insert(3,"0");
		ngay2 = (s2[0]-'0')*10 + s2[1]-'0';
		thang2 = (s2[3]-'0')*10 + s2[4]-'0';
		nam2 = (s2[6]-'0')*1000 + (s2[7]-'0')*100 + (s2[8]-'0')*10 +s2[9]-'0';
		
		if (thang1 != thang2) return thang1 < thang2;
		else if (nam1 != nam2) return nam1 < nam2;
		return ngay1 < ngay2;
}
int main()
{
//cau1
//	Congnhan p;
//	p.nhap();
//	p.hienthi();
//cau2
//	Congnhan m,n;
//	m.nhap();
//	n.nhap();
//	if (m>n){
//		cout<< n.get_ht()<<" ki hop dong som hon "<<m.get_ht();
//	}
//	else{
//		cout<<m.get_ht()<<" ki hop dong som hon "<<n.get_ht();
//	}
//cau3
	int s; cin>>s;
	int maxluong = 0;
	Congnhan ds[s];
	for(int i=0;i<s;i++){
		ds[i].nhap();
	}
	cout<<"Danh sach can bo sau khi sap xep: "<<endl;
	sort(ds,ds+s,cmp);
	for(int i=0;i<s;i++){
		ds[i].hienthi();
	}
	for(int i=0;i<s;i++){
		if(ds[i].get_gt()==0){
		maxluong = max(maxluong,ds[i].tienluong());
		}
	}
	cout<<"Danh sach can bo nam co tien luong cao nhat: "<<endl;
	for(int i=0;i<s;i++){
		if(ds[i].get_gt()==0 && ds[i].tienluong()== maxluong){
		ds[i].hienthi();
		}
	}
return 0;
}
