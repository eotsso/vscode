#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Review {
    public:
        void SetRatingAndComment(int revRating, string revComment) { //setter function 
            rating = revRating;
            comment = revComment;
        }
        int GetRating() const { return rating; } //short getter-function
        string GetComment() const { return comment; } //short getter-function 

    private: 
        int rating = -1; //initalizing as opposed to constructors
        string comment = "NoComment"; //initalizing as opposed to constructors
};

int main() {
    vector<Review> reviewList; //created vector of class 'Review' named reviewList
    Review currReview; //created object of type Review called currReview
    int currRating; 
    string currComment; 
    unsigned int i;

    cout << "Type rating + comments. To end: -1" << endl;
    cin >> currRating; 
    while (currRating >= 0) {
        getline (cin, currComment); //Gets rest of line
        currReview.SetRatingAndComment(currRating, currComment); //calls function from currReview of class type Review
        reviewList.push_back(currReview); //pushback function of vector named currReview 
        cin >> currRating; 
    }

    //Output all comments for given rating
    cout << endl << "Type a rating to see all comments. To end: -1" << endl;
    cin >> currRating; 
    while (currRating != 1) {
        for (i = 0; i < reviewList.size(); i++) {
            //currReview = reviewList.at(i); //kinda confused here??????
            if (currRating == currReview.GetRating()) {
                cout << currReview.GetComment() << endl; 
            }
        }

        cin >> currRating; //continues while loop 
    }

    
}