#include<iostream>
using namespace std;


class queue
{
    int *que, *front, *rear, *end;
    int size = 4;


    public:

    queue()
    {
        que = new int[size];
        front = NULL;
        rear = NULL;

        
        end = que;

        for(int i = 0; i<size-1; i++)
        {
            end++;

        }
    }

    void eque(int);
    
    void deque();
    void display();
};


int main()
{

}