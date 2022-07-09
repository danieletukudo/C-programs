#include <iostream>
using namespace std;


int main()
{
	int high_score{19};
    int low_score {34};
    
    int *const score_ptr {&high_score};
    *score_ptr = 86;
    cout <<*score_ptr;
    
  //  score_ptr = &low_score;
    
	return0 0;
}
