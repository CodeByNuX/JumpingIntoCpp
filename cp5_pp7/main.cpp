/*
7. Write a program that provides the option of tallying up the results
of a poll with 3 possible values. The first input to the program is
the poll question; the next three inputs are the possible answers.
The first answer is indicated by 1, the second by 2, the
Allain, Alex. Jumping into C++ (pp. 89-90). Cprogramming.com. Kindle Edition.
*/

#include <iostream>

using namespace std;

int main()
{
    const int MAX_BAR_WIDTH = 50;
    int poll_sum_1 = 0;
    int poll_sum_2 = 0;
    int poll_sum_3 = 0;
    int vote =0;

    string option1 = "C";
    string option2 = "C++";
    string option3 = "QBASIC";


    cout << "\nSimple program that provides the option of tallying up the results of a poll\n";

    while (true)
        {
            cout << "\nWhich programming language you like better; press 0 to quit.\n";
            cout << "1. " << option1 << "\n";
            cout << "2. " << option2 << "\n";
            cout << "3. " << option3 << "\n";
            cout << "\nCast your votes [1 | 2 | 3]:";
            //user input
            cin >> vote;

            // switch case would be better;
            if (vote == 1)
                {
                    //Cast vote to poll_sum_1
                    poll_sum_1++;
                } else if (vote == 2)
                {
                    //cast vote to poll_sum_2
                  poll_sum_2++;
                } else if (vote == 3)
                {
                    //cast vote to poll_sum_3
                    poll_sum_3++;
                } else if (vote == 0)
                {
                 //Quit and do bar graph

                 //find max count
                 int maxVotes = poll_sum_1;
                 if (poll_sum_2 > maxVotes)
                    {
                        maxVotes = poll_sum_2;
                    }
                 if (poll_sum_3 > maxVotes)
                    {
                        maxVotes = poll_sum_3;
                    }

                 // Compute scale
                 float scale;
                 if (maxVotes > 0)
                    {
                        scale = (float)MAX_BAR_WIDTH / maxVotes;
                    } else {
                    scale = 0;
                    }


                    // Draw results
                    cout << "\nResults\n";

                    //option 1
                    cout << option1 << " | ";
                    for(int i = 0; i<(int)(poll_sum_1 * scale); i++)
                        {
                            cout << "#";
                        }
                    cout << " (" << poll_sum_1 << ")\n";

                    cout << option2 << " |";
                    for (int i = 0; i < (int)(poll_sum_2 * scale); i++)
                        {
                            cout << "#";
                        }
                    cout << " (" << poll_sum_2 << ")\n";

                    //Option3
                    cout << option3 << " | ";
                    for (int i=0; i <(int)(poll_sum_3 * scale);i++)
                        {
                            cout << "#";
                        }

                    cout << " (" << poll_sum_3 << ")\n";

                    return 0;
                }

        }
}
