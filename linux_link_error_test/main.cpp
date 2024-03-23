#include "../linux_link_error_lib/MyType.hpp"
#include "../linux_link_error_lib/serialize_MyType.hpp"

#include <boost/archive/text_iarchive.hpp>
#include <fstream>

int main( int /*argc*/, char*[] /*argv*/ )
{
    std::vector<MyType<double, 2>*> content;
    std::ifstream ifs( "filename" );
    boost::archive::text_iarchive ia( ifs );
    ia >> content;
    return 0;
}
