class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(), deck.end());
        vector<int> ans(deck.size(),0);
        int index=0, temp;
        deque<int> d;
        for(int i=0; i<deck.size(); i++)
            d.push_back(i);
        while(d.size()) {
            temp = d.front();
            d.pop_front();
            ans[temp] = deck[index];
            index++;
            if(d.size()) {
                temp = d.front();
                d.pop_front();
                d.push_back(temp);
            }
        }
        return(ans);
    }
};
