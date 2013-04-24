/*
 * Combination.cpp
 *
 *  Created on: 2012-5-17
 *      Author: pc5
 */

#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <cassert>

int main()
{
	int values[]={1,2,3,4,5,6,7};
	int elements[]={1,1,1,0,0,0,0};
	const std::size_t N=sizeof(elements)/sizeof(elements[0]);
	assert(N==sizeof(values)/sizeof(values[0]));
	std::vector<int> selectors(elements,elements+N);
	int count=0;
	do
	{
		std::cout<<++count<<" :";
		for(std::size_t i=0;i<selectors.size();i++)
		{
			if(selectors[i]==1)
			{
				std::cout<<values[i]<<"\t";
			}
		}
		std::cout<<"\n";
	}while(std::prev_permutation(selectors.begin(),selectors.end()));
	return 0;
}
