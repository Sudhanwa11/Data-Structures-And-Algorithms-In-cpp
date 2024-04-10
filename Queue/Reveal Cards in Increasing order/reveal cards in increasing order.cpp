class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(), deck.end()); // Sort the deck
        
        queue<int> indices;
        const int n = deck.size();
        for (int i = 0; i < n; i++) {
            indices.push(i); // Initialize queue with indices
        }
        
        vector<int> result(n);
        for (int card : deck) {
            result[indices.front()] = card; // Reveal card at the front index
            indices.pop(); // Remove the front index
            
            if (!indices.empty()) {
                indices.push(indices.front()); // Move the next top card to the bottom
                indices.pop(); // Remove the top index
            }
        }
        
        return result;
    }
};
