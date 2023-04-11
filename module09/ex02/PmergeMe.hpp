/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:49:26 by hbouqssi          #+#    #+#             */
/*   Updated: 2023/04/11 15:49:27 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <ctime>
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
    void insertionSort(std::vector<int> &vector);
    void insertionSort(std::deque<int> &deque);

};

#endif