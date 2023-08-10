#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
	if(n<=20){
        for(int i=1;i<=n;++i){
            if(i==1){
                for(int j=1;j<=n-1;++j){
                    cout<<" ";
                }
                for(int j=1;j<=n;++j){
                    cout<<"*";
                }cout<<endl;
            }
            if(i!=n and i!=1){
                for(int j=1;j<=(n-i);++j){
                   cout<<" ";
                }                
               for(int j=1; j<=1; ++j){
                   cout<<"*";
               }for(int j=1; j<=n-2; ++j){
                   cout<<" ";
               }for(int j=1;j<=1;++j){
                   cout<<"*";
               } 
               cout<<endl;
            }
            if(i==n){
                for(int j=1;j<=n;++j){
                    cout<<"*";
                }

            }
        }


        }

	else{
		cout<<"wrong Input Entered";
	} 
    return 0;
}