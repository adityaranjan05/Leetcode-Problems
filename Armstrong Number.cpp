#include<iostream>
#include<math.h>
using namespace std;

class Solution{
    public:
        bool isArmstrong(int n){
            int count = 0;
            int original = n;
            int copy = n;
            int digit;
            int sum = 0;
            if(n == 0) return true;
            while(n>0){
                n = n/10;
                count++;
            }
            while (copy > 0){
                digit = copy % 10;
                int power = 1;
                for(int i = 0; i < count; i++){
                    power*=digit;
                }
                sum+=power;
                copy /= 10;
            }
            return sum == original;
        }
};

int main(){
    Solution s;
    for(int i = 1; i <= 1000; i++){
        if(s.isArmstrong(i)){
            cout << i << endl;
        }
    }
}