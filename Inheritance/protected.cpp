#include <iostream>
using namespace std;

class BookList
{
private:
    string booklistName;

protected:
    string bookHouse;
    string showAble;

public:
    BookList(string name, string bh, string sb)
    {
        booklistName = name;
        bookHouse = bh;
        showAble = sb;
    }
    void Display()
    {
        cout << "You cannot see it except " << showAble << endl;
    }
};
int main()
{
    BookList b1("Some Extream Jouerney", "10 A,house", "publish date--2012");
    b1.Display();
    return 0;
}