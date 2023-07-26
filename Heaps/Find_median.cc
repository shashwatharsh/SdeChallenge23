// 295. Find Median from Data Stream

class MedianFinder {
    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;
public:
    MedianFinder() {
        
    }
    
    void addNum(int num) {
         if(maxHeap.size() == 0 || maxHeap.top() >= num) maxHeap.push(num);
        else minHeap.push(num);
        balancingHeaps();
        
    }
    
    double findMedian() {
        if(maxHeap.size() > minHeap.size()) return maxHeap.top();
        else if(minHeap.size() > maxHeap.size()) return minHeap.top();
        else return (maxHeap.top() + minHeap.top()) / 2.0;
        
    }
    void balancingHeaps(){
        if (maxHeap.size() > minHeap.size() + 1) {
			minHeap.push(maxHeap.top());
			maxHeap.pop();
		} else if (minHeap.size() > maxHeap.size() + 1) {
			maxHeap.push(minHeap.top());
			minHeap.pop();
		}

    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */