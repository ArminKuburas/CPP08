/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:14:46 by akuburas          #+#    #+#             */
/*   Updated: 2024/10/24 12:16:48 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return std::begin(this->c);
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return std::end(this->c);
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const
{
	return std::begin(this->c);
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const
{
	return std::end(this->c);
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin()
{
	return std::rbegin(this->c);
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend()
{
	return std::rend(this->c);
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rbegin() const
{
	return std::rbegin(this->c);
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rend() const
{
	return std::rend(this->c);
}