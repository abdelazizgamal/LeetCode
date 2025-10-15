class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        //int n = arr.size()/2 + arr.size() % 2;
        int sum1 = 0, sum2 = 0 ,sum = 0;
        for(int i = arr.size(); i >= 1 ; i-=2){
            for(int j = 0; j < i;j++ ){
                int n = arr.size()+1 - i;
                for(int k = j; k < n+j && n+j <= arr.size(); k++){
                    sum1 += arr[k];

                }
                sum2 += sum1;
                sum1 = 0;
                cout <<"sum2  "<< sum2 << endl;

            }
            sum += sum2;
            sum2 = 0;
            cout <<"sum  "<< sum << endl;
        }
        return sum;
    }

};