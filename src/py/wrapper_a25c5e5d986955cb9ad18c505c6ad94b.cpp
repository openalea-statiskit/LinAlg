#include "_ieigen.h"


namespace autowig
{
}


void wrapper_a25c5e5d986955cb9ad18c505c6ad94b()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 >, 3 >::*method_pointer_2466e03ae2985b268a73028fbeeb9f60)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 >, 3 >::*method_pointer_54df3ccb0b8b5620ba66e5394b9a7998)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 >, 3 >::*method_pointer_44c5d10a7b4b59d38ef65dff994c0161)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 >, 3 >::*method_pointer_d188db9d41e65ee1b4e99e71d24b2093)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 >, 3 >::*method_pointer_2877d9b047fa554a82baa114fc1f1f1c)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 1 > > > class_a25c5e5d986955cb9ad18c505c6ad94b("_DenseCoeffsBase_a25c5e5d986955cb9ad18c505c6ad94b", "", boost::python::no_init);
    class_a25c5e5d986955cb9ad18c505c6ad94b.def("inner_stride", method_pointer_2466e03ae2985b268a73028fbeeb9f60, "");
    class_a25c5e5d986955cb9ad18c505c6ad94b.def("outer_stride", method_pointer_54df3ccb0b8b5620ba66e5394b9a7998, "");
    class_a25c5e5d986955cb9ad18c505c6ad94b.def("stride", method_pointer_44c5d10a7b4b59d38ef65dff994c0161, "");
    class_a25c5e5d986955cb9ad18c505c6ad94b.def("row_stride", method_pointer_d188db9d41e65ee1b4e99e71d24b2093, "");
    class_a25c5e5d986955cb9ad18c505c6ad94b.def("col_stride", method_pointer_2877d9b047fa554a82baa114fc1f1f1c, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 1 > > >();
    }

}