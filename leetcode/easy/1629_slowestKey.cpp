class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        
        int release_max = 0;
        char char_max = keysPressed[0];
        for(int i = releaseTimes.size()-1; i > 0; i--) {
            releaseTimes[i] -= releaseTimes[i-1];
            // cout << releaseTimes[i] << " " << release_max << "\n";
            if(releaseTimes[i] >= release_max) {
                release_max = releaseTimes[i];
            }
            else if(keysPressed[i] > char_max || releaseTimes[i] == release_max) {
                    char_max = max(char_max, keysPressed[i]);
                    cout << char_max;
            }
        }
        
        // for(auto x: releaseTimes)
        //     cout << x << " ";
        
        return char_max;
    }
};




// the solution I wrote before that doesn't work
//
class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        
        int release_max = 0;
        char char_max = keysPressed[0];
        for(int i = releaseTimes.size()-1; i > 0; i--) {
            releaseTimes[i] -= releaseTimes[i-1];
            // cout << releaseTimes[i] << " " << release_max << "\n";
            if(releaseTimes[i] >= release_max) {
                release_max = releaseTimes[i];
                if(keysPressed[i] > char_max || releaseTimes[i] == release_max) {
                    char_max = max(char_max, keysPressed[i]);
                    cout << char_max;
                }
            }
        }
        
        // for(auto x: releaseTimes)
        //     cout << x << " ";
        
        return char_max;
    }
};


class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {

        int release_max = 0;
        char char_max;
        for(int i = releaseTimes.size()-1; i > 0; i--) {
            releaseTimes[i] -= releaseTimes[i-1];
            // cout << release_max;
            if(releaseTimes[i] > release_max) {
                release_max = releaseTimes[i];
                char_max = keysPressed[i];
            }
            else if(releaseTimes[i] == release_max) {
                    char_max = max(char_max, keysPressed[i]);
                    cout << char_max;
            }
        }

        // for(auto x: releaseTimes)
        //     cout << x << " ";
        return char_max;
    }
};


