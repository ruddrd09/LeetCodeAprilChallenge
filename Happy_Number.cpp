class Solution {
public:
    int find(int n) {
        int x = 0;
        while(n) {
            x += (n%10)*(n%10);
            n /= 10;
        }
        return x;
    }
    
    bool isHappy(int n) {
        int sptr = find(n);
        int fptr = find(find(n));
        while(fptr != 1) {
            if(sptr == fptr) {
                return 0;
            }
            sptr = find(sptr);
            fptr = find(find(fptr));
        }
        return 1;
    }
};