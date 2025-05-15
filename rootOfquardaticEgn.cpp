#include<bits/stdc++.h>
using namespace std;
void Roots(int a, int b, int c){
    int d = (b*b)-(4*a*c);
    double sqrt_d = sqrt(abs(d));
    if(d>0){
        double root1 = (double)(-b+sqrt_d)/(2*a);
        double root2 = (double)(-b-sqrt_d)/(2*a);
        cout<<root1<<" "<<root2;
    }else if(d == 0){
        double root = (double)(-b/(2.0*a));
        cout<<root;
    }
    else{
      double realPart = (double)(-b/(2.0*a));
      double imagePart = (double)(sqrt_d/(2.0*a));
      cout<<realPart<<"+i"<<imagePart;
      cout<<" ";
      cout<<realPart<<"-i"<<imagePart;
    }
}
int main(){

    int a = 1, b = -3, c = -10;        
    Roots(a, b, c);
 
    return 0;

}