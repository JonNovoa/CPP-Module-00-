/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 19:48:48 by jnovoa-a          #+#    #+#             */
/*   Updated: 2026/03/26 19:48:49 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int main(int argc, char **argv)
{
	if(argc == 1)
		std::cout << "* LOUD AND UNBEREABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		std::string result;
		for (int i = 1; i < argc; i++)
		{
			result += argv[i]; 
		}
		for (size_t i = 0; i < result.length();i++)
		{
			result[i] = std::toupper(result[i]);
		}
		std::cout << result << std::endl;
	}
	return 0;
}
