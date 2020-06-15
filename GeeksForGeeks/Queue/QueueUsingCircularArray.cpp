int Queue::push(int element)
{

    int size = getSize();

    // check for condition when queue is full
    if (isFull)
    {
        return -1;
    }

    // do operation when queue is not full.
    // Also, keep in mind of marking queue as
    // full when rear becomes equal to front
    else
    {

        arr[rear] = element;
        if ((rear + 1) % size == front % size)
            isFull = true;
        rear++;
    }

    return 1;
}

// Function to pop elements from Queue
int Queue::pop()
{

    int size = getSize();

    // check for the condition when queue is empty
    if (isEmpty())
    {
        return -1;
    }

    // If queue is not empty, do the required operation.
    // Also, keep in mind to unmark the flag which represents
    // queue is full or not
    else
    {

        front++;
        isFull = false;
    }

    return 1;
}