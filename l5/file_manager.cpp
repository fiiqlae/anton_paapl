#include <iostream>
#include <fstream>

template <typename T>
class FileManager 
{
private:
    const char* fname;
    T t;
public:
    FileManager(const char* _fname)
    {
        t = T();
        fname = _fname;
    }

    T read_object()
    {
        std::ifstream infile;
        infile.open(fname, std::ios::binary | std::ios::in);
        infile.read((char*)&t, sizeof(t));
        infile.close();
        return t;
    }

    void write_object(T obj) 
    {
        std::ofstream outfile;
        outfile.open(fname, std::ios::binary | std::ios::out);
        outfile.write((char*)&obj, sizeof(T));
        outfile.close();
    }
};