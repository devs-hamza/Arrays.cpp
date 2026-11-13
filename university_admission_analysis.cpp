#include <iostream>
#include <string>
using namespace std;
int main()
{
    int applicantID[40] = {
    4001, 4002, 4003, 4004, 4005,
    4006, 4007, 4008, 4009, 4010,
    4011, 4012, 4013, 4014, 4015,
    4016, 4017, 4018, 4019, 4020,
    4021, 4022, 4023, 4024, 4025,
    4026, 4027, 4028, 4029, 4030,
    4031, 4032, 4033, 4034, 4035,
    4036, 4037, 4005, 4012, 4020
    };
    string applicantName[40] = {
    "Ali", "Ahmed", "Usman", "Hamza", "Hassan",
    "Bilal", "Zain", "Danish", "Saad", "Abdullah",
    "Ayesha", "Fatima", "Zainab", "Maryam", "Hira",
    "Sara", "Noor", "Amna", "Iqra", "Mahnoor",
    "Umar", "Asad", "Fahad", "Talha", "Haris",
    "Muneeb", "Taha", "Raza", "Shahzaib", "Farhan",
    "Kashif", "Imran", "Sana", "Nida", "Waleed",
    "Areeba", "Dua", "Saif", "Maham", "Arham"
    };
    int testMarks[40] = {
    85, 72, 91, 45, 68,
    78, 95, 56, 82, 39,
    88, 67, 74, 92, 51,
    63, 89, 43, 77, 96,
    81, 58, 90, 69, 84,
    47, 73, 98, 62, 86,
    55, 79, 93, 41, 87,
    70, 94, 65, 83, 76
    };
    int interviewMarks[40] = {
    78, 85, 67, 88, 72,
    91, 82, 45, 76, 69,
    94, 73, 81, 65, 89,
    77, 92, 58, 84, 96,
    71, 88, 39, 93, 62,
    85, 74, 97, 68, 81,
    90, 66, 87, 75, 95,
    83, 42, 91, 64, 86
    };
    int familyIncome[40] = {
    85000, 120000, 95000, 75000, 140000,
    105000, 90000, 160000, 110000, 80000,
    70000, 130000, 98000, 115000, 85000,
    145000, 92000, 125000, 78000, 100000,
    155000, 88000, 110000, 95000, 135000,
    82000, 118000, 76000, 142000, 90000,
    105000, 128000, 87000, 150000, 72000,
    97000, 112000, 84000, 132000, 93000
    };



    cout << "Enter the applicant ID to search : ";
    int id;
    cin >> id;
    bool foundApplicant = false;
    for (int i = 0;i < 40;i++)
    {
        if (applicantID[i] == id)
        {
            cout << "\n\nApplicant name : " << applicantName[i];
            cout << "\nTest marks : " << testMarks[i];
            cout << "\nInterview marks : " << interviewMarks[i];
            cout << "\nFamily income : " << familyIncome[i];
            foundApplicant = true;
        }
    }
    if (foundApplicant == false)
    {
        cout << "\nApplicant ID not found.";
    }


    cout << "\n\nApplicants who passes test but failed interview";
    for (int i = 0;i < 40;i++)
    {
        if (testMarks[i] >= 50 && interviewMarks[i] < 50)
        {
            cout << "\n" << applicantID[i] << "\t" << applicantName[i];
        }
    }


    cout << "\n\nApplicants who passed both exams but exceeds family income";
    for (int i = 0;i < 40;i++)
    {
        if (testMarks[i] >= 50 && interviewMarks[i] >= 50 && familyIncome[i] > 105000)
        {
            cout << "\n" << applicantID[i] << "\t" << applicantName[i];
        }
    }


    cout << "\n\nApplicants with same IDs";
    for (int i = 0;i < 40;i++)
    {
        for (int j = i + 1;j < 40;j++)
        {
            if (applicantID[i] == applicantID[j])
            {
                cout << "\nID : " << applicantID[i] << "\n" << applicantName[j] << "\n" << applicantName[i];
            }
        }
    }


    int counter = 0;
    for (int i = 0;i < 40;i++)
    {
        if (testMarks[i] >= 50 && interviewMarks[i] >= 50 && familyIncome[i] <= 105000)
        {
            counter++;
        }
    }
    float percentage = float((counter * 100.0) / 40.0);
    cout << "\n\nApplicants percentage who passed : " << percentage << "%";



    int total = testMarks[0] + interviewMarks[0];
    for (int i = 0;i < 40;i++)
    {
        if (total < (testMarks[i] + interviewMarks[i]))
        {
            total = testMarks[i] + interviewMarks[i];
        }
    }
    for (int i = 0;i < 40;i++)
    {
        if (total == (testMarks[i] + interviewMarks[i]))
        {
            cout << "\nID : " << applicantID[i];
            cout << "\n\nApplicant name : " << applicantName[i];
            cout << "\nTotal marks : " << total;

        }
    }


    return 0;
}