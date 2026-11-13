# C++ Array Programs

A collection of 11 C++ console programs built while practising arrays and basic problem-solving. The examples use fixed-size arrays, parallel arrays, loops, conditions, counters, accumulators, linear search, and nested loops to analyse small datasets.

The repository is intended as a learning portfolio: each `.cpp` file contains its own `main()` function and can be compiled and run independently.

## Programs

| # | File | What it demonstrates |
|---:|---|---|
| 1 | [`01_array_element_analysis.cpp`](01_array_element_analysis.cpp) | Counts positive, negative, even, odd, and zero values; detects duplicate pairs; checks whether an array is strictly increasing or decreasing. |
| 2 | [`02_array_statistics.cpp`](02_array_statistics.cpp) | Reads 10 integers and calculates the largest, smallest, sum, and even/odd counts. |
| 3 | [`03_second_largest_smallest.cpp`](03_second_largest_smallest.cpp) | Reads 10 integers and finds the largest, second-largest distinct, smallest, and second-smallest distinct values. |
| 4 | [`04_array_element_frequency.cpp`](04_array_element_frequency.cpp) | Reads 10 integers and counts how many times each distinct value appears. |
| 5 | [`05_banking_transaction_analysis.cpp`](05_banking_transaction_analysis.cpp) | Searches transaction IDs and account numbers, lists transactions above an amount, detects duplicate IDs, totals deposits and withdrawals, and finds accounts above a transaction-count threshold. |
| 6 | [`06_airline_reservation_management.cpp`](06_airline_reservation_management.cpp) | Searches passenger records, identifies duplicate seat assignments, groups passengers by ticket class, checks seat availability, and lists unoccupied seats in a range. |
| 7 | [`07_social_media_engagement_analysis.cpp`](07_social_media_engagement_analysis.cpp) | Searches user records, identifies zero-engagement users and duplicate IDs, calculates total engagement, and finds the highest engagement. |
| 8 | [`08_courier_tracking_management.cpp`](08_courier_tracking_management.cpp) | Searches parcel tracking IDs and destination cities, groups orders by delivery status, detects duplicate tracking IDs, totals delivery charges, and filters by a charge limit. |
| 9 | [`09_student_scholarship_management.cpp`](09_student_scholarship_management.cpp) | Searches student records, detects duplicate IDs, checks scholarship eligibility conditions, calculates an eligibility percentage, and filters by scholarship status. |
| 10 | [`10_university_admission_analysis.cpp`](10_university_admission_analysis.cpp) | Searches applicant records, evaluates test/interview and income conditions, detects duplicate IDs, calculates a pass percentage, and finds the highest combined marks. |
| 11 | [`11_linear_vs_binary_search.cpp`](11_linear_vs_binary_search.cpp) | Compares linear and binary search iteration counts. It checks whether the sample array is sorted and skips binary search when it is not. |

## Concepts practised

- Declaring and traversing one-dimensional arrays
- Using parallel arrays to store related records
- `for` and `while` loops
- `if`, `else if`, and `else` conditions
- Nested loops for duplicate detection and frequency counting
- Linear search and a sorted-array check before binary search
- Boolean flags, counters, and accumulators
- Finding minimum, maximum, and distinct second minimum/maximum values

## Requirements

- A C++ compiler that supports C++11 or later (for example, `g++`)
- A terminal or C++ IDE

No external libraries are required; the programs use standard C++ headers.

## Compile and run

Compile one source file at a time because every program has its own `main()` function.

For example, with `g++`:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic 02_array_statistics.cpp -o array_statistics
./array_statistics
```

On Windows with MinGW, use:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic 02_array_statistics.cpp -o array_statistics.exe
.\array_statistics.exe
```

Replace the source filename and output name to run a different program.

## Notes

- Some programs use hard-coded sample records, while the smaller array exercises ask for input at runtime. These datasets are illustrative and can be changed in the source files.
- The linear-versus-binary-search example intentionally contains an unsorted sample array. It demonstrates why binary search should only be used after confirming that the array is sorted.
- These are separate practice exercises, not one combined application. Each file is designed to be read, compiled, and experimented with independently.
