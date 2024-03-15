#include <iostream>
#include <string>

using namespace std;

class BookStore
{
private:
    int id;
    string author;
    string title;
    string publisher;
    float price;
    int stock;

public:
    BookStore()
    {
    }

    BookStore(int id, string author, string title, string publisher, float price, int stock)
    {
        this->id = id;
        this->author = author;
        this->title = title;
        this->publisher = publisher;
        this->price = price;
        this->stock = stock;
    }

    int getId()
    {
        return id;
    }

    void setId(int id)
    {
        this->id = id;
    }

    string getAuthor()
    {
        return author;
    }

    void setAuthor(string author)
    {
        this->author = author;
    }

    void setTitle(string title)
    {
        this->title = title;
    }

    string getTitle()
    {
        return title;
    }

    void setPublisher(string publisher)
    {
        this->publisher = publisher;
    }

    string getPublisher()
    {
        return publisher;
    }

    float getPrice()
    {
        return price;
    }

    void setPrice(float price)
    {
        this->price = price;
    }

    int getStock()
    {
        return stock;
    }

    void setStock(int stock)
    {
        this->stock = stock;
    }

    void printBook()
    {
        cout << endl;
        cout << "----------Printing Book Details----------" << endl;
        cout << "Id=" << id << endl;
        cout << "Author=" << author << endl;
        cout << "Title=" << title << endl;
        cout << "Publisher=" << publisher << endl;
        cout << "Price=" << price << endl;
        cout << "Stock=" << stock << endl;
        cout << "-----------------------------------------" << endl;
    }
};

int main()
{

    BookStore books[5] = {
        BookStore(101, "E. Balagurusamy", "C++ Guide", "Packt", 848.3, 43),
        BookStore(654, "William Stallings", "Operating Systems", "Tata McGraw-Hill", 432, 50),
        BookStore(345, "Bruce Eckel", "Thinking in Java", "Packt", 654.5, 12),
        BookStore(987, "Ron Patton", "Software Testing", "Wordpress", 2112.0, 22),
        BookStore(232, "Rahul Joshi", "Design Patterns", "Tata McGraw-Hill", 848.33, 98)};

    int stock = 0;
    int id = 0;
    bool found = false;

    cout << "Enter Book Id." << endl;
    cin >> id;

    cout << "Enter Order Quantity." << endl;
    cin >> stock;

    for (int i = 0; i < 5; i++)
    {
        // check whether book exists
        if (id == books[i].getId())
        {
            found = true;
            // check if stock is enough
            if (books[i].getStock() - stock >= 0)
            {
                cout << "Book Order Confirmed." << endl;
                books[i].setStock(books[i].getStock() - stock);
            }
            // stock is not enough
            else
            {
                cout << "Required copies are not in stock." << endl;
            }
            break;
        }
        // book not found in this iteration
        else
            found = false;
    }

    if (!found)
    {
        cout << "Required Book was not found in stock." << endl;
    }

    return 0;
}