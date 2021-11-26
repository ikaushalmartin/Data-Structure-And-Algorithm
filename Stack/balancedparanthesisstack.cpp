#include<iostream>
#include<stack>
using namespace std;

void balancedparanthesis(string s){
stack<char> st;
for(int i=0; i<s.length();i++){
    if(i<s.length()/2){
        st.push(s[i]);
    }

    else if(!st.empty() && st.top()=='('){
      if(s[i]==')'){
          st.pop();
      }
      else{
          cout<<"invalid"<<endl;
      }    
    }
    else if(!st.empty() && st.top()=='['){
      if(s[i]==']'){
          st.pop();
      }
      else{
          cout<<"invalid"<<endl;
      }    
    }
    else if(!st.empty() && st.top()=='{'){
      if(s[i]=='}'){
          st.pop();
      }
      else{
          cout<<"invalid"<<endl;
      }
         
    }
}

if(st.empty()){
    cout<<"Valid"<<endl;
}
}

int main()
{
    balancedparanthesis("{]");
}