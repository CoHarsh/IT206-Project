#include<bits/stdc++.h>
using namespace std;

    
class list_for_characters;

    class node_1
    {
         private:
         char c;
         int no = 0;
         node_1 * next;

//Constructor
        //  node_1(char ch){
        //      c=ch;
        //      no=0;
        //      next=NULL;
        //  }
         friend list_for_characters;
    };

    class list_for_characters
    {
        public:
        node_1 * head ;
        node_1 *travesal;
        int arr[200] = {0};
        int space = 0;
        void crete(string s);
        void display();
         
    };
    
    void list_for_characters::crete(string s)
    {
        int n = s.length();
        int i=0;
        while(n--)
        {
        // if(arr[(int)s[i] - 48] == 0)
        // {
            // arr[i] = 1;
            if(s[i] == ' ')
            {
                space++;
                i++;
                continue;
                
            }
            if(i==0)
            {
                node_1*temp = new node_1;
                temp->c = s[i];
                temp->no += 1;
                temp->next = NULL; 
                head = temp;
                travesal = temp;
                arr[(int)s[i] - 48] = 1;

            }
            else{
                if(arr[(int)s[i] - 48] == 0)
                {
                node_1*temp = new node_1;
                temp->c = s[i];
                temp->no += 1;
                temp->next = NULL; 
                travesal->next = temp;
                travesal = temp;
                arr[(int)s[i] - 48] = 1;
                }
                else
                {
                    node_1*temp = new node_1;
                    temp = head;
                    while(temp->c != s[i])
                    {
                        temp = temp->next;
                        
                    }
                    temp->no += 1;
                    // arr[(int)s[i] - 48] = 1;
                    

                }

            }
            i++;
            
        // } 

        }

    }

    void list_for_characters::display(){
        node_1 * temp = head;
        while(temp!=NULL){
            cout<<temp->c<<" = "<<temp->no<<endl;
            temp = temp->next;
        }
        // head->no++;
        // cout<<head->no;
        cout<<"the spaces are "<<space<<endl;
        
    }
    

int main(){
    string s;
    getline(cin,s);
    list_for_characters s1;
    s1.crete(s);
    s1.display();
    return 0;
}