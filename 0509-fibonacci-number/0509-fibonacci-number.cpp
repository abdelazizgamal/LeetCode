class Solution {
public:
     int fib(int n) {
    //     int sum = 0;
    //     if (n == 0) return  0;
    //     if (n == 1) return 1;
    //     sum = fib(n - 1) + fib(n - 2);
    //     return sum;
    /////////////////////////////////////////////////////////////////
    // int arr[31] = { 0,1 };
    // int sum = 0;
    // if(n == 0 || n == 1) return arr[n];
    
    // for (int i = 2; i <= 30; i++) {
    //     arr[i] = arr[i - 1] + arr[i - 2];
    // }
    // return arr[n -1] + arr[n - 2];

    if (n == 0) return  0;
    int p = 0, c = 1, sum = 0;
    for(int i = 1 ; i < n  ; i ++){
        c = c + p;
        p = c - p;
        
    }
    return c;
    }

};