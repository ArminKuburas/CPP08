/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:00:17 by akuburas          #+#    #+#             */
/*   Updated: 2024/10/23 20:52:28 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <set>
#include <list>

int main(void)
{
	// Test with std::vector (Sequential Container)
	std::vector<int> vec = {10, 20, 30, 40, 50};
	std::cout << "Testing with std::vector:" << std::endl;
	try
	{
		std::cout << "Found: " << easyfind(vec, 30) << std::endl;
		std::cout << "Found: " << easyfind(vec, 60) << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	// Test with std::set (Associative Container)
	std::set<int> mySet = {10, 20, 30, 40, 50};
	std::cout << "\nTesting with std::set:" << std::endl;
	try
	{
		std::cout << "Found: " << easyfind(mySet, 20) << std::endl;
		std::cout << "Found: " << easyfind(mySet, 25) << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	// Test with std::list (Sequential Container)
	std::list<int> myList = {100, 200, 300, 400, 500};
	std::cout << "\nTesting with std::list:" << std::endl;
	try
	{
		std::cout << "Found: " << easyfind(myList, 300) << std::endl;
		std::cout << "Found: " << easyfind(myList, 600) << std::endl;
	} catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}