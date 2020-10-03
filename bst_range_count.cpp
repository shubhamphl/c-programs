

#include "iostream"
#include "queue"
using namespace std;

class node{
public:
    int data;
    node *left;
    node *right;

    node(int d){
        data=d;
        left=NULL;
        right=NULL;


    }


};



struct node* add_node(node *head,int d){

    if(head==NULL){
        cout<<"node added successfully!"<<endl;
        return new node(d);


    }

    else if(d>=head->data){
        head->right=add_node(head->right,d);


    }

    else{

        head->left=add_node(head->left,d);
    }

    return head;


}

int find_range_nodes(node *head, int low, int high){

    int count=0;
    queue<node*> q;
    q.push(head);
    while(!q.empty()){

        node *p=q.front();
        q.pop();

        if(p->left){

            q.push(p->left);
        }

        if(p->right){

            q.push(p->right);
        }

        if(p->data>=low && p->data<=high){

            count++;

        }
        
    }

    return count;



}




void print_tree(node *head){

    if(!head){
        return;
    }

    print_tree(head->left);
    cout<<head->data<<endl;
    print_tree(head->right);


}




int main(){

    int choice=-1;
    cout<<"Binary Seach Tree count in a range:"<<endl;


    while(choice!=0){

        cout<<"Enter your choice case"<<endl;
        cout<<"1: Test case 1"<<endl;
        cout<<"2: Test case 2"<<endl;
        cout<<"3: Test case 3"<<endl;
        cout<<"4: Test case 4"<<endl;
        cout<<"5: Test case 5"<<endl;
        cout<<"0: To exit from the program"<<endl;

        cin>>choice;

        switch (choice) {

            case 1:{
                node *root = new node(2);
                root->left = new node(7);
                root->right = new node(5);
                root->left->right = new node(6);
                root->left->right->left = new node(1);
                root->left->right->right = new node(11);
                root->right->right = new node(9);
                root->right->right->left = new node(4);

                cout <<"nodes in the given range are: "<<find_range_nodes(root, 5,10)<<endl;

                break;

                //OUTPUT 4

            }

            case 2:{
                node *root = new node(2);
                root->left = new node(74);
                root->right = new node(52);
                root->left->right = new node(63);
                root->left->right->left = new node(15);
                root->left->right->right = new node(118);
                root->right->right = new node(91);


                cout <<"nodes in the given range are: "<<find_range_nodes(root, 51,80)<<endl;

                break;

                //OUTPUT 3


            }

            case 3:{
                node *root = new node(27);
                root->left = new node(17);
                root->right = new node(35);
                root->left->right = new node(66);
                root->left->right->left = new node(11);
                root->left->right->right = new node(131);


                cout <<"nodes in the given range are: "<<find_range_nodes(root, 20,50)<<endl;

                break;

                //OUTPUT 2


            }

            case 4:{
                node *root = new node(23);
                root->left = new node(17);
                root->right = new node(65);
                root->left->right = new node(6);


                cout <<"nodes in the given range are: "<<find_range_nodes(root, 100,110)<<endl;

                break;

                //OUTPUT 0


            }

            case 5:{

                node *root = new node(29);
                root->left = new node(76);
                root->right = new node(54);
                root->left->right = new node(61);
                root->left->right->left = new node(19);
                root->left->right->right = new node(141);
                root->right->right = new node(99);
                root->right->right->left = new node(4);

                cout <<"nodes in the given range are: "<<find_range_nodes(root, 25,100)<<endl;

                break;

                //OUTPUT 5
            }

            case 0:{

                exit(0);
            }

            default:{

                cout<<"Invalid choice! Please enter again:"<<endl;
                break;
            }


        }


    }


}

