class Solution {
public:
    int thirdMax(vector<int>& nums) {
        /*
        int i,k=nums.size();
        for( i=1; i<k; i++)
        {
            int temp=nums[i],j;
            for(j=i-1; j>=0; j++)
            {
                if(nums[j]>temp)
                {
                    nums[j+1]=nums[j];
                }
                else
                    break;
                
            }
            nums[j+1]=temp;
        }
        int max=nums[k-1];
        
        int count=0,p=max;
        for(int i=nums.size()-2; i>=0; i--)
        {   
           if(nums[i]<p)
           {
               p=nums[i];
               count++;
           }  
           if(count==2)
               return p;
        
        }
            return max;
            
          set<int> s(nums.begin(),nums.end());
        priority_queue<int> pq(s.begin(),s.end());
        if(pq.size()==1||pq.size()==2)
            
        {
            return pq.top();
        }
        pq.pop();
        pq.pop();
        return pq.top();
        */
        int first=nums[0],second=INT_MIN,third=INT_MIN,n=nums.size(),count=0;
    if(n<3)
        {
        if(n==1)
            {
          return nums[0];  

        }
        else
        {
          return max(nums[0],nums[1]);  
            }
    }
   for(int i=1;i<n;i++)
       {
       if(first<nums[i])
           {
           first=nums[i];

      }

   }
    for(int i=0;i<n;i++)
        {
        if(first>nums[i]&&nums[i]>second)
            {
            second=nums[i];
        }
    }
    for(int i=0;i<n;i++)
        {
        if(second>nums[i]&&nums[i]>=third)
        {
          third=nums[i]; 
            count++;

        }


    }
    if(third==INT_MIN)
       {

          if(count!=0)
              {
              return third;
          }



        third=first;


       }
    return third;
    }
};
