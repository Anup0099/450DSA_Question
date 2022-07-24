struct Minheap{
    int  size;
    int arr[size];
    int capacity;
    Minheap(int c){
        arr=new int[c];
        size=0;
        capacity=c;

    }
    int left(int i){
        return (2*1+1);
    }
    int right(int i){
        return (2*1+2);
    }
    int parent(int i){
        return (i-1)/2;
    }
};


int main(){
    
}