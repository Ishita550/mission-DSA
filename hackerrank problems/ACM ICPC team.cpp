pair<int, int> acmTeam(vector<string> topic) {
    int maxTopics = 0, count = 0, n = topic.size(), m = topic[0].size();
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int known = 0;
            for (int k = 0; k < m; ++k)
                known += topic[i][k] == '1' || topic[j][k] == '1';
            if (known > maxTopics) {
                maxTopics = known;
                count = 1;
            } else if (known == maxTopics) count++;
        }
    }
    return {maxTopics, count};
}