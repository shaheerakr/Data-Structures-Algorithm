#include<iostream>
 
using namespace std;
 
int main()
{
    int arr[5][5],a=0,b=0,i,j,n;
    cout<<"Enter size of matrix(max 5):";
    cin>>n;
    cout<<"Enter the matrix:\n";
    
    for(i=0;i<n;++i)
        for(j=0;j<n;++j)
            cin>>arr[i][j];
    
    for(i=0;i<n;++i)
        for(j=0;j<n;++j)
            if(j>i)
                a+=arr[i][j];
            else
                if(i>j)
                    b+=arr[i][j];
    
    cout<<"\nSum of elements above the diagonal:"<<a;
    cout<<"\nSum of elements below the diagonal:"<<b;
 
    return 0;
}
