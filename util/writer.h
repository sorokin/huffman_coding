#ifndef WRITER_H
#define WRITER_H

#include <fstream>
#include <string>
#include <vector>
#include "constants.h"

class writer {
   public:
    writer() = delete;
    writer(std::string filename)
        : filename(filename), out(this->filename, std::ios::binary), remain() {}
    // Check permission and while working too!

    void write_bool_data(std::vector<bool> data);

    void write_byte_data(std::vector<byte> data);

    ~writer();

   private:
    std::string filename;
    std::ofstream out;
    std::vector<bool> remain;
};

#endif  // WRITER_H
