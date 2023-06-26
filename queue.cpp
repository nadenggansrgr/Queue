#include <iostream>
#include <conio.h>
#define max 5

using namespace std;

int  index=-1;
int data[max];

bool isEmpty()
{
    if (index==-1)
    {
        return true;
    }else
    {
        return false;
    }
}

bool isFull()
{
    if (index==max-1)
    {
        return true;
    }else
    {
        return false;
    }
}

void enqueue()
{
    if(!isFull())
    {
        cout << "Masukkan nilai pada index ke-"<<index+1<<" : "; cin >> data[index+1];
        index++;
    }else
    {
        cout << "Tumpukan sudah penuh! " << endl;
    }
}

void dequeue()
{
    if(!isEmpty())
    {
        cout << "Data terkanan sudah diambil!" << endl;
        for (int i=0; i<index;i++)
        {
             data[i]=data[i+1];
        }

        index--;

    }else
    {
        cout << "Tumpukan kosong!" << endl;
    }
}
void display ()
{
    if (!isEmpty())
    {
        cout << endl;
        cout << "=================================" << endl;
        cout << "\t Tampilan Queue " << endl;
        cout << "=================================" << endl;
        for (int i=index; i>=0; i--)
        {
            cout << data[i] << " ";
        }
    }else
    {
        cout << "Tumpukan kosong!" << endl;
    }
}

int peek (int index)
{
    if (isEmpty())
    {
        cout << "Tumpukan kosong" << endl;
        return 0;
    }else
    {
        cout << "Tumpukan terkiri index ke-"<<index<<" dengan nilai "<< data[index];
        return 0;
    }
}

int main()
{
    int angka;
    char pilih;

    do
    {

    do
    {
        cout << "=================================" << endl;
        cout << "\t PROGRAM QUEUE" << endl;
        cout << "=================================" << endl;
        cout << "1. IsEmpty " << endl;
        cout << "2. IsFull " << endl;
        cout << "3. Enqueue " << endl;
        cout << "4. Dequeue " << endl;
        cout << "5. Display " << endl ;
        cout << "6. Peek " << endl << endl;
        cout << "Masukkan angka pilihan Anda : ";cin >> angka ;

        switch (angka)
        {
            case 1:
            if (isEmpty())
            {
                cout << "Tumpukan kosong !" << endl;
            }else
            {
                cout << "Tumpukan tidak kosong !" << endl;
            }
            getch();
            system ("cls");
            break;

            case 2:
            if (isFull())
            {
                cout << "Tumpukan penuh!" << endl;
            }else
            {
                cout << "Tumpukan tidak penuh!" << endl;
            }
            getch();
            system ("cls");
            break;

            case 3:
            enqueue();
            getch();
            system ("cls");
            break;

            case 4:
            dequeue();
            getch();
            system ("cls");
            break;

            case 5:
            display();
            getch();
            system ("cls");
            break;

            case 6:
            peek(index);
            getch();
            system ("cls");
            break;



        }
    }while (angka != 1 && angka != 2 && angka != 3 && angka != 4 && angka != 5 );

    cout << " Apakah Anda mau memilih lagi? [Y/T] : "; cin >> pilih;
    system ("cls");
    }while (pilih == 'Y' || pilih == 'y');



    return 0;
}
