#include<iostream>
using namespace std;

class Solution{
    private:
        float r,i;
    public:
        Solution(float r, float i){
            this->r=r;
            this->i=i;
        }

        Solution(){}
        void displaydata(){
            cout << "real part= " << r << endl;
            cout << "imaginary part= " << i << endl;
        }

        Solution operator + (Solution c){
            return Solution(r+c, i+c, i);
        }
};

int main(){

    Solution a(2, 3);
    Solution b(3, 4);
    Solution c = a + b;
    return 0;
}