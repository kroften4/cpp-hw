#include <iostream>
using namespace std;

//int main1_5()
//{
//    char isDay, areCurtainsOpen, isLampOn;
//    cout << "Is it daytime? [y/n]\n";
//    cin >> isDay;
//    cout << "Are the curtains open? [y/n]\n";
//    cin >> areCurtainsOpen;
//    cout << "Is the lamp on? [y/n]\n";
//    cin >> isLampOn;
//    if (isLampOn == 'y' || (isDay == 'y' && areCurtainsOpen == 'y')) {
//        cout << "It's bright in the room";
//        return 0;
//    }
//    cout << "It's dark in the room";
//    return 0;
//}

char get_answer(string prompt)
{
    char answer;
    cout << prompt;
    cin >> answer;
    while (answer != 'y' && answer != 'n') {
        cout << "The answer must be 'y' or 'n'\n";
        cin >> answer;
    }
    return answer;
}

int main1_5()
{
    char is_day = get_answer("Is it daytime? [y/n]\n");
    char are_curtains_open = get_answer("Are the curtains open? [y/n]\n");
    char is_lamp_on = get_answer("Is the lamp on? [y/n]\n");
    if (is_lamp_on == 'y' || (is_day == 'y' && are_curtains_open == 'y')) {
        cout << "It's bright in the room";
        return 0;
    }
    cout << "It's dark in the room";
    return 0;
}
