/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:39:44 by akuburas          #+#    #+#             */
/*   Updated: 2024/10/23 23:57:17 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _n(0)
{
}

Span::Span(unsigned int n) : _n(n)
{
}

Span::Span(const Span& copy)
{
	*this = copy;
}

Span::~Span()
{
}

Span& Span::operator=(const Span& obj)
{
	if (this == &obj)
		return *this;
	_n = obj._n;
	_numbers = obj._numbers;
	return *this;
}

void Span::addNumber(int number)
{
	if (_numbers.size() >= _n)
		throw SpanFullException();
	_numbers.push_back(number);
}

int Span::shortestSpan() const
{
	if (_numbers.size() <= 1)
		throw SpanNoSpanException();
	std::vector<int> sorted = _numbers;
	std::sort(sorted.begin(), sorted.end());
	int shortest = sorted[1] - sorted[0];
	for (size_t i = 1; i < sorted.size(); i++)
	{
		if (sorted[i] - sorted[i - 1] < shortest)
			shortest = sorted[i] - sorted[i - 1];
	}
	return shortest;
}

int Span::longestSpan() const
{
	if (_numbers.size() <= 1)
		throw SpanNoSpanException();
	std::vector<int> sorted = _numbers;
	std::sort(sorted.begin(), sorted.end());
	return sorted[sorted.size() - 1] - sorted[0];
}

const char* Span::SpanFullException::what() const throw()
{
	return "Span is full";
}

const char* Span::SpanNoSpanException::what() const throw()
{
	return "No span to find";
}

void Span::addRange(int start, int end)
{
	if (end < start)
		throw std::invalid_argument("End must be greater than start");
	if (_numbers.size() + end - start > _n)
		throw SpanFullException();
	for (int i = start; i <= end; i++)
		_numbers.push_back(i);
}