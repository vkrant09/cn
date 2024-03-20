#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;cin>>t;
    vector<int> ans;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        
        if((b+c)>=3||(b+c)==0){
            if (b>3&&((b-3)+c)<3){
           ans.push_back(-1); 

            }
            else if((b+c)%3==0){
            int odd= (b+c)/3;

           int  count=a+odd;
            ans.push_back(count);
            }
            else {
            int odd = ((b+c)/3)+1;
           
           int count=a+odd;
           ans.push_back(count);
           }
        }
        else{
           ans.push_back(-1); 
           
        }

   
        
    }
    for(int i = 0 ; i<ans.size() ; i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}