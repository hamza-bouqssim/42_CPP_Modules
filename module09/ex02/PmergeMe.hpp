#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
class PmergeMe{
    public:
    PmergeMe();
    PmergeMe(const PmergeMe &_PmergeMe);
    PmergeMe &operator= (const PmergeMe &_PmergeMe);
    ~PmergeMe();

    //Methods
    int is_number(std::string arg);
    void mergev(std::vector<int>&leftArray, std::vector<int>&rightArray, std::vector<int>&vector);
    void merged(std::deque<int>&leftArray, std::deque<int>&rightArray, std::deque<int>&deque);
    void mergeSortv(std::vector<int> &vector);
    void mergeSortd(std::deque<int> &deque);

};

#endif