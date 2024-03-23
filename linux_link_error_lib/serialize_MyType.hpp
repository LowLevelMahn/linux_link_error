#pragma once

#include "MyType.hpp"

#include <boost/serialization/version.hpp>
#include <boost/serialization/vector.hpp>

namespace boost
{
    namespace serialization
    {
        template <typename V, std::size_t D>
        struct version<MyType<V, D>>
        {
            BOOST_STATIC_CONSTANT( unsigned int, value = 1 );
        };

        template <typename ArchiveT, typename FV, std::size_t FD>
        inline void save( ArchiveT& /*ar*/, const MyType<FV, FD>& /*v*/, unsigned int /*version*/ )
        {
            // do something
        }

        template <typename ArchiveT, typename FV, std::size_t FD>
        inline void load( ArchiveT& ar, MyType<FV, FD>& /*v*/, unsigned int /*version*/ )
        {
            // do something
        }

        template <typename ArchiveT, typename V, std::size_t D>
        inline void serialize( ArchiveT& /*ar*/, MyType<V, D>& /*v*/, const unsigned int /*version*/ )
        {
            // do something
        }

    } // namespace serialization
} // namespace boost
