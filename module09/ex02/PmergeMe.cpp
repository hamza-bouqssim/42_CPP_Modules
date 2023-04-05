#include "PmergeMe.hpp"
PmergeMe::PmergeMe()
{

};
PmergeMe::~PmergeMe()
{

};

PmergeMe::PmergeMe(PmergeMe const &_PmergeMe)
{
    *this = _PmergeMe;
};

PmergeMe &PmergeMe::operator=(PmergeMe const &_PmergeMe)
{
	(void)_PmergeMe;
    return (*this);
};

int PmergeMe::is_number(std::string arg)
{
    int i = -1;
    while(++i < (int)arg.size())
    {
        if(!std::isdigit(arg[i]))
            return 0;
    }
    return 1;
}

void PmergeMe::mergev(std::vector<int>&leftArray, std::vector<int>&rightArray, std::vector<int>&vector)
{
    std::vector<int>leftSize(vector.size() / 2);
    std::vector<int>rightSize(vector.size() - (vector.size() / 2));
    int i = 0, left = 0, right = 0;
    while(left < (int)(vector.size() / 2)  && right < (int)(vector.size() - (vector.size() / 2)))
    {
        if (leftArray[left] < rightArray[right])
        {
            vector[i] = leftArray[left];
            i++;
            left++;
        }
        else{
            vector[i] = rightArray[right];
            i++;
            right++;
        }
    }
    while(left < (int)vector.size() / 2)
    {
        vector[i] = leftArray[left];
        i++;
        left++;
    }
    while(right < (int)(vector.size() - (vector.size() / 2)))
    {
        vector[i] = rightArray[right];
        i++;
        right++;
    }
}
void PmergeMe::mergeSortv(std::vector<int> &vector)
{
    if (vector.size() <= 1)
        return;
    std::vector<int>leftArray(vector.size() / 2);
    std::vector<int>rightArray(vector.size() - (vector.size() / 2));
    int i = 0;
    int j = 0;
    while(i < (int)vector.size())
    {
        if (i < (int)vector.size() / 2)
            leftArray[i] = vector[i];
        else
        {
            rightArray[j] = vector[i];
            j++;
        }
        i++;
    }
    mergeSortv(leftArray);
    mergeSortv(rightArray);
    mergev(leftArray, rightArray, vector);
}
void PmergeMe::merged(std::deque<int>&leftArray, std::deque<int>&rightArray, std::deque<int>&deque)
{
    std::deque<int>leftSize(deque.size() / 2);
    std::deque<int>rightSize(deque.size() - (deque.size() / 2));
    int i = 0, left = 0, right = 0;
    while(left < (int)(deque.size() / 2)  && right < (int)(deque.size() - (deque.size() / 2)))
    {
        if (leftArray[left] < rightArray[right])
        {
            deque[i] = leftArray[left];
            i++;
            left++;
        }
        else{
            deque[i] = rightArray[right];
            i++;
            right++;
        }
    }
    while(left < (int)deque.size() / 2)
    {
        deque[i] = leftArray[left];
        i++;
        left++;
    }
    while(right < (int)(deque.size() - (deque.size() / 2)))
    {
        deque[i] = rightArray[right];
        i++;
        right++;
    }
}
void PmergeMe::mergeSortd(std::deque<int> &deque)
{
    if (deque.size() <= 1)
        return;
    std::deque<int>leftArray(deque.size() / 2);
    std::deque<int>rightArray(deque.size() - (deque.size() / 2));
    int i = 0;
    int j = 0;
    while(i < (int)deque.size())
    {
        if (i < (int)deque.size() / 2)
            leftArray[i] = deque[i];
        else
        {
            rightArray[j] = deque[i];
            j++;
        }
        i++;
    }
    mergeSortd(leftArray);
    mergeSortd(rightArray);
    merged(leftArray, rightArray, deque);
}