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
    if(rear == size-1)
    {
        cout<<"Queue overflow"<<endl;
        return;
    }

    if (rear == -1 && front == -1) 
    { 
        rear++; 
        front++; 
        arr[rear] = x;
        return;

    }

    rear++;
    arr[rear] = x;



}

void queue::display()
{
    if(rear == -1)
    {
        cout<<"Array is empty.\n";
    }

    cout<<"{";
    while(rear != front)
    {
        cout<<arr[front]<<",";
        front++;
            if(rear == front)
            {
                cout<<arr[front]<<",";
                cout<<"}\n";
                return;
            }
    }
}

int main()
{
    queue obj;

    obj.enqueue(1);
    obj.enqueue(2);
    obj.display();


}