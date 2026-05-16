class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<pair<string, vector<string>>> groups;

        for (string word : strs) {
            string sortedWord = word;
            sort(sortedWord.begin(), sortedWord.end());

            bool found = false;
            for (auto& group : groups) {
                if (group.first == sortedWord) {
                    group.second.push_back(word);
                    found = true;
                    break;
                }
            }

            if (!found) {
                groups.push_back({sortedWord, {word}});
            }
        }

        vector<vector<string>> result;
        for (auto& group : groups) {
            result.push_back(group.second);
        }

        return result;
    }
};

