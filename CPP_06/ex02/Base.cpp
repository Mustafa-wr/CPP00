/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 16:36:20 by mradwan           #+#    #+#             */
/*   Updated: 2023/06/18 11:33:06 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base() {}

Base *generate(void)
{
	srand(time(NULL));
	int i = rand() % 3;

	switch(i)
	{
		case 0:
			return new A;
		case 1:
			return new B;
		case 2:
			return new C;
		default:
			return nullptr;
	}
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "p: A" <<std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "p: B" <<std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "p: C" <<std::endl;
}

void identify(Base& p)
{
	if(typeid(p) == typeid(A))
		std::cout << "&func p: A" <<std::endl;
	else if(typeid(p) == typeid(B))
		std::cout << "&func p: B" <<std::endl;
	else if(typeid(p) == typeid(C))
		std::cout << "&func p: C" <<std::endl;
}