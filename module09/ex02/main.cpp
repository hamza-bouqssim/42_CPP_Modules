/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:48:42 by hbouqssi          #+#    #+#             */
/*   Updated: 2023/04/11 15:48:43 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
void printvector(std::vector<int> &vector, std::string string)
{
    std::cout << string + "  ";
    for (int i = 0; i < (int)vector.size(); i++) {
        std::cout << vector[i] << " ";
    }
}

void printdeque(std::deque<int> &deque, std::string string)
{
    std::cout << string + "  ";
    for (int i = 0; i < (int)deque.size(); i++) {
        std::cout << deque[i] << " ";
    }
}

int main(int argc, char** argv)
{
    clock_t t;
    PmergeMe P;
    std::vector<int> v;
    std::deque<int>d;
    if (argc < 3)
    {
        std::cout << "Error: This Program Works With Atleast Three Arguments !" << std::endl;
        return 0;
    }
    int i = 0;
    while (++i < argc)
    {
        std::string s(argv[i]);

        if (!P.is_number(s))
        {
            std::cout << "Error" << std::endl;
            return 1;
        }
        int n = std::atoi(s.c_str());

        v.push_back(n);
        d.push_back(n);
    }
    t = clock();
    printvector(v, "Before: ");
    std::cout << std::endl;
    P.mergeSortv(v);
    t = clock() - t;
    double timeVec = ((double)t) / CLOCKS_PER_SEC;
    t = clock();
    P.mergeSortd(d);
    t = clock() - t;
    double timeDeq = ((double)t) / CLOCKS_PER_SEC;
    printvector(v, "After:  ");
    std::cout << std::endl;
    std::cout << "Time to process a range of " << v.size() << " elements with std::vector : " << std::fixed << timeVec << std::endl;
    std::cout << "Time to process a range of " << d.size() << " elements with std::deque  : " << std::fixed << timeDeq << std::endl;
    return 0;
}
