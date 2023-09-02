#include <iostream>
using namespace std;
int main ()

{
    // for(int i=0;i<=5;i=i+1)
    // {
    //     cout<<"sahil"<<endl;

    // }

    // for(int i=2;i<=5;i=i+2)
    // {
    //     cout<<i<<endl;
    // }
    // return 0;

    // for(int i=1;i<=10;i=i+1)
    // {
    //     cout<<"19 X "<<i<<" = "<<19*i<<endl;
    // }

    // 1 to 100 even number

    // for(int i=1;i<=100;i=i+1)
    // {
    //     if(i%2==0){
    //         cout<<i<<endl;
    //     }
    // }

    // for(int i=0;i<5;i=i+1){
    //     for(int j=0;j<5;j=j+1)
    //     {
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // }


    // for(int i=0;i<3;i=i+1)
    // {
    //     for(int j=0;j<6;j=j+1)
    //     {
    //         cout<<" * ";
    //     }
    //     cout<<endl;
        

    // }


//     for(int i=0;i<3;i=i+1)
//     {
//         for(int j=0;j<4;j=j+1){
//         if(i==1){
//             cout<<"  ";
//         }
//         else{
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     }
// }

// int n;
// cin>>n;
// int fact = 1;
// for(int i=n;i>=1;i=i-1){
//     cout<<i<<endl;
// }

// for(int i=n;i>=1;i=i-1)
// {
//     fact= fact*n;
//     n=n-1;
// }
//     cout<<fact<<endl;

// for(int i=2;i<n;i=i+1)
// {
//     if(n%i==0){
//         cout<<"Not prime"<<endl;
//         // break;
//     }
//     else{
//         cout<<"prime"<<endl;
//         // break;
//     }
// }

// for(int i=1;i<=n;i=i+1)
// {
//     if(i%2==0){
//         cout<<i<<endl;
//     }
    
// }

// int a,b,c;
// cin>>a>>b>>c;
// if(a>b&&a>c){
//     cout<<a<<endl;
// }
// else if(b>c&&b>a){
//     cout<<b<<endl;
// }
// else{
//     cout<<c<<endl;
// }

// int n;
// if(cout<<n)
// {
//     cout<<"sahil"<<endl;
// }

// cin>>n;
// for(int i=0;i<n;i=i+1)
// {
//     for(int j=0 ; j<n ;j=j+1)
//     {
//         cout<<"* ";
//     }
//     cout<<endl;
// }

// for(int i=0; i<3; i=i+1)
// {
//     for(int j=0; j<5; j=j+1)
//     {
//         cout<<"* ";
//     }
//     cout<<endl;
// }

// for(int i=0; i<4; i=i+1)
// {
//     for(int j=0; j<4; j=j+1)
//     {
//         if(){
//             cout<<" ";
//         }
//         else{
//             cout<<"* ";
//         }
//     }
//         cout<<endl;
// }

for(int i=0; i<4; i=i+1)
{
    for(int j=0; j<4; j=j+1)
    {
        if((i==0 || i==3 || j==0 || j==3)){
            cout<<"* ";
        }
        else{
            cout<<"  ";
        }
    }
    cout<<endl;
}

return 0;
}