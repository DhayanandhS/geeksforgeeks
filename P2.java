class Solution {
    static long fact(long n) {
        long result = 1;
        for (long i = 1; i <= n; i++) {
            result *= i;
        }
        return result;
    }
    static ArrayList<Long> factorialNumbers(long n) {
        ArrayList<Long>ar = new ArrayList<>();
        for(long i = 1 ; i <= n ; ++i){
            long k = fact(i);
            if(k <= n)
                ar.add(k);
            else break; 
        }
        return ar;
    }
}