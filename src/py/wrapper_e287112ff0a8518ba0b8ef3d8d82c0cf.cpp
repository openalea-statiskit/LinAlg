#include "_ieigen.h"


namespace autowig
{
}


void wrapper_e287112ff0a8518ba0b8ef3d8d82c0cf()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 >::*method_pointer_ab4e6e6a494e5cda9e7a926f2218edba)() const = &::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >::innerStride;
    long int  (::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 >::*method_pointer_d6e5295c427a55feaefa38d72d071e10)() const = &::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > > > > class_e287112ff0a8518ba0b8ef3d8d82c0cf("_Matrix_e287112ff0a8518ba0b8ef3d8d82c0cf", "", boost::python::no_init);
    class_e287112ff0a8518ba0b8ef3d8d82c0cf.def("inner_stride", method_pointer_ab4e6e6a494e5cda9e7a926f2218edba, "");
    class_e287112ff0a8518ba0b8ef3d8d82c0cf.def("outer_stride", method_pointer_d6e5295c427a55feaefa38d72d071e10, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > > > >();
    }

}