#include<iostream>
using namespace std;

/*IMPLEMENTING QUEUE USING ARRAY AND POINTERS*/


class queue
{
    int *que, *front, *rear;

    public:

    queue()
    {
        que = new int[10];
        front = NULL;
        rear = NULL;
    }

    void eque(int);
    void deque();
    void display();
};

int main()
{

}