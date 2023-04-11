#include <bits/stdc++.h>
using namespace std;

class hashing{
	struct hash{
	long long int key;
	char name[10];
	};
	public:
		hash ht[10];
		hashing(){
			for(int i=0;i<10;i++){
				ht[i].key=-1;
				strcpy(ht[i].name,"NULL");
			}
		}
		void insert(long long int k,char a[10]){
			int loc=k%10;
			for(int i=0;i<10;i++){
			
				if(ht[loc].key==-1){
					ht[loc].key=k;
					strcpy(ht[loc].name,a);
					break;
				}
				else{
					loc=(loc+1)%10;
			}
				}
		}
		
		void Delete(long long int k){
			int idx=find(k);
			if(idx==-1){
				cout<<"key not found";
			}
			else{
				ht[idx].key=-1;
				strcpy(ht[idx].name,"NULL");
				cout<<"deleted successfully";
			}
		}
		
		int find(long long int k){
			for(int i=0;i<10;i++){
				if(ht[i].key==k){
					cout<<"key found at "<<i<<" index with name-: "<<ht[i].name;
					return i;
				}
			}
			cout<<"key not found";
			return -1;
		}
		
		void display(){
			cout<<"\n\t\tkey\t\tname";
			for(int i=0;i<10;i++){
				cout<<"\n"<<i<<"\t\t"<<ht[i].key<<"\t\t"<<ht[i].name;
			}
		}
		
		
};

int main(){
	hashing h;
	int choice;
	long long int tele;
	char nam[10];
	while(choice!=5){
		cout<<"\n1.insert\n2.display\n3.find\n4.delete\n5.exit\n";
		cout<<"ENTER YOUR CHOICE-: ";
		cin>>choice;
		switch(choice){
			case 1:
				cout<<"\nEnter telephone number-: ";
				cin>>tele;
				cout<<"\nEnter name-: ";
				cin>>nam;
				h.insert(tele,nam);
				break;
			
			case 2:
				h.display();
				break;
			
			case 3:
				cout<<"Enter number to find-: ";
				cin>>tele;
				h.find(tele);
				break;
				
			case 4:
				cout<<"ENTER NUMBER TO DELETE-: ";
				cin>>tele;
				h.Delete(tele);
				break;
			case 5:
				break;
				
		}
		
	}
}