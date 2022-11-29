#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

class Date{

    public:
        Date(int year, int month, int day) : year(year), month(month), day(day) {

        }

        bool operator<(const Date& otherDate) const{
            /*
            MISSING FUNCTION BODY HERE
            */
            if (year < otherDate.year){
            	return true;
			}
			else if (year == otherDate.year){
				if (month < otherDate.month){
					return true;
				}
				else{
					if (month == otherDate.month){
						if (day < otherDate.month){
							return true;
						}
					}
				}
			}
        	return false;
        }


        /*
        MISSING MEMBER FUNCTION HERE
        */
        string print(){
        	string month_s, day_s;
        	if (month < 10){
        		month_s = "0" + to_string(month);
			}
			else{
				month_s = to_string(month);
			}
			
			if (day < 10){
				day_s = "0" + to_string(day);
			}
			else{
				day_s = to_string(day);
			}
			
        	string formatted_date = to_string(year)+'/'+month_s+'/'+day_s+"\n";
        	return formatted_date;
		}


    private:
        int year;
        int month;
        int day;
};


int main() {
    int N;
    scanf("%d", &N);
    vector<Date> dates;
    //read in dates and store in vector
    for (int i = 0; i < N; ++i){
        int y, m, d;
        scanf("%d %d %d", &y, &m, &d);
        Date date(y, m, d);
        dates.push_back(date);
    }
    /*
    MISSING CODE HERE
    */
    for (int i=0;i<N;i++){
    	for (int j=0;j<N-1;j++){
    		if (dates[j+1] < dates[j]){
    			Date temp = dates[j];
    			dates[j] = dates[j+1];
    			dates[j+1] = temp;
			}
		}
	}
	
	for (auto x : dates){
		printf("%s", x.print().c_str());
	}
    

    return 0;
}
