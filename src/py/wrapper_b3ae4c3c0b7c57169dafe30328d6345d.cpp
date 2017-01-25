#include "_ieigen.h"


namespace autowig
{
}


void wrapper_b3ae4c3c0b7c57169dafe30328d6345d()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 3 >::*method_pointer_aec184bb3e4157798bf2495f1ba2767e)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 3 >::*method_pointer_4b30e53741105d7fbb0d444ab60d0995)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 3 >::*method_pointer_4a8de17d130f50688612119ee76bba6e)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 3 >::*method_pointer_8b3b153185f9541b9a52b7fc1a0d8a83)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 3 >::*method_pointer_751c7920e7dc5f8b9f47a5f8bd8f8985)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 > > > class_b3ae4c3c0b7c57169dafe30328d6345d("_DenseCoeffsBase_b3ae4c3c0b7c57169dafe30328d6345d", "", boost::python::no_init);
    class_b3ae4c3c0b7c57169dafe30328d6345d.def("inner_stride", method_pointer_aec184bb3e4157798bf2495f1ba2767e, "");
    class_b3ae4c3c0b7c57169dafe30328d6345d.def("outer_stride", method_pointer_4b30e53741105d7fbb0d444ab60d0995, "");
    class_b3ae4c3c0b7c57169dafe30328d6345d.def("stride", method_pointer_4a8de17d130f50688612119ee76bba6e, "");
    class_b3ae4c3c0b7c57169dafe30328d6345d.def("row_stride", method_pointer_8b3b153185f9541b9a52b7fc1a0d8a83, "");
    class_b3ae4c3c0b7c57169dafe30328d6345d.def("col_stride", method_pointer_751c7920e7dc5f8b9f47a5f8bd8f8985, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 > > >();
    }

}