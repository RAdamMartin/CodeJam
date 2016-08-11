#include <string>
#include <set>
#include <iostream>

int main(){ 
    std::string temp;
    std::getline(std::cin, temp);
    const int N = std::stoi(temp);

    for (int i = 1; i <= N; i++){ //Iterate through test cases
        std::cout << "Case #" << i << ": ";
        
        //Read in number of search engines and skip s lines so we can read in the
        //number of queries to process. We do not care what the different possible
        //engines are.  
        std::getline(std::cin, temp);
        auto s = std::stoi(temp); 
        auto j = s;
        while(j-- >= 0){
            std::getline(std::cin, temp);
        }
        auto q = std::stoi(temp);

        //Add each line to a set of queries to run. If adding the new query makes 
        //there be s distinct queries to run, then we had to run the unrun queries
        //before the current query is queued. Therefore we increment our changes,
        //and reset the set to only include the most recent query (the one we could
        //not queue with the rest).  
        int changes = 0;
        std::set<std::string> queries;
        while (q--){
            std::getline(std::cin, temp);
            queries.insert(temp);
            if (queries.size() == s){
                changes += 1;
                queries.clear();
                queries.insert(temp);
            }
        }

        std::cout << changes << "\n";
    } 
}
