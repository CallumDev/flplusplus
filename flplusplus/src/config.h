#pragma once

namespace config {
    void init_defaults();
    void init_from_file(char *filename);
    class ConfigData
    {
    public:
        unsigned int lodscale;
        const char *savefoldername;
        bool saveindirectory;
    };
    ConfigData& get_config();
}
