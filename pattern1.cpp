/*5
ABCDEFEDCBA
ABCDE EDCBA
ABCD   DCBA
ABC     CBA
AB       BA
A         A
AB       BA
ABC     CBA
ABCD   DCBA
ABCDE EDCBA
ABCDEFEDCBA
*/
#include <iostream.h>
int main() {
    int n,i,j,k;
    cin>>n;
    for(i=1;i<=n+1;i++)
    {
        cout<<((char)(i+64));
        
    }
     for(i=n;i>0;i--)
    {
        cout<<((char)(i+64));
        
    }
   
    cout<<endl;
    
    for(i=n;i>1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<((char)(j+64));
        }
       for(j=i;j<=n;j++)
        {
            cout<<" ";
        }
        for(j=i;j<=n-1;j++)
        {
            cout<<" ";
        }
       
        for(j=i;j>=1;j--)
        {
            cout<<((char)(j+64));
        }
       
        cout<<endl;
    }
    
     for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<((char)(j+64));
        }
         for(j=i;j<=n;j++)
        {
            cout<<" ";
        }
         for(j=i;j<=n-1;j++)
        {
            cout<<" ";
        }
        for(j=i;j>=1;j--)
        {
            cout<<((char)(j+64));
        }
      
        cout<<endl;
    }
     for(i=1;i<=n+1;i++)
    {
        cout<<((char)(i+64));
        
    }
     for(i=n;i>0;i--)
    {
        cout<<((char)(i+64));
        
    }
   
    cout<<endl;
      
    
   
}
