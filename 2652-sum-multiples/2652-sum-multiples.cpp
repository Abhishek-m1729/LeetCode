class Solution {
public:
    int sumOfMultiples(int n) 
    {
        int sum = 0;
        int i = 1;
        
        // while(3 * i <= n)
        // {
        //     if(15*i <= n) sum += 15*i;
        //     if(3*i <= n && (3*i)%15 != 0) sum += 3*i;
        //     if(5*i <= n && (5*i)%15 != 0 && (5*i)%3 != 0) sum += 5*i;
        //     if(7*i <= n && (7*i)%15 != 0 && (7*i)%3 != 0 && (7*i)%5 != 0) sum += 7*i;
        //     i ++;
        // }

        for(i=1; i<=n; ++i)
        {
            if((i%3==0)||(i%5==0)||(i%7==0)) sum+=i;
        }

        return sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna