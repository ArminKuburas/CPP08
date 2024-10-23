/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:39:39 by akuburas          #+#    #+#             */
/*   Updated: 2024/10/24 00:04:46 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <algorithm>
#include <iostream>
#include <exception>
#include <ctime>
#include <cstdlib>

class Span
{
	public:
		Span();
		Span(unsigned int n);
		Span(const Span& copy);
		
		~Span();
		
		Span& operator=(const Span& obj);
		
		void addNumber(int number);
		void addRange(int start, int end);
		void addAmount(int amount);
		
		int shortestSpan() const;
		int longestSpan() const;
		
		class SpanFullException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class SpanNoSpanException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
	private:
		unsigned int _n;
		std::vector<int> _numbers;
};