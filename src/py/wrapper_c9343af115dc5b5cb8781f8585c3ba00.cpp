#include "_ieigen.h"


namespace autowig
{
}


void wrapper_c9343af115dc5b5cb8781f8585c3ba00()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 3 >::*method_pointer_b646635c6ed55fae9639575d75d03de0)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 3 >::*method_pointer_324c8553765853c7811a827757f711f0)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 3 >::*method_pointer_f08abf82e9735f3eb1c2ff1492f7c74d)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 3 >::*method_pointer_c1ed9558d5835379b398f87cfd159c2b)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 3 >::*method_pointer_de6ce389a94b5efab53d156ce8740156)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 > > > class_c9343af115dc5b5cb8781f8585c3ba00("_DenseCoeffsBase_c9343af115dc5b5cb8781f8585c3ba00", "", boost::python::no_init);
    class_c9343af115dc5b5cb8781f8585c3ba00.def("inner_stride", method_pointer_b646635c6ed55fae9639575d75d03de0, "");
    class_c9343af115dc5b5cb8781f8585c3ba00.def("outer_stride", method_pointer_324c8553765853c7811a827757f711f0, "");
    class_c9343af115dc5b5cb8781f8585c3ba00.def("stride", method_pointer_f08abf82e9735f3eb1c2ff1492f7c74d, "");
    class_c9343af115dc5b5cb8781f8585c3ba00.def("row_stride", method_pointer_c1ed9558d5835379b398f87cfd159c2b, "");
    class_c9343af115dc5b5cb8781f8585c3ba00.def("col_stride", method_pointer_de6ce389a94b5efab53d156ce8740156, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 > > >();
    }

}