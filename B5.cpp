#include <iostream>
using namespace std;
struct node {

	char lable[30];
	int count;
	node *child[10];

}*root;
class Book{
	public:
		Book(){
			root = NULL;
		}
		void create(){

			int chapters,sections;
			root = new node;
			cout<<"Enter the name of Book: "<<endl;
			cin>>root->lable;
			cout<<"Enter the numbers of Chapters is the Book: "<<endl;
			cin>>chapters;
			root->count = chapters;
			for(int i=0;i<chapters;i++){

				root->child[i] = new node;
				cout<<"Enter the name of the Chapter: "<<endl;
				cin>>root->child[i]->lable;
				cout<<"Enter the number of sections in the Chapter: "<<root->child[i]->lable<<endl;
				cin>>sections;
				root->child[i]->count = sections;
				for (int j=0;j<root->child[i]->count;j++){

					root->child[i]->child[j] = new node;
					cout<<"Enter the name of Section: "<<endl;
					cin>>root->child[i]->child[j]->lable;

				}
			}
		}
		void display(node *t){

			if(t!=NULL){

				cout<<"Book Name : "<<root->lable<<endl;
				int cha = root->count;
				for (int i=0;i<cha;i++){

					cout<<"Chapter : "<<i+1<<endl;
					cout<<i+1<<") "<<root->child[i]->lable<<endl;
					cout<<"Sections : "<<endl;
					int sec = root->child[i]->count;
					for(int j=0;j<sec;j++){

						cout<<j+1<<") "<<root->child[i]->child[j]->lable<<endl;

					}

				}
			}
		}
};
int main(){

	Book k;
	int ch;
	do{

        cout<<"Book Tree Creation"<<endl;
        cout<<"1.Create"<<endl;
        cout<<"2.Display"<<endl;
        cout<<"3.Quit"<<endl;
        cout<<"Enter your choice : ";
        cin>>ch;
        switch(ch)
        {
        	case 1:
            	k.create();
              	break;
        	case 2:
              	k.display(root);
            	break;
    	}

	}while(ch!=3);

}
