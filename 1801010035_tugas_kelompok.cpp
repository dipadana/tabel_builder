/* dipadanaPutu | prodiSI2018 | Kamis18April2019 */
/* program pembuatan tabel sederhana dengan pemanfaatan array 2 dimensi*/
#include <iostream>
using namespace std;

int main(){

	int kolom, baris, i, j, k, l, m;\
	cout<<endl;
	
	cout<<"masukkan jumlah kolom = ";
	cin>>kolom;
	cout<<"masukkan jumlah baris = ";
	cin>>baris;
	
	int kumpulan[kolom][baris];
	
	cout<<endl;
	for(m=0;m<kolom;m++){
		cout<<"kolom"<<m+1<<"  ";
	}cout<<endl;
	
	cout<<endl;
	for(k=0;k<kolom;k++){
		for(l=0;l<baris;l++){
			cout<<"masukkan angka untuk baris "<<l+1<<" kolom "<<k+1<<endl;
			cin>>kumpulan[k][l];
		}
	}
	
	for(i=0;i<baris;i++){
		for(j=0;j<kolom;j++){
			cout<<"  "<<kumpulan[j][i]<<"     ";
		}cout<<endl;
	}
}
