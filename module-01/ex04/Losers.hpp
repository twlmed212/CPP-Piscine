/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Losers.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 15:58:59 by mtawil            #+#    #+#             */
/*   Updated: 2026/04/25 16:49:05 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOSERS_HPP
#define LOSERS_HPP

# include <iostream>
# include <string>

class Data {
    private:
        std::string original;
        std::string occurrence;
        std::string replacement;
        std::string replaced_file;
        std::string result;
    
    public:
        Data(char **av);
        void replace(std::string s);
        const char* getOriginalF();
        const char* getReplacedF();
        std::string getResult();
};

#endif