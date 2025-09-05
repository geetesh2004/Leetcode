// Last updated: 9/5/2025, 8:59:46 PM
int subtractProductAndSum(int n) {
    int product=1;
    int sum=0;
    while(n!=0){
        int rem = n%10;
        product = product * rem;
        sum = sum + rem;
        n=n/10;
    }
    int ans = product-sum;
    return ans;
    
};