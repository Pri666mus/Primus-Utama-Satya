#include <iostream>
using namespace std;
int main(){
	 
	int a,b;
	cout << "Masukkan Kolom : ";
	cin >> a;
	cout <<"Masukkan baris : ";
	cin >> b;
	system("CLS");
	cout << " _  _  _\n";
	for(int d = 1; d <= a; d++){
	  for(int a = 1; a<=b; a++){	
	  cout << "|_|";
   }   
	cout <<""<< endl;

   }
} 
