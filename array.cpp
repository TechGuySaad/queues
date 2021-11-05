#include<iostream>

using namespace std;

class queue
{
    int *arr;
    int front, rear, size;
    public:
        queue()
        {
            size = 5;
            arr = new int[size];
            front = rear = -1;
        }
        
        void enqueue(int);
        int dequeue();
        void display();


};

void queue::enqueue(int x)
{
    if(rear = size-1)
    {
        cout<<"Queue overflow"<<endl;
        return;
    }


}

int main()
{

}