#include<bits/stdc++.h>
using namespace std;
class Vehicle{
	private:
		string mpt,tenpt;
		int namsx,giaban,nambatdausd;
	public:
		Vehicle(){
			mpt=tenpt="";
			namsx,giaban,nambatdausd=0;
		}
		Vehicle(string mpt,string tenpt,int namsx,int giaban,int nambatdausd){
			this->mpt=mpt;
			this->tenpt=tenpt;
			this->namsx=namsx;
			this->giaban;
			this->nambatdausd;
		}
		virtual void nhap(){
			cout<<"Nhap ma phuong tien: "; cin>>this->mpt;
			cin.ignore();
			cout<<"Nhap ten phuong tien: "; getline(cin,this->tenpt);
			cout<<"Nhap nam san xuat: "; cin>>this->namsx;
			cout<<"Nhap gia ban: "; cin>>this->giaban;
			cout<<"Nhap nam bat dau su dung: "; cin>>this->nambatdausd;
		}
		virtual void hienthi(){
			cout<<"Ma phuong tien: "; cout<<this->mpt<<endl;
			cout<<"Ten phuong tien: "; cout<<this->tenpt<<endl;
			cout<<"Nam san xuat: "; cout<<this->namsx<<endl;
			cout<<"Gia ban: "; cout<<this->giaban<<endl;
			cout<<"Nam bat dau su dung: "<<this->nambatdausd<<endl;
		}
		string get_mpt(){
			return this->mpt;
		}
		string get_tenpt(){
			return this->tenpt;
		}
		int get_giaban(){
			return this->giaban;
		}
		int get_namsx(){
			return this->namsx;
		}
		int get_nambatdausd(){
			return this->nambatdausd;
		}
		bool operator > (Vehicle a){
			return this->giaban > a.giaban;
		}		
		double giatriconlai(){
			return 0;
		}
};
class Car:public Vehicle{
	private:
		int sochongoi;
		float dungtich;
		string loainhienlieu;
	public:
		Car(){
			sochongoi=0;
			dungtich=0.0;
			loainhienlieu="";
		}
		Car(int sochongoi,float dungtich,string loainhienlieu){
			this->sochongoi=sochongoi;
			this->dungtich=dungtich;
			this->loainhienlieu=loainhienlieu;
		}
		int get_sochongoi(){
			return this->sochongoi;
		}
		float get_dungtich(){
			return this->dungtich;
		}
		string get_nhienlieu(){
			return this->loainhienlieu;
		}
		void nhap(){
			Vehicle::nhap();
				cout<<"Nhap so cho ngoi: "; cin>>this->sochongoi;
				cout<<"Nhap dung tich: "; cin>>this->dungtich;
				cin.ignore();
				cout<<"Nhap loai nhien lieu: "; getline(cin,this->loainhienlieu);
		}
		double phantramgiatrisudung(){
			int nam = 2023 - this->get_nambatdausd();
			if(nam<5) return this->get_giaban()*1.0*80/100;
			else if (5<=nam<=10) return this->get_giaban()*1.0*50/100;
			else return this->get_giaban()*1.0*30/100;
		}
		double giatriconlai(){
			int nam=2023 - this->get_nambatdausd();
			if(nam<5) return this->get_giaban() - this->get_giaban()*1.0*80/100;
			else if(5<=nam<=10) return this->get_giaban() - this->get_giaban()*1.0*50/100;
			else return this->get_giaban() - this->get_giaban()*1.0*30/100;
		}
		void hienthi(){
			Vehicle::hienthi();
				cout<<"So cho ngoi: "; cout<<this->sochongoi;
				cout<<"Dung tich: "; cout<<this->dungtich;
				cout<<"Nhien lieu: "; cout<<this->loainhienlieu;
		}
};
class Motobike:public Vehicle{
	private:
		float phankhoi;
	public:
		Motobike(){
			phankhoi=0.0;
		}
		Motobike(float phankhoi){
			this->phankhoi=phankhoi;
		}
		void nhap(){
			Vehicle::nhap();
				cout<<"Nhap phan khoi: "; cin>>this->phankhoi;
		}
		void hienthi(){
			Vehicle::hienthi();
			cout<<"Phan khoi: ";
			cout<<this->phankhoi;	
		}
		float get_phankhoi(){
			return this->phankhoi;
		}
		double phantramgiatrisudung(){
			int nam=2023 - this->get_nambatdausd();
			if(nam<3) return this->get_giaban()*1.0*80/100;
			else if(3<=nam<=6) return this->get_giaban()*1.0*75/100;
			else if(6<=nam<=10) return this->get_giaban()*1.0*60/100;
			else return this->get_giaban()*1.0*40/100;
		}
		double giatriconlai(){
			int nam=2023 - this->get_nambatdausd();
			if(nam<3) return this->get_giaban() - this->get_giaban()*1.0*80/100;
			else if(3<=nam<=6) return this->get_giaban() - this->get_giaban()*1.0*75/100;
			else if(6<=nam<=10) return this->get_giaban() - this->get_giaban()*1.0*60/100;
			else return this->get_giaban() - this->get_giaban()*1.0*40/100;	
		}	
};

struct Phuongtien{
	string loaixe;
	Vehicle* xe;
};
int main(){
//Cau 1
//	Vehicle p;
//	p.nhap();
//	p.hienthi();
//	Vehicle m,n;
//	m.nhap();
//	n.nhap();
//	if(m>n){
//		cout<<m.get_tenpt()<<" co gia lon hon "<<n.get_tenpt();
//	}
//	else{
//		cout<<n.get_tenpt()<<" co gia lon hon "<<m.get_tenpt();
//	}
//cau 2
	Motobike M;
	Car S;
	cout<<"Nhap xe may: "<<endl;
	M.nhap();
	cout<<"Nhap oto: "<<endl;
	S.nhap();
	cout<<"Phan tram gia tri su dung cua xe may "<<M.get_tenpt()<<" la: "<<M.phantramgiatrisudung()<<endl;
	cout<<"Phan tram gia tri su dung cua oto "<<S.get_tenpt()<<" la: "<<S.phantramgiatrisudung()<<endl;	
//cau 3
//	int k; cin>>k;
//	Phuongtien ds[k];
//	double min_gt=0.0;
//	string s;
//	for(int i=0;i<k;i++){
//		cout<<"Nhap cac loai phuong tien: "<<endl;
//		cin>>s;
//		min_gt= min(min_gt,ds[i].xe->giatriconlai());
//		if(s=="Motobike"){
//			ds[i].loaixe=s;
//			ds[i].xe = new Motobike();
//			ds[i].xe->nhap();
//		}
//		else{
//			ds[i].loaixe = s;
//			ds[i].xe = new Car();
//			ds[i].xe->nhap();
//		}
//	}
//	cout<<"Nhung xe may co gia tri con lai thap nhat la: "<<endl;
//	for(int i=0;i<k;i++){
//		if(ds[i].xe->giatriconlai() <= min_gt){
//			min_gt=ds[i].xe->giatriconlai();
//			ds[i].xe->hienthi();
//			cout<<endl;
//		}
//	}
return 0;
}
