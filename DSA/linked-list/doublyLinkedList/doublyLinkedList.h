class ListNode{
    public:
    int data;
    ListNode* next;
    ListNode* prev;

    ListNode(){
        data = 0;
        next = nullptr;
        prev = nullptr;
    }
    ListNode(int data){
        this->data = data;
        next = nullptr;
        prev = nullptr;
    }

};