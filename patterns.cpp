#include <bits/stdc++.h>
using namespace std;

void pattern1(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern2(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern3(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void pattern4(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}

void pattern5(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern6(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void pattern7(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<2*i+1;j++){
            cout<<"$";
        }
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }

        cout<<endl;
    }
}

void pattern8(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"$";
        }
        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }


        cout<<endl;
    }
}

void pattern9(){
    pattern7();
    pattern8();
}

void pattern10(){
    int n;
    cin>>n;
    for(int i=1;i<=2*n-1;i++){
        int stars=i;
        if(i>=n) stars=2*n-i;
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}



int main() {
    pattern10();
    return 0;
}
