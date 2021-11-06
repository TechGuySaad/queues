#include<iostream>
using namespace std;

/*IMPLEMENTING QUEUE USING ARRAY AND POINTERS*/


class queue
{
    int *que, *front, *rear, *end;
    int size = 3;


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




void queue :: eque(int x)
{
    if (rear == end)
    {
        cout<<"Queue overflow. \n";
        return;

    }

    if(rear == NULL)
    {
        rear = que;
        front = que;
        *rear = x;
        return;
    }

    rear++;
    *rear = x;
}


void queue :: deque()
{
    
    if(front == NULL && rear == NULL)
    {
        cout<<"Queue underflow.\n";
        return;
    }


    if(front != end)
    {
        front++;
        return;
 
    }

    if (front == end)
    {
        front = NULL;
        rear = NULL;
        return;
    }

}

void queue:: display()
{
    int *f;
    f = front;

    if(front == NULL && rear == NULL)
    {
        cout<<"Nothing to print.\n";
        return;

    }

    
    
    while(front != rear)
    {
        cout<<*front<<",";
        front++;
        if(front == rear)
        {
            cout<<*front<<",\n";
            front = f;
            return;


        }
    }

    if(front == rear)
    {
        cout<<"{"<<*front<<"}\n";
        front = f;
        return;


    }
}

int main()
{
    queue obj;

    obj.eque(1);
    obj.eque(2);
    obj.eque(3);
    obj.display();
    obj.deque();
    obj.display();
    obj.deque();
    obj.display();
    obj.deque();
    obj.display();
    




    
    

    
    



}