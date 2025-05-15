// #include<bits/stdc++.h>
// using namespace std;
// string decimalToBinary(int num){
//     string sum = "";
//     while(num >=1){
//         int remainder = num%2;
        
//         sum = to_string(remainder)+ sum ;
//         num = num/2;
//     }

//     return  sum;
// }
// int main(){
//     int num;
//     cout<<"Enter number";
//     cin>>num;
//     string numBinary= decimalToBinary(num);
//     for(int i=0; i<numBinary.size(); i++){
//         if(numBinary[i] == '0'){
//             numBinary[i] = '1';
//         }
//         else if(numBinary[i]== '1'){
//             numBinary[i] = '0';
//         }
//     }

//     int n = 0;
//     for (char bit : numBinary) {
//         n = (n << 1) | (bit - '0'); // Shift left and add bit
//     }

//     // Print the complement decimal number
//     cout << "Flipped Decimal Number: " << n << endl;
    
//     return 0;
    
// }

#include<bits/stdc++.h>
using namespace  std;
int decimalTobinary(int n){
    int sum =0;
    while(n){
        int d = n%2;
        sum = 
    }
}
int main(){
    int num;
    cin>>num;
    int binaryNum = decimalTobinary(num);
}