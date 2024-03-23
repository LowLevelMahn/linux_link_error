#pragma once

#include <cstddef>

//---
template <typename V, std::size_t D>
class MyType;

namespace boost
{
    namespace serialization
    {
        template <typename ArchiveT, typename V, std::size_t D>
        inline void save( ArchiveT& ar, const MyType<V, D>& tr, unsigned int version );

        template <typename ArchiveT, typename V, std::size_t D>
        inline void load( ArchiveT& ar, MyType<V, D>& tr, unsigned int version );
    } // namespace serialization
} // namespace boost

//---

template <typename V, std::size_t D>
class MyType
{
public:
private:
    //---
    template <typename ArchiveT, typename FV, std::size_t FD>
    friend void boost::serialization::save( ArchiveT& ar, const MyType<FV, FD>& tr, unsigned int version );

    template <typename ArchiveT, typename FV, std::size_t FD>
    friend void boost::serialization::load( ArchiveT& ar, MyType<FV, FD>& tr, unsigned int version );
    //---
};
