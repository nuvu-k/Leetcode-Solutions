class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int sum = 0;
        int product = 1;

        while(n!=0){

            int remainder = n%10;

            product = product*remainder;
            sum = sum + remainder;

            n = n/10;
            
        }

        return (product-sum);
        
    }
};