template <class T>
class LList{
    LListNode<T>* head;
    LListNode<T>* recursiveCopy(LListNode<T>* rhs);
public:
    LList() :head(nullptr){}
    LList(const LList& rhs) :head(nullptr ){*this = rhs; }