#include "../include/MutantStack.hpp"

int main()
{
MutantStack<int> mstack;
mstack.push(1);
mstack.push(2);
std::cout << mstack.top() << std::endl;
mstack.pop();
std::cout << mstack.size() << std::endl;
mstack.push(3);
mstack.push(4);
mstack.push(5);
//[...]
mstack.push(6);
MutantStack<int>::iterator it = mstack.begin();
MutantStack<int>::iterator ite = mstack.end();
std::cout << "begin: " << *it << std::endl;
// std::cout << "end: " << *ite << std::endl; //this is wrong ad should never be direferenced

++it;
++it;
std::cout << "begin2: " << *it << std::endl;
--it;
--it;
while (it != ite)
{
	std::cout << *it << std::endl;
	++it;
}
std::stack<int> s(mstack);
return 0;
}

// int main()
// {
// std::list<int> mstack;
// mstack.push_back(1);
// mstack.push_back(2);
// std::cout << mstack.back() << std::endl;
// mstack.pop_back();
// std::cout << mstack.size() << std::endl;
// mstack.push_back(3);
// mstack.push_back(4);
// mstack.push_back(5);
// //[...]
// mstack.push_back(6);
// std::list<int>::iterator it = mstack.begin();
// std::list<int>::iterator ite = mstack.end();
// std::cout << "begin: " << *it << std::endl;
// // std::cout << "end: " << *ite << std::endl; //this is wrong ad should never be direferenced

// ++it;
// --it;
// std::cout << "begin2: " << *it << std::endl;
// while (it != ite)
// {
// std::cout << *it << std::endl;
// ++it;
// }
// std::stack<int> s(mstack);
// return 0;
// }