vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        vector<int> res;
        bool bl = false;
        for (int i = 0; i < n; i++) {
        int currentSum = arr[i];
 
        if (currentSum == s) {
            res.push_back(i+1);
            res.push_back(i+1);
            bl=true;
            break;
        }
        else {
            // Try all subarrays starting with 'i'
            for (int j = i + 1; j < n; j++) {
                currentSum += arr[j];
 
                if (currentSum == s) {
                    res.push_back(i+1);
                    res.push_back(j+1);
                    bl=true;
                    break;
                }
            }
            if(bl) break;
        }
    }
    if(bl) return res;
     return {-1};
    }
