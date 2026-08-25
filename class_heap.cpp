#include <bits/stdc++.h>
using namespace std;

vector<int> heap;

void heapifyDown(int i) {
    int n = heap.size();
    while (true) {
        int largest = i, l = 2*i+1, r = 2*i+2;
        if (l < n && heap[l] > heap[largest]) largest = l;
        if (r < n && heap[r] > heap[largest]) largest = r;
        if (largest == i) break;
        swap(heap[i], heap[largest]);
        i = largest;
    }
}

void heapifyUp(int i) {
    while (i > 0 && heap[(i-1)/2] < heap[i]) {
        swap(heap[(i-1)/2], heap[i]);
        i = (i-1)/2;
    }
}

void insert(int val) {
    heap.push_back(val);
    heapifyUp(heap.size()-1);
}

void deleteAt(int i) {
    int n = heap.size();
    heap[i] = heap[n-1];
    heap.pop_back();
    n--;
    if (i < n) {
        heapifyDown(i);
        heapifyUp(i);
    }
}

void deleteValue(int val) {
    for (int i = 0; i < heap.size(); i++) {
        if (heap[i] == val) {
            deleteAt(i);
            return;
        }
    }
    cout << "Value not found\n";
}

void printHeap() {
    cout << "Heap: ";
    for (int x : heap) cout << x << " ";
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        insert(x);
    }

    printHeap();

    while (true) {
        cout << "Enter -1 to stop ";
        int val;
        cin >> val;
        if (val == -1) break;

        deleteValue(val);
        printHeap();
    }
    printHeap();

    return 0;
}