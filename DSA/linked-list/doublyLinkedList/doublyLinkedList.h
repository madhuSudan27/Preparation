class ListNode{
    public:
    int data;
    ListNode* next;
    ListNode* back;

    ListNode(){
        data = 0;
        next = nullptr;
        back = nullptr;
    }
    ListNode(int data){
        this->data = data;
        next = nullptr;
        back = nullptr;
    }
    ListNode(int data, ListNode* next , ListNode* back){
        this->data = data;
        this->next = next;
        this->back = back;
    }

};
