class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> answer(score.size());

        // Create a vector of pairs to store both score and original index
        vector<pair<int, int>> scoreIndex;
        for (int i = 0; i < score.size(); i++) {
            scoreIndex.push_back({score[i], i});
        }

        // Sort the scores in descending order
        sort(scoreIndex.begin(), scoreIndex.end(), [](const auto& a, const auto& b) {
            return a.first > b.first;
        });

        // Assign ranks directly to the answer array
        for (int i = 0; i < scoreIndex.size(); i++) {
            if (i == 0) {
                answer[scoreIndex[i].second] = "Gold Medal";
            } 
            else if (i == 1) {
                answer[scoreIndex[i].second] = "Silver Medal";
            } 
            else if (i == 2) {
                answer[scoreIndex[i].second] = "Bronze Medal";
            } 
            else {
                answer[scoreIndex[i].second] = to_string(i + 1);
            }
        }

        return answer;
    }
};
