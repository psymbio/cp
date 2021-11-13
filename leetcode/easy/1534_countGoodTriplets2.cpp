class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) 
    {
        int n = arr.size(), left = 0, mid = 0, right = 0;
        int result = 0;
        
        for (int i = 0; i < n-2; i++)
        {
            for (int j = i+1; j < n-1; j++)
            {
                left = arr[i];
                mid = arr[j];
                
                if ((abs(left-mid) <= a))
                { 
                    for (int k = j+1; k < n; k++)
                    {
                        right = arr[k];
                        
                        result += (abs(left - right) <= c) 
                            && (abs(mid - right) <= b);
                    }
                }
            }
        }
            
        return result;
    }
};
