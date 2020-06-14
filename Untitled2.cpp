#include <iostream>
using namespace std;
int main(){
    int y;
    int ws;
    cout<<"Enter Year:"<<endl;
    cin>>y;
    int ys = y-1900;
    int yr = ys%4;
    int lys = ys-yr;
    int lds = lys/4;
    int tds = ys+lds;
    cout<<ys<<endl;
    cout<<yr<<endl;
    cout<<lys<<endl;
    cout<<tds<<endl;
    if(y%4==0){
        ws = tds%7;
    }
    else{
        ws = tds%7;
    }
    cout<<ws<<endl;
    
    int spn = 31+ws;
	cout<<"------JANUARY------"<<endl;
	cout<<"Mo Tu We Th Fr Sa Su"<<endl;
	for(int i=1;i<=spn;i++)
	{   
	    
	    
	    if(i<=ws-1){
	        cout<<"   ";
	    }
	    else{
	        if(i>9+ws){
	            cout<<i-ws<<" ";
	        }
	        else{
	            cout<<i-ws<<"  ";
	        }
	    }
		if(i%7==0){
			cout<<""<<endl;
		}
		
		
	}
}
