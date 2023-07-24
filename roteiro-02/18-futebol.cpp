#include <bits/stdc++.h>

using namespace std;

#define FOR(i, m, n) for (int i = m; i < n; i++)

class Team {
   public:
    int score = 0;
    int games = 0;
    int goalsScored = 0;
    int goalsConceded = 0;

    int goalsDiff() {
        return goalsScored - goalsConceded;
    }

    double scorePercentage() {
        if (games == 0) return -1;
        return ((double)score * 100 / (games * 3));
    }
};

string toLowercase(string str) {
    string lower = str;
    transform(lower.begin(), lower.end(), lower.begin(), ::tolower);
    return lower;
}

bool compareTeams(pair<string, Team> team1, pair<string, Team> team2) {
    if (team1.second.score != team2.second.score) {
        return team1.second.score > team2.second.score;
    }
    if (team1.second.goalsDiff() != team2.second.goalsDiff()) {
        return team1.second.goalsDiff() > team2.second.goalsDiff();
    }
    if (team1.second.goalsScored != team2.second.goalsScored) {
        return team1.second.goalsScored > team2.second.goalsScored;
    }
    return toLowercase(team1.first) < toLowercase(team2.first);
}

bool equalRank(pair<string, Team> team1, pair<string, Team> team2) {
    return (team1.second.score == team2.second.score && team1.second.goalsDiff() == team2.second.goalsDiff() && team1.second.goalsScored == team2.second.goalsScored);
}

int main() {
    int t, g;
    map<string, Team> teams;
    string read;

    do {
        cin >> t >> g;
        if (t == 0 && g == 0) break;

        if (!teams.empty()) printf("\n");
        teams.clear();

        FOR(i, 0, t) {
            cin >> read;
            teams[read] = Team();
        }

        FOR(i, 0, g) {
            string team1, team2;
            int goals1, goals2;
            cin >> team1 >> goals1 >> read >> goals2 >> team2;

            // Score
            if (goals1 > goals2) {
                teams[team1].score += 3;
            } else if (goals1 < goals2) {
                teams[team2].score += 3;
            } else {
                teams[team1].score += 1;
                teams[team2].score += 1;
            }

            // Total games
            teams[team1].games++;
            teams[team2].games++;

            // Goals Scored
            teams[team1].goalsScored += goals1;
            teams[team2].goalsScored += goals2;

            // Goals conceded
            teams[team1].goalsConceded += goals2;
            teams[team2].goalsConceded += goals1;
        }

        vector<pair<string, Team>> ranking(teams.begin(), teams.end());
        sort(ranking.begin(), ranking.end(), ::compareTeams);

        int rank = 1;
        pair<string, Team> previous;
        for (auto team : ranking) {
            char* nameCharArray = new char[team.first.length() + 1];
            strcpy(nameCharArray, team.first.c_str());

            // Rank
            if (rank == 1 || !equalRank(previous, team)) {
                printf("%2d. ", rank);
            } else {
                printf("    ");
            }

            // Other data
            printf("%15s %3d %3d %3d %3d %3d ",
                   nameCharArray,
                   team.second.score,
                   team.second.games,
                   team.second.goalsScored,
                   team.second.goalsConceded,
                   team.second.goalsDiff());

            // Score Percentage
            double percentage = team.second.scorePercentage();
            if (percentage != -1)
                printf("%6.2f", percentage);
            else
                printf("   N/A");
            printf("\n");

            previous = team;
            rank++;
        }
    } while (true);

    return 0;
}