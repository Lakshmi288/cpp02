/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lps <lps@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 15:14:21 by lps               #+#    #+#             */
/*   Updated: 2024/08/26 15:14:23 by lps              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int					_fixed_point_number;
		static const int	_number_of_fractional_bits;
	public:
		// Constructors
		Fixed();
		Fixed(const int number);
		Fixed(const float number);
		Fixed(const Fixed &other);
		Fixed &operator = (const Fixed &other);
		~Fixed();

		// Member functions
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

};

std::ostream &operator<<(std::ostream &os,  Fixed const &fixed);

#endif
