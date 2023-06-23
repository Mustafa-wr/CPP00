/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 16:54:43 by mradwan           #+#    #+#             */
/*   Updated: 2023/06/19 15:18:59 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T> T min(T x, T y)
{
	if (x < y)
		return x;
	else
		return y;
}

template <typename T> T max(T x, T y)
{
	if (x > y)
		return x;
	else
		return y;
}

template <typename T> void swap(T &x, T &y)
{
	T tmp;
	
	tmp = x;
	x = y;
	y = tmp;
}

#endif