/*
  *
 ***
*****
*****
 ***
  *

void nStarDiamond(int n) {
int i=1;
    while(i<=n){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<"*";
        }
        i++;
        cout<<endl;
    }
  for(int i=n;i>0;i--){
        for(int j=1;j<=(n-i);j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

*/
