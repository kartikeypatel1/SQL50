class Solution {
public:
    vector<int> calender = {31, 28, 31, 30, 31, 30,
                            31, 31, 30, 31, 30, 31};

    int convertDate(string date) {
        int month = 10 * (date[0] - '0') + (date[1] - '0');
        int day = 10 * (date[3] - '0') + (date[4] - '0');

        int totalDays = day;

        for (int i = 0; i < month - 1; i++) {
            totalDays += calender[i];
        }

        return totalDays;
    }

    int countDaysTogether(string arriveAlice, string leaveAlice,
                          string arriveBob, string leaveBob) {

        int arAlice = convertDate(arriveAlice);
        int leAlice = convertDate(leaveAlice);

        int arBob = convertDate(arriveBob);
        int leBob = convertDate(leaveBob);

        int start = max(arAlice, arBob);
        int end = min(leAlice, leBob);

        if (end < start) {
            return 0;
        }

        return end - start + 1;
    }
};