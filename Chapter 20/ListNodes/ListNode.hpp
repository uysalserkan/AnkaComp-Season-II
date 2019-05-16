#ifndef LISTNODE_HPP
#define LISTNODE_HPP
template <typename NODETYPE>class List;
template <typename NODETYPE>
class ListNode {
	friend class List<NODETYPE>;
public:
	ListNode(const NODETYPE&);
	NODETYPE getData()const;
private:
	NODETYPE data;
	ListNode<NODETYPE>* nextptr;
};

template <typename NODETYPE>
ListNode <NODETYPE>::ListNode(const NODETYPE& info) :data(info), nextptr(0) {

}

template <typename NODETYPE>
NODETYPE ListNode<NODETYPE>::getData()const {
	return data;
}

#endif //LISTNODE_HPP