// answer of everything:  a[k] = -1; // mark a[k] as visited;

class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int counter = 0;
        vector<int> result;
        set<int> check_not_cyclic;
        set<int> empty_set;
        int i = 0;
        for(int k = 0; k <= nums.size()-1; k++) {
            counter = 1;
            i = k;
            // cout << "k:" << k;
            check_not_cyclic = empty_set;
            check_not_cyclic.insert(nums[k]);
            // for(auto x: check_not_cyclic)
            //             cout << x << " ";
            //         cout << "\n";
            if(i == nums[i] && nums[i]) {
                break;
                // cout << "here";
            } else {
            while(nums[i]) {
                if(counter > 1) {
                    // cout << check_not_cyclic.count(nums[i]);
                    for(auto x: check_not_cyclic)
                        cout << x << " ";
                    cout << "\n";
                    if(check_not_cyclic.count(nums[i])) {
                        break;
                        cout << "broke";
                    }
                    else {
                        check_not_cyclic.insert(nums[i]);
                        i = nums[i];
                        counter++;
                        // cout << counter;
                        // might go into infinite loop if cyclic
                    }
                } else {
                // might go into infinite loop if cyclic
                check_not_cyclic.insert(nums[i]);
                i = nums[i];
                counter++;
                }
            }
            }
            // cout << counter;
            result.push_back(counter);
        }
        /*for(auto x: result)
            cout << x;
        */
        return *max_element(result.begin(), result.end());
    }
}

// horrific solution: obviously
