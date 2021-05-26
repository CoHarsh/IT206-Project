#include<bits/stdc++.h>
#include"textalaize.h"
#include<string>
using namespace std;


int main(){
    string strbuffer;
    string strtemp;
    bool check = false;
    while(1)
    {
        
        
        cin>>strtemp;
        if(strtemp[0] == strtemp[1] && strtemp[0] == '*')
        {
            break;
            // strtemp = strtemp.substr(2,strtemp.length());
            // check = true;
        }
        strbuffer.append(" ");
        
        strbuffer.append(strtemp);
        // if(check)
        // {
        //     break;
        // }

    }
    // getline(cin,strbuffer);
    list_for_characters s1;
    s1.crete(strbuffer);
    s1.display();
    return 0;
}