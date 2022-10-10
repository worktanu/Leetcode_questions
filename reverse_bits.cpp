#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reverseBits(int n) {
      
        int  x =0;
       do{
		int t=1;
		t = n&t;
		n=n>>1;
		x=x<<1;
		x=x|t;
        }while(n !=0);
        return x;
        
    }
};
int main()
{
	Solution obj;
	cout<< obj.reverseBits(6)<<endl;

}
