private: int BinSearch(double list[], int n, int target) {

				 //declare low, mid, and high
				 int low = 0, mid, high = n-1;

				 //binary search loop
				 while (low <= high)
				 {
					 //compute mid
					 mid = (low + high) / 2;
					 //check target against list[mid]
					 if (target < list[mid])
						 //if target is below list[mid] reset high
						 high = mid - 1;
					 else if (target > list[mid])
						 //if target is below list[mid]) reset low
						 low = high + 1;
					 else
						 //if target is found set low to exit the loop
						 low = high + 1;
				 }

				 //return true if target found, false if not found
				 if (target == list[mid])
					 return true;
				 else
					 return false;

			 }