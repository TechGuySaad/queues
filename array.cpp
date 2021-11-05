#include<iostream>

using namespace std;

/*QUEUE IMPLEMENTATION USING ARRAYS AND USING INDEXES*/

class queue
{
    int *arr;//dynamic array
    int front, rear, size;//front and rear are the indexes of the front and rear of the queue
    public:
        queue()
        {
            size = 5;
            arr = new int[size];
            front = rear = -1; // when queue is empty the index is invalid
        }
        
        void enqueue(int);
        void dequeue();
        void display();


};

void queue::enqueue(int x) // start filling from first index of array and fills 
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

void queue::dequeue()
{ 
    
    if(rear == -1)
    {
        cout<<"queue underflow. \n";
        return;
    }

    if(front == rear)
    {
        rear = -1;
        front = -1;
        return;
    }

    


    front++;
    
}

void queue:: display()
{
    int f =front;

    if(front == -1 && rear == -1)
    {
        cout<<"nothing to display from the queue\n";
        return;
    }

    if(front == rear)
    {
        cout<<arr[front];
        cout<<endl;
        return;
    }
   
    while(front!= rear)
    {
        cout<< arr[front]<<",";
        front++;

        if(front == rear)
        {
            cout << arr[rear]<<",\n";
            front =f;
            return;
        }
    }
    cout<<endl;
}



int main()
{
    queue obj;

    obj.enqueue(1);
    obj.enqueue(2);
    obj.enqueue(3);
    obj.enqueue(4);
    obj.enqueue(5);
    obj.display();

    obj.dequeue(); //removing 1
    obj.display();

    obj.dequeue();//removing 2
    obj.display();

    obj.dequeue();//removing 3
    obj.display();

    obj.dequeue();//removing 4
    obj.display();

    obj.dequeue();// removing 5, empties the queue
    obj.display();



    
    
   
    



}