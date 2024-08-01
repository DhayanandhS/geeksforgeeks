class Solution {
    long sumOfSeries(long n) {
        int tot = 0;
        for(int i = 1; i <= n; i++){
            tot = tot + (i * i * i);
        }
        return tot;
    }
}
