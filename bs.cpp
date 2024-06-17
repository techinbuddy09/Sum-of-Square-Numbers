//Using Binary Search
class Solution {
public:
    bool judgeSquareSum(int c) {
        long low=0;// setting low at 0
        long high=sqrt(c); // then for high calculating the square root value of c
        while(low<=high)
        {
              long long val=(low*low+high*high); // value for c
            if(val==c) // if val ==c its true
            {
                return true;
            }
            else if(val<c) // if val less than c then increase low
            {
                low++;
            }
            else // else if high greater then decrease high
            {
                high--;
            }
            
        }
        return false; // if not then return false
        
    }
};


// Dry Run
//Example-1
// given c=5 
// low=0 and high=sqrt(5)=2
// now 0<=5 true
// so val=0*0+2*2=4
// now 4<5 => low++ so low =0+1=1
// now low=1 and high=2 =>
// val=1*1+2*2=5
//=> 5==5 
// this means return true ..
*************************************




