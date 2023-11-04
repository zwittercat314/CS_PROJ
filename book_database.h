#define AUTHOR_NAME_SIZE 100
#define TITLE_SIZE 1000
#define PUBLISHER_SIZE 1000

// Define structures for books and users
typedef struct Book
{
    int UID;
    int cost;
    int count;
    char author[AUTHOR_NAME_SIZE];
    char title[TITLE_SIZE];
    char publisher[PUBLISHER_SIZE];
} Book;

Book booklist[7000] = {
    {1, 19.99, 3, "John Smith", "Python Programming", "Tech Books Inc."},
    {2, 14.95, 5, "Jane Doe", "Data Science Essentials", "DataPress Publications"},
    {3, 29.99, 2, "David Johnson", "Web Development in JavaScript", "CodeMasters"},
    {4, 9.99, 10, "Alice Brown", "Introduction to Machine Learning", "AI Publishing"},
    {5, 24.99, 4, "Mark Wilson", "Databases and SQL", "Tech Books Inc."},
    {6, 12.99, 6, "Emily Davis", "Algorithms and Data Structures", "CodeMasters"},
    {7, 34.95, 1, "Michael Lee", "Artificial Intelligence Fundamentals", "AI Publishing"},
    {8, 19.99, 3, "Sophia Garcia", "Network Security", "SecurityTech Press"},
    {9, 29.99, 2, "William Martinez", "Mobile App Development", "AppDev Books"},
    {10, 14.95, 5, "Olivia Robinson", "Machine Learning with Python", "DataPress Publications"},
    {11, 22.99, 7, "Daniel Wilson", "JavaScript Programming", "CodeMasters"},
    {12, 11.99, 8, "Ava White", "Data Analysis with R", "DataPress Publications"},
    {13, 39.95, 1, "Liam Johnson", "Deep Learning for Beginners", "AI Publishing"},
    {14, 16.99, 4, "Mia Miller", "Cybersecurity Basics", "SecurityTech Press"},
    {15, 29.99, 2, "James Davis", "Mobile Game Development", "AppDev Books"},
    {16, 14.95, 6, "Emma Harris", "Data Visualization with Python", "DataPress Publications"},
    {17, 17.99, 5, "Oliver Brown", "Web Design Principles", "Tech Books Inc."},
    {18, 24.99, 3, "Amelia Wilson", "Machine Learning Algorithms", "AI Publishing"},
    {19, 12.99, 7, "Lucas Martinez", "iOS App Development", "AppDev Books"},
    {20, 29.95, 2, "Charlotte Lee", "Computer Networks", "Tech Books Inc."},
    {21, 18.99, 4, "Benjamin Anderson", "Game Development with Unity", "AppDev Books"},
    {22, 34.95, 1, "Ava Robinson", "Cybersecurity in Practice", "SecurityTech Press"},
    {23, 21.99, 5, "William Jones", "Data Mining Techniques", "DataPress Publications"},
    {24, 19.99, 6, "Sophia Hernandez", "JavaScript Frameworks", "CodeMasters"},
    {25, 9.99, 10, "Liam Miller", "Introduction to Artificial Intelligence", "AI Publishing"},
    {26, 16.95, 4, "Aiden Wilson", "SQL for Beginners", "Tech Books Inc."},
    {27, 32.99, 2, "Mia Smith", "Mobile App UX Design", "AppDev Books"},
    {28, 14.99, 5, "Lucas Davis", "Python for Data Science", "DataPress Publications"},
    {29, 27.99, 3, "Olivia Garcia", "Game Design Principles", "AppDev Books"},
    {30, 19.95, 6, "Ethan Taylor", "Artificial Neural Networks", "AI Publishing"},
    {31, 13.99, 7, "Isabella Martinez", "Web Development Frameworks", "CodeMasters"},
    {32, 28.95, 2, "Noah Anderson", "Cybersecurity Essentials", "SecurityTech Press"},
    {33, 23.99, 4, "Emma Robinson", "Data Warehousing and BI", "DataPress Publications"},
    {34, 26.99, 5, "Daniel Miller", "Mobile App Monetization", "AppDev Books"},
    {35, 32.95, 1, "Oliver Davis", "Natural Language Processing", "AI Publishing"},
    {36, 17.99, 3, "Sophia White", "Web Development Best Practices", "CodeMasters"},
    {37, 29.99, 2, "Liam Wilson", "Cloud Computing Fundamentals", "Tech Books Inc."},
    {38, 15.99, 5, "Ava Smith", "Data Ethics and Privacy", "SecurityTech Press"},
    {39, 31.95, 2, "Lucas Davis", "Front-End Web Development", "AppDev Books"},
    {40, 18.99, 4, "Olivia Martinez", "Database Management Systems", "DataPress Publications"},
    {41, 24.95, 3, "William Garcia", "Machine Learning Applications", "AI Publishing"},
    {42, 12.99, 7, "Mia Smith", "Network Security Best Practices", "SecurityTech Press"},
    {43, 26.99, 2, "James Miller", "Game Development with Unity", "AppDev Books"},
    {44, 19.99, 5, "Emily Davis", "Data Science for Business", "DataPress Publications"},
    {45, 29.95, 4, "Ethan Johnson", "Mobile App Development with React Native", "AppDev Books"},
    {46, 34.95, 1, "Sophia White", "Cybersecurity Threats and Mitigation", "SecurityTech Press"},
    {47, 21.99, 6, "Lucas Anderson", "Data Analytics in Finance", "AI Publishing"},
    {48, 13.99, 8, "Isabella Robinson", "Web Design Principles", "Tech Books Inc."},
    {49, 25.99, 3, "Oliver Brown", "Data Science Tools and Libraries", "DataPress Publications"},
    {50, 27.95, 2, "Ava Johnson", "Machine Learning in Healthcare", "AI Publishing"},
};
