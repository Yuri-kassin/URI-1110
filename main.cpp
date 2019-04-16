#include<iomanip>
#include<iostream>
#include<cstdlib>
#include <list>
#include <string.h>

using namespace std;

int main(){
	list<int>num;
	list<int>rem;
	list<int>::iterator it;
	int i,x;
	cin>>x;
	do{
		for(i=1;i<x+1;i++){
			num.push_back(i);
		}


	while(num.size()!=1){
			it=num.begin();
			rem.push_back(*it);
			num.pop_front();
			it=num.begin();
			num.push_back(*it);
			num.pop_front();
		}

	cout<<"Discarded cards: ";
	while(rem.size()!=0){
		if(rem.size()==1) cout<<rem.front()<<endl;
			else{
				cout<<rem.front()<<", ";
			
		}
		rem.pop_front();
	}
	cout<<"Remaining card: "<<num.front()<<endl;
	num.pop_front();
	cin>>x;
	}while(x!=0);
	
	system("pause");
	return 0;
}

