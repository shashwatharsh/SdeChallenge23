int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
    vector<pair<int, int>> schedule;
    for (int i = 0; i < n; i++) {
        schedule.push_back({start[i], end[i]});
    }

    // Sort the meetings based on their end times
    sort(schedule.begin(), schedule.end(), [&](pair<int, int> a, pair<int, int> b) {
        return a.second < b.second;
    });

    // Select the maximum number of non-overlapping meetings
    int cnt = 1;
    int endN = schedule[0].second;
    for (int i = 1; i < n; i++) {
        if (schedule[i].first > endN) {
            endN = schedule[i].second;
            cnt++;
        }
    }

    return cnt;
    }