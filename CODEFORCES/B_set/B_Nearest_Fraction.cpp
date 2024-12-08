#include <iostream>
 
using namespace std;
 
float abs (float x)
{
      if (x<0) return (-x); else return (x);
}
 
int main ()
{
     int x,y,n,a,b;
     float min,R;
     int i=1;
     cin>>x>>y>>n;
     a=x;
     b=n;
     R=(float)(x)/y;
     int p,q;
     p=a; 
     if (b>y) q=y; else q=b;
     min=abs(R-(float)(a)/b); 
     
     while (p>=0)
     {
           while (q>=0)
           {
               if (min>=abs(R-(p)/(float)(q))) 
               {min=abs(R-(p)/(float)(q)); a=p; b=q;  break;}
               q--;  
           }
           p--; 
           q=n;
     }
     cout<<a<<"/"<<b;
     //system ("PAUSE");
}



#include <iostream>
#include <string>
#include <ratio>
#include <cmath>

using namespace std;

int main() {
    int a, b, d;
    cin >> a >> b >> d;
    
    ratio<int> f(a, b);
    f = f.limit_denominator(d);
    
    int x = f.num;
    int y = f.den;
    
    cout << x << "/" << y << endl;

    return 0;
}
