#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
	if(n>0 and n<10 and n%2!=0){
        if(n==1){
            for(int i=1;i<=5;++i){
                cout<<"*"<<'\t';
            }cout<<endl;
        }
        else if(n==3){
            for(int i=1;i<=5;++i){
                cout<<"*"<<'\t';
            }cout<<endl;
            for(int i=1; i<=2; ++i){
                for(int j=1; j<=(3-i);++j){
                    cout<<"*"<<'\t';
                }
                for(int j=1;j<=(2*i-1);++j){
                    cout<<" "<<'\t';
                }
                for(int j=1;j<=(3-i);++j){
                    cout<<"*"<<'\t';
                }
                cout<<endl;
            }}
            else if(n==5){

               for(int i=1;i<=5;++i){
                   cout<<"*"<<'\t';
                 }cout<<endl;
               for(int i=1; i<=2; ++i){
                    for(int j=1; j<=(3-i);++j){
                       cout<<"*"<<'\t';
                 }
                    for(int j=1;j<=(2*i-1);++j){
                       cout<<" "<<'\t';
                     }
                     for(int j=1;j<=(3-i);++j){
                        cout<<"*"<<'\t';
                    }
                     cout<<endl;
                     }
               for(int i=4;i<=5;++i){
                   for(int j=1;j<=(i-2);++j){
                       cout<<"*"<<'\t';
                   }
                   for(int j=1; j<=(5-i);++j){
                       cout<<" "<<'\t';
                    }
                   for(int j=1; j<=2;++j){
                       cout<<"*"<<'\t';
                   }
                   cout<<endl;
                   }
            }
            else if(n==7){

               for(int i=1;i<=5;++i){
                   cout<<"*"<<'\t';
                 }cout<<endl;
               for(int i=1; i<=2; ++i){
                    for(int j=1; j<=(3-i);++j){
                       cout<<"*"<<'\t';
                 }
                    for(int j=1;j<=(2*i-1);++j){
                       cout<<" "<<'\t';
                     }
                     for(int j=1;j<=(3-i);++j){
                        cout<<"*"<<'\t';
                    }
                     cout<<endl;
                     }
               for(int i=4;i<=5;++i){
                   for(int j=1;j<=(i-2);++j){
                       cout<<"*"<<'\t';
                   }
                   for(int j=1; j<=(5-i);++j){
                       cout<<" "<<'\t';
                    }
                   for(int j=1; j<=2;++j){
                       cout<<"*"<<'\t';
                   }
                   cout<<endl;
                   }
               for(int i=1;i<=5;++i){
                   cout<<"*"<<'\t';
                 }cout<<endl;
               for(int i=1; i<=1; ++i){
                    for(int j=1; j<=(3-i);++j){
                       cout<<"*"<<'\t';
                    }
                    for(int j=1;j<=(2*i-1);++j){
                       cout<<" "<<'\t';
                     }
                     for(int j=1;j<=(3-i);++j){
                        cout<<"*"<<'\t';
                    }
                     cout<<endl;
                     }
                   

            }
            else if(n==9){

               for(int i=1;i<=5;++i){
                   cout<<"*"<<'\t';
                 }cout<<endl;
               for(int i=1; i<=2; ++i){
                    for(int j=1; j<=(3-i);++j){
                       cout<<"*"<<'\t';
                 }
                    for(int j=1;j<=(2*i-1);++j){
                       cout<<" "<<'\t';
                     }
                     for(int j=1;j<=(3-i);++j){
                        cout<<"*"<<'\t';
                    }
                     cout<<endl;
                     }
               for(int i=4;i<=5;++i){
                   for(int j=1;j<=(i-2);++j){
                       cout<<"*"<<'\t';
                   }
                   for(int j=1; j<=(5-i);++j){
                       cout<<" "<<'\t';
                    }
                   for(int j=1; j<=2;++j){
                       cout<<"*"<<'\t';
                   }
                   cout<<endl;
                   }
               for(int i=1;i<=5;++i){
                   cout<<"*"<<'\t';
                 }cout<<endl;
               for(int i=1; i<=2; ++i){
                    for(int j=1; j<=(3-i);++j){
                       cout<<"*"<<'\t';
                    }
                    for(int j=1;j<=(2*i-1);++j){
                       cout<<" "<<'\t';
                     }
                     for(int j=1;j<=(3-i);++j){
                        cout<<"*"<<'\t';
                    }
                     cout<<endl;
                    }
               for(int i=4;i<=4;++i){
                   for(int j=1;j<=(i-2);++j){
                       cout<<"*"<<'\t';
                   }
                   for(int j=1; j<=(5-i);++j){
                       cout<<" "<<'\t';
                    }
                   for(int j=1; j<=2;++j){
                       cout<<"*"<<'\t';
                   }
                   cout<<endl;
                   }    

                 



            }    
        
        
    }

	else{
		cout<<"wrong Input Entered";
	} 
    return 0;
}