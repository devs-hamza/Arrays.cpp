#include <iostream>
using namespace std;
int main()
{
    //Data is genrated by chatgpt but program is mine
    int userID[30] = {
     2001, 2002, 2003, 2004, 2005, 2006,
     2007, 2008, 2009, 2010, 2011, 2012,
     2013, 2014, 2015, 2016, 2017, 2018,
     2019, 2020, 2021, 2022, 2001, 2024,
     2025, 2026, 2027, 2028, 2029, 2005
    };
    string username[30] = {
        "Ali", "Ahmed", "Usman", "Hamza", "Hassan",
        "Bilal", "Zain", "Danish", "Saad", "Abdullah",
        "Ayesha", "Fatima", "Zainab", "Maryam", "Hira",
        "Sara", "Noor", "Amna", "Iqra", "Mahnoor",
        "Umar", "Asad", "Fahad", "Talha", "Haris",
        "Muneeb", "Taha", "Raza", "Shahzaib", "Farhan"
    };
    int numberOfPosts[30] = {
        12, 25, 8, 30, 15, 20,
        10, 18, 5, 22, 14, 28,
        9, 16, 24, 11, 19, 7,
        26, 13, 21, 6, 17, 29,
        4, 23, 10, 15, 27, 12
    };
    int totalLikes[30] = {
        450, 1200, 300, 2500, 800, 950,
        400, 1500, 200, 1800, 0, 2200,
        350, 1100, 1900, 600, 1400, 0,
        2100, 750, 1600, 180, 1000, 2800,
        150, 1700, 500, 900, 2400, 800
    };
    int totalComments[30] = {
        45, 120, 30, 250, 80, 95,
        40, 150, 20, 180, 0, 220,
        35, 110, 190, 60, 140, 0,
        210, 75, 160, 18, 100, 280,
        15, 170, 50, 90, 240, 80
    };
    //Data is genrated by chatgpt but program is mine


    cout << "Enter the user ID : ";
    int idtosearch;
    cin >> idtosearch;
    bool checkID = false;
    cout << "\n    User Data ";
    for (int i = 0;i < 30;i++)
    {
        if (idtosearch == userID[i])
        {
            cout << "\nUser name : " << username[i];
            cout << "\nNumber of posts : " << numberOfPosts[i];
            cout << "\nLikes : " << totalLikes[i];
            cout << "\nComments : " << totalComments[i]<<"\n";
            checkID = true;
        }
    }
    if (checkID != true)
    {
        cout << "\nUser ID not found!!";
    }




    cout << "\n\nEnter the user name : ";
    string nametosearch;
    cin >> nametosearch;
    bool checkname = false;
    cout << "\n    User Data ";
    for (int i = 0;i < 30;i++)
    {
        if (nametosearch == username[i])
        {
            cout << "\nUser ID : " << userID[i];
            cout << "\nNumber of posts : " << numberOfPosts[i];
            cout << "\nLikes : " << totalLikes[i];
            cout << "\nComments : " << totalComments[i] << "\n";
            checkname = true;
        }
    }
    if (checkname != true)
    {
        cout << "\nUser name not found!!";
    }





    
    bool checkengagement = false;
    cout << "\n    Users with zero engagement";
    for (int i = 0;i < 30;i++)
    {
        if (totalLikes[i] == 0 && totalComments[i] == 0)
        {
            cout << "\n" << username[i];
            checkengagement = true;
        }
    }
    if (checkengagement != true)
    {
        cout << "\nNo user with zero engagement!!";
    }



    cout << "\n\n  Duplicate IDs";
    bool id = false;
    for (int i = 0;i < 30;i++)
    {
        for (int j = i + 1;j < 30;j++)
        {
            if (userID[j] == userID[i])
            {
                cout << "\nUser ID : " << userID[i];
                cout << "\n" << username[i];
                cout << "\n" << username[j]<<"\n";
                id = true;
            }

        }
    }
    if (id != true)
    {
        cout << "\nNo duplicate IDs!!";
    }


    int totalengagement[30];
    cout << "\n\n   Total Engagement ";
    for (int i = 0;i < 30;i++)
    {
        totalengagement[i] = totalComments[i] + totalLikes[i];
        cout << "\n" << username[i] << "\t\t" << totalengagement[i];

    }

    cout << "\n\n  Highest engagement";
    int highestengagement = totalengagement[0];
    for (int i = 0;i < 30;i++)
    {
        if (highestengagement < totalengagement[i])
        {
            highestengagement = totalengagement[i];
        }

    }
    for (int i = 0;i < 30;i++)
    {
        if (highestengagement == totalengagement[i])
        {
            cout << "\nUser : " << username[i];
            cout << "\nEngagement : " << highestengagement;
        }
    }



    return 0;
}
