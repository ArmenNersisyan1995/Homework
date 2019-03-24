#include<iostream>

class List {
 
    struct Node {
        Node* next;
        int value;
        // Node (void) {
        //     std::cout<< "Node contructor" <<std::endl;
        // }        
        // ~Node (void) {
        //     std::cout<< "Node destructor" <<std::endl;
        // }
    };

    int size;
    Node* head;
    Node* tail;

    public:

    List (int value) {
        Node* newNode = new Node();
        newNode -> value = value;
        this -> size = 1;
        this -> head = newNode;
        this -> tail = newNode;
        this -> tail -> next = nullptr;
    }

    List (void) {
        this -> size = 0;
        this -> head = nullptr;
        this -> tail = nullptr;
    }

    List (List& list) {
        if( list.get_size() == 0) {
            this -> size = 0;
            this -> head = nullptr;
            this -> tail = nullptr;
            return;
        }
        this -> size = list.get_size();
        Node* newHead = new Node();
        this -> head = newHead;
        newHead -> value = list.get_at_index(0);
        if(list.get_size() == 1) {
            this -> tail = newHead;
            return;
        }
        Node* temp = this -> head;
        for(int i = 1; i < list.get_size(); ++i) {
            Node* newNode = new Node();
            newNode -> value = list.get_at_index(i);
            temp -> next = newNode;
            newNode -> next = nullptr;
            temp = temp -> next;
        }
        this -> tail = temp;
    }

    ~List (void) {
        Node* temp = this -> head;
        for(int i = 0; i < size; i++) {
            temp = temp -> next;
            delete head;
            head = temp;
        }
        head = nullptr;
        tail = nullptr;
    }

    int get_size (void) {
        return this -> size;
    }

    void push_back (int value) {
        Node* newNode = new Node();
        newNode -> value = value;
        if (size == 0) {
            head = newNode;
            tail = newNode;
        } else {
            tail -> next = newNode;
            tail = newNode;
            newNode -> next = nullptr;
        }
        ++size;
    }

    void pop (void) {
        if (this -> size == 0) {
            std::cout<< "The list is empty" <<std::endl;
            return;
        }
        Node* temp = this -> head;
        for (int i = 1; i < size - 1; ++i) {
            temp = temp -> next;
        }
        Node* tmp = this -> tail;
        this -> tail = temp;
        delete tmp;
        --size;
    }

    int get_at_index (int index) {
        if (index < 0) {
            std::cout<< "Index cannot be negative,so the function will return 0" <<std::endl;
            return 0;
        } else if (index >= size && index != 0) {
            std::cout<< "Index must be smaller size,so the function will return 0" <<std::endl;
            return 0;
        } else if (index == 0 && size == 0) {
            std::cout<< "The list is empty,so the function will return 0" <<std::endl;
            return 0;
        } else if (index == 0 && size > 0) {
            return this -> head -> value;
        } else {
            Node* temp = this -> head;
            for (int i = 0; i < index; ++i) {
                temp = temp -> next;
            }
            return temp -> value;
        }
    }

    void set_at_index (int index, int value) {
        if (index < 0) {
            std::cout<< "Index cannot be negative,so the function will return 0" <<std::endl;
            return;
        } else if (index > size && index != 0) {
            std::cout<< "Index must be smaller or equally size,so the function will return 0" <<std::endl;
            return;
        } else if (index == size && index != 0) {
            this -> push_back(value);
        } else if (index == 0 && size == 0) {
            Node* newNode = new Node();
            newNode -> value = value;
            this -> head = newNode;
            this -> tail = newNode;
            ++size;
        } else {
            Node* temp = this -> head;
            for(int i = 0; i < index; ++i) {
                temp = temp -> next;
            }
            temp -> value = value;
        }
    }

    void insert_at_index (int index, int value) {
        if (index < 0) {
            std::cout<< "Index cannot be negative" <<std::endl;
            return;
        } else if (index > size && index != 0) {
            std::cout<< "Index must be smaller or equally size" <<std::endl;
            return;
        } else if (index == size && index != 0) {
            this -> push_back(value);
            return;
        }
        Node* newNode = new Node();
        newNode -> value = value;
        if (index == 0 && size == 0) {
            this -> head = newNode;
            this -> tail = newNode;
            newNode -> next = nullptr;
        } else if (index == 0 && size > 0) {
            this -> head = newNode;
            newNode -> next = nullptr;
        } else {
            Node* temp = this -> head;
            for (int i = 0; i < index - 1; ++i) {
                temp = temp -> next;
            }
            newNode -> next = temp -> next;
            temp -> next = newNode;
            this -> tail = newNode;
        }
        ++size;
    }

    void remove_at_index (int index) {
        if (index < 0) {
            std::cout<< "Index cannot be negative" <<std::endl;
            return;
        } else if (index >= size && size != 0) {
            std::cout<< "Index must be smaller size" <<std::endl;
            return;
        } else if(this -> size == 0) {
            std::cout<< "The list is empty" <<std::endl;
            return;
        }
        Node* temp = this -> head;
        if (size == 1) {
            delete head;
            this -> head == nullptr;
            this -> tail == nullptr; 
            delete temp;
        } else if (size == 2 && index == 1) {
            temp = temp -> next;
            this -> tail == this -> head;
            delete temp;
        } else if (size == 2 && index == 0) {
            this -> head = this -> tail;
            delete temp;
        } else if (index == 0) {
            this -> head = this -> head -> next;
            delete temp;
        } else {
            for(int i = 0; i < index -1; ++i) {
                temp = temp -> next;
            }
            Node* tmp = temp -> next;
            temp -> next = tmp -> next;
            this -> tail = temp;
            delete tmp;
        }
        --size;
    }

    int get_max (void) {
        //TODO
    }

    int get_min (void) {
        //TODO
    }

    void sort_by_descending (void) {
        //TODO
    }

    void sort_by_ascending (void) {
        //TODO
    }

    void revers (void) {
        //TODO
    }

    int is_append (int value) {
        //TODO
    }

    void print () {
        if (this -> size == 0) {
            std::cout<< "============================" <<std::endl;
            std::cout<< "List size = " << this -> size <<std::endl;
            std::cout<< "The list is empty" <<std::endl;
            std::cout<< "============================" <<std::endl;
            return;
        }
        Node* temp = head;
        std::cout<< "============================" <<std::endl;
        std::cout<< "List size = " << this -> size <<std::endl;
        if (temp -> next == nullptr) {
            std::cout<< "List value -> " << temp -> value <<std::endl;    
        } else {
            std::cout<< "List values -> ";
            for(int i = 0; i < size; ++i) {
                std::cout<< temp -> value << "  ";
                temp = temp -> next;
            }
            std::cout<<"\n";
        }
        std::cout<< "============================" <<std::endl;
    }
};

int main() {
    
    List list;

    for(int i = 0; i < 10; ++i) {
        list.push_back(i);
    }

    list.print();
    
    return 0;
}