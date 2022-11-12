#include <iostream>
#include <iomanip>
#include <cstring>
#include <conio>
#include <fstream>
int line = 0, entry = 0, mem = 1, log = 0, no, id;
class library
{
public:
    void header();
    void footer();
} obj;
class books : public library
{
protected:
    char name[20], author[20];

public:
    int code, stat;
    void update(ofstream &fout)
    {
        fout << code << ' ' << name << ' ' << author << ' ' << stat << endl;
    }
    friend void book_display();
} bks[10];
class users : public books
{
protected:
    char name[20];
    int rollno, member_id;

public:
    int take, tcode;
    void welcome()
    {
        cout << setw(40) << "WELCOME " << name;
    }
    void read(ifstream &fin)
    {
        fin >> member_id >> rollno >> name >> take >> tcode >> mem;
    }
    void update(ofstream &fout)
    {
        fout << member_id << ' ' << rollno << ' ' << name << ' ' << take << ' ' << tcode << ' ' << mem << endl;
    }
    void login()
    {
        if (no == rollno && id == member_id)
            entry = 1;
    }
    void add()
    {
        obj.header();
        cout << endl
             << setw(48) << "ADD MEMBER\n\n";
        cout << setw(50) << "Enter Member ID :";
        cin >> member_id;
        cout << setw(50) << "Enter Roll number:";
        cin >> rollno;
        cout << setw(50) << "Enter Name    :";
        cin >> name;
        obj.footer();
        take = 0;
        tcode = 0;
        mem++;
    }
    void display()
    {
        cout << member_id << '\t' << rollno << '\t' << name << '\t'; //<<"\t\t"<<take<<'\t'<<tcode<<endl;
        if (tcode == 0)
        {
            cout.setf(ios::right);
            cout.width(15);
            cout << "No" << endl;
        }
        else
        {
            cout.setf(ios::right);
            cout.width(15);
            cout << tcode << endl;
        }
    }
};
class admins : public users
{
protected:
    char user[20], passwd[30];

public:
    admins()
    {
        strcpy(user, "gokul");
        strcpy(passwd, "gokul");
    }
    void login();
};
void library::header()
{
    int i;
    clrscr();
    for (i = 0; i < 5; i++)
        cout << endl;
    for (i = 0; i < 80; i++)
        cout << "*";
    cout << "*" << setw(48) << "Digital Library" << setw(31) << "*";
    cout << "*" << setw(44) << "KCE, CBE" << setw(35) << "*";
    for (i = 0; i < 80; i++)
        cout << "*";
    line = 0;
}
void library::footer()
{
    int i;
    for (i = line; i < 10; i++)
        cout << endl;
    for (i = 0; i < 80; i++)
        cout << "*";
}
void admins::login()
{
    int i = 0;
    char c, name[20], passwrd[20];
    cout << "\n\n"
         << setw(51) << "ADMINISTRATOR LOGIN";
    cout << "\n\n"
         << setw(40) << "username:";
    cin >> name;
    cout << setw(40) << "Password:";
    while ((c = getch()) != 13)
    {
        passwrd[i++] = c;
        cout << '*';
    }
    passwrd[i] = '\0';
    if ((strcmp(user, name) == 0) && (strcmp(passwd, passwrd) == 0))
    {
        entry = 1;
    }
    else
    {
        entry = 0;
        cout << endl
             << setw(55) << "Incorrect username/password";
        line = line + 6;
        obj.footer();
        getch();
    }
}
void book_display();
int main()
{
    int i, login;
    users student[10];
    ifstream fin("members.txt");
    for (i = 0; i < mem; i++)
        student[i].read(fin);
    fin.close();
    obj.header();
    cout << endl
         << endl
         << setw(45) << "LOGIN AS\n"
         << endl
         << setw(50) << "1. Administrator\n"
         << setw(44) << "2. Student\n"
         << setw(40) << "3. Exit";
    line = line + 6;
    obj.footer();
    cout << endl
         << setw(47) << "Enter choice:";
    cin >> login;
    switch (login)
    {
    case 1:
    {
        admins admin;
        obj.header();
        admin.login();
        if (entry)
        {
            int choice;
            do
            {
                obj.header();
                cout << "Welcome Gokul," << setw(66) << "0-Logout";
                cout << "\n"
                     << setw(50) << "Adminstrator Menu";
                cout << "\n\n"
                     << setw(49) << "1.View members";
                cout << "\n"
                     << setw(48) << "2.Add members";
                cout << "\n"
                     << setw(51) << "3.Delete members";
                cout << "\n"
                     << setw(47) << "4.View books";
                line = line + 7;
                obj.footer();
                cout << endl
                     << setw(50) << "Enter your choice:";
                cin >> choice;
                switch (choice)
                {
                case 0:
                    break;
                case 1:
                {
                    int i;
                    obj.header();
                    cout << setw(47) << "Members List" << endl;
                    cout << "\t\tID\tRoll\tName" << setw(30) << "Book taken" << endl;
                    for (i = 0; i < mem; i++)
                    {
                        cout << "\t\t";
                        student[i].display();
                    }
                    line = line + mem + 2;
                    obj.footer();
                    getch();
                    break;
                }
                case 2:
                {
                    student[mem].add();
                    break;
                }
                case 3:
                {
                    int i, del;
                    obj.header();
                    cout << setw(47) << "Members List" << endl;
                    cout << "\tS.No\tID\tRoll\tName" << setw(30);
                    cout << "Book taken" << endl;
                    for (i = 0; i < mem; i++)
                    {
                        cout << "\t" << i + 1 << "\t";
                        student[i].display();
                    }
                    line = line + mem + 2;
                    obj.footer();
                    cout << setw(47) << "Enter your choice:";
                    cin >> del;
                    ofstream out("members.txt");
                    int j = mem;
                    mem--;
                    for (i = 0; i < j; i++)
                    {
                        if (i + 1 != del)
                            student[i].update(out);
                    }
                    out.close();
                    ifstream fin("members.txt");
                    for (i = 0; i < mem; i++)
                        student[i].read(fin);
                    fin.close();
                    break;
                }
                case 4:
                {
                    obj.header();
                    book_display();
                    obj.footer();
                    getch();
                    break;
                }
                default:
                {
                    cout << endl
                         << setw(55) << "Enter a valid choice...";
                    getch();
                }
                }
                ofstream out("members.txt");
                for (i = 0; i < mem; i++)
                    student[i].update(out);
                out.close();
            } while (choice != 0);
            entry = 0;
        }
        main();
        break;
    }
    case 2:
    {
        obj.header();
        int i;
        cout << "\n\n"
             << setw(48) << "STUDENT LOGIN";
        cout << "\n\n"
             << setw(43) << "Member ID:";
        cin >> id;
        cout << setw(43) << "Roll no:";
        cin >> no;
        for (i = 0; i < mem; i++)
        {
            log = i;
            student[log].login();
            if (entry == 1)
                break;
            else if (entry == 0 && i + 1 == mem)
            {
                entry = 0;
                cout << endl
                     << setw(52) << "Incorrect ID/Roll no";
                line = line + 7;
                obj.footer();
                getch();
            }
        }
        if (entry)
        {
            int choice;
            do
            {
                obj.header();
                cout << "Take/Return" << setw(69) << "0-Logout";
                student[log].welcome();
                book_display();
                line = line + 1;
                obj.footer();
                cout << "Taken books/book code:" << student[log].tcode;
                cout << setw(25) << "Enter your choice:";
                cin >> choice;
                if (bks[choice - 1].stat == 1 && student[log].take == 0)
                {
                    bks[choice - 1].stat = 0;
                    student[log].take = 1;
                    student[log].tcode = bks[choice - 1].code;
                    obj.header();
                    cout << "\n\n"
                         << setw(55) << "Book taken successfully...\n";
                    cout << endl
                         << setw(60) << "Return the book before 15 days.";
                    cout << endl
                         << setw(60) << "A fine of Rs.1 will be collected\n";
                    cout << setw(60) << "for each day after the due date.";
                    line = line + 6;
                    obj.footer();
                    getch();
                }
                else if (bks[choice - 1].stat == 0 && student[log].take == 1 && student[log].tcode == bks[choice - 1].code)
                {
                    int days, fine = 0;
                    bks[choice - 1].stat = 1;
                    student[log].take = 0;
                    student[log].tcode = 0;
                    obj.header();
                    cout << "\n\n"
                         << setw(48) << "Book Return\n\n";
                    cout << setw(50) << "Enter number of days:";
                    cin >> days;
                    if (days > 15)
                    {
                        fine = days - 15;
                        cout << "\n\n"
                             << setw(47) << "Fine amount:" << fine;
                    }
                    else
                        cout << "\n\n"
                             << setw(55) << "Book returned successfully";
                    line = line + 7;
                    obj.footer();
                    getch();
                }
                else
                {
                    if (choice)
                    {
                        obj.header();
                        cout << "\n\n"
                             << setw(53) << "unable to take/return";
                        cout << endl
                             << setw(53) << "Possible reasons:\n";
                        cout << endl
                             << setw(56) << "- Return the taken book";
                        cout << endl
                             << setw(60) << "- Book may not be available";
                        line = line + 6;
                        obj.footer();
                        getch();
                    }
                }
                ofstream fout("books.txt");
                for (i = 0; i < 10; i++)
                {
                    bks[i].update(fout);
                }
                fout.close();
                ofstream out("members.txt");
                for (i = 0; i < mem; i++)
                    student[i].update(out);
                out.close();
            } while (choice != 0);
        }
        entry = 0;
        main();
        break;
    }
    case 3:
    {
        return 0;
    }
    default:
    {
        cout << setw(52) << "Enter a valid option!";
        getch();
        main();
        break;
    }
    }
    return 0;
}
void book_display()
{
    int i;
    ifstream fin("books.txt");
    for (i = 0; i < 10; i++)
        fin >> bks[i].code >> bks[i].name >> bks[i].author >> bks[i].stat;
    cout << endl
         << "S.No\tCode\tName\t\t\tAuthor" << setw(34) << "Available";
    for (i = 0; i < 10; i++)
    {
        cout << " " << i + 1 << '\t' << bks[i].code << "\t" << bks[i].name << "\t\t" << bks[i].author;
        if (bks[i].stat == 1)
        {
            cout.setf(ios::right);
            cout.width(10);
            cout << "\t\tYes\n";
        }
        else
        {
            cout.setf(ios::right);
            cout.width(10);
            cout << "\t\tNo\n";
        }
    }
    line = 10;
}