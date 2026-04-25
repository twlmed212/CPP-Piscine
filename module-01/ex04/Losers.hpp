/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Losers.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 15:58:59 by mtawil            #+#    #+#             */
/*   Updated: 2026/04/25 16:36:44 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOSERS_HPP
#define LOSERS_HPP

# include <iostream>
# include <string>

class Data {
    private:
        std::string origianl_file;
        std::string occurance_str;
        std::string replacment_str;
        std::string replaced_file;
    public:
        std::string result;
        Data(char **av);
        void replace();
        const char* getOrigianlF();
        const char* getReplacedF();
};

#endif