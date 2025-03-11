#include "movieTable.h"

class DramaTable : public MovieTable {
    public:
        DramaTable();
        ~DramaTable() override = default;
        Movie* get() override;
        Movie* get(const string& title, const int& year);
        void put() override;
        void* put(Movie* movie);

    protected:
        size_t hash() override;
        size_t hash(const string& title, const int& year);
        void printAll() override;
};