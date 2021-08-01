#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    cout<<endl;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    int max=a[0]; 
    
    int i,j,k,sum; 
    
    for( i=1; i<=n ; i++)
    {
        for(j=0; j<= n-i ; j++)
        {
            sum= 0;
            for( k= 0; k<i;k++)
            sum+= a[j+k] ;
            
            if(sum>max)
            max=sum;
        }
    }
    cout<<endl<<max;

    return 0;
}
