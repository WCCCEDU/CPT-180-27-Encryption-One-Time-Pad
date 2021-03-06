namespace one_time_pad{
    std::string load_file(std::string path);
    std::string encrypt(std::string key, std::string plain_text);
    std::string decrypt(std::string key, std::string encrypted);
    char modular_encode(int key_value, int plain_value);
    char modular_decode(int encoded_value, int key_value);
}
