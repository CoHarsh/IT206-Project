
#include <bits/stdc++.h>
#include <string>
using namespace std;

class list_for_characters;

class node_1
{
private:
    char c;
    int no = 0;
    node_1 *next;

    friend list_for_characters;
};

class list_for_characters
{
public:
    node_1 *head;
    node_1 *travesal;
    int total_diffrent_char = 0;
    int arr[200] = {0};
    int space = 0;
    void crete(string s);
    void display();
};

void list_for_characters::crete(string s)
{
    int n = s.length();
    int i = 0;
    while (n--)
    {

        if (i == 0)
        {
            node_1 *temp = new node_1;
            temp->c = s[i];
            temp->no += 1;
            temp->next = NULL;
            head = temp;
            travesal = temp;
            arr[(int)s[i]] = 1;
            total_diffrent_char += 1;
        }
        else
        {
            if (arr[(int)s[i]] == 0)
            {
                node_1 *temp = new node_1;
                temp->c = s[i];
                temp->no += 1;
                temp->next = NULL;
                travesal->next = temp;
                travesal = temp;
                arr[(int)s[i]] = 1;
                total_diffrent_char += 1;
            }
            else
            {
                node_1 *temp = new node_1;
                temp = head;
                while (temp->c != s[i])
                {
                    temp = temp->next;
                }
                temp->no += 1;
            }
        }
        i++;
    }
}

void list_for_characters::display()
{
    node_1 *temp = head;
    int space_count = 0;
    while (temp != NULL)
    {
        if(temp->c == ' ')
        {
            space_count = temp->no;
        }
        cout << "'"<<temp->c<<"' = " << temp->no << endl;
        temp = temp->next;
    }
    
    
    cout<<"In your Text the total diffrent charecters are :"<<total_diffrent_char<<endl;
    
    cout<<"In yout Text the total words are :"<<space_count<<endl;
}
