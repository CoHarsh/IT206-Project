#include<bits/stdc++.h>

using namespace std;

    
    class list_for_characters;

    class node_1
    {
         private:
         char c;
         int no;
         node_1 * next;

         node_1(char ch){
             c=ch;
             no=0;
             next=NULL;
         }
         friend list_for_characters;
    };

    class list_for_characters
    {
        public:
        node_1 * head ;
        void crete();
        void dis();
         
    };
    
    void list_for_characters::crete()
    {
        head = new node_1('A');

        node_1 * B = new node_1('B');
        head->next=B;

    }

    void list_for_characters::dis(){
        node_1 * temp = head;
        while(temp!=NULL){
            cout<<temp->c<<endl;
            temp = temp->next;
        }
        head->no++;
        cout<<head->no;
        
    }
    

int main(){
            list_for_characters a;
            a.crete();
            a.dis();
    return 0;
}