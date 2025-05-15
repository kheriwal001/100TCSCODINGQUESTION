#include<bits/stdc++.h>
using namespace std;
float sumofAp(float a , float d , float n){
    float sum =  ((2.0*a)+(n-1)*d);
    return  (n/2.0)*sum ;
}
int main()
{
    float a = 1.5, d = 3, n = 5;
    cout << "Sum of Given Ap Series: " << sumofAp(a, d, n) << endl;
}
