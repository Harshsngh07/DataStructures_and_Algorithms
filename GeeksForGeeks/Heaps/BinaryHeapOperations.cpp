int MinHeap::extractMin() {
    // Your code here
    if(heap_size <=0)
        return -1;
    if(heap_size == 1)
    {
        heap_size--;
        return harr[0];
    }
    
    int root = harr[0];
    harr[0] = harr[heap_size-1];
    heap_size--;
    MinHeapify(0);
    return root;
}

/* Removes element from position x in the min heap  */
void MinHeap::deleteKey(int i) {
    // Your code here
    if(i<heap_size)
    {
        decreaseKey(i,INT_MIN);
        extractMin();
    }
}

/* Inserts an element at position x into the min heap*/
void MinHeap::insertKey(int k) {
    // Your code here
    if(heap_size == capacity)
    {
        cout<< "\nOverflow: Could not insertKey\n";
        return;
    }
    
    heap_size++;
    int i = heap_size - 1;
    harr[i] = k;
    
    while(i!=0 && harr[parent(i)] > harr[i])
    {
        swap(harr[i], harr[parent(i)]);
        i = parent(i);
    }
    
}
