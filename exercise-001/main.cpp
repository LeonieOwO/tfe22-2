#include <fmt/chrono.h>
#include <fmt/format.h>

#include "CLI/CLI.hpp"
#include "config.h"
int foo;
int data = 100;
class Vector
{
    std::vector<int>foo(42);
    foo[34] = 4711;
    struct linkedList{
        LinkedList* pNext;
        int data;

    };
    public:
    Vector(int size){
    pData = new int [size];
    };

    private:
    int* pData;
};

vVector(){
delete[] pData;
}

at(index, value){

}at(index)






auto main(int argc, char **argv) -> int
{
   fmt::print("The value of foo {} address of foo {}\n ", foo, fmt::ptr(&foo));
    
    
    auto count{20};
    /**
     * CLI11 is a command line parser to add command line options
     * More info at https://github.com/CLIUtils/CLI11#usage
     */
    CLI::App app{PROJECT_NAME};
    try
    {
        app.set_version_flag("-V,--version", fmt::format("{} {}", PROJECT_VER, PROJECT_BUILD_DATE));
        app.add_option("-c,--count",count,fmt::format("The amount of elements in our vector default: {}",count));
        app.parse(argc, argv);
    }
    catch (const CLI::ParseError &e)
    {
        return app.exit(e);
    }

    /**
     * The {fmt} lib is a cross platform library for printing and formatting text
     * it is much more convenient than std::cout and printf
     * More info at https://fmt.dev/latest/api.html
     */
    fmt::print("Hello, {}!\n", app.get_name());
    fmt::print("    value of count: {}!\n", count);

    /* INSERT YOUR CODE HERE */

    return 0; /* exit gracefully*/
}
