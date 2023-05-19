/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 18:47:23 by mradwan           #+#    #+#             */
/*   Updated: 2023/05/19 20:25:52 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain {
private:
    std::string _ideas[100];

public:
    Brain();
    Brain& operator=(const Brain &Or);
    Brain(const Brain &src);
    ~Brain();

    void set_idea(int i, const std::string &idea);
    std::string get_idea(int i) const;
};

#endif
