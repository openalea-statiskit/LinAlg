#include "_ieigen.h"


namespace autowig
{
}


void wrapper_3976c7d110a25d85863447a7b575e6ad()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 3 >::*method_pointer_07140a15c6d9516daa93f5607e29a3e5)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 3 >::*method_pointer_d0549e9c3491556da3e487e552c1a147)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 3 >::*method_pointer_c2b5abec2af95e30831186628a588465)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 3 >::*method_pointer_c7de3bb3230d5e95bde0da728148ab1c)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 3 >::*method_pointer_107b753d9da753d5b8eda92b99fe5d28)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 1 > > > class_3976c7d110a25d85863447a7b575e6ad("_DenseCoeffsBase_3976c7d110a25d85863447a7b575e6ad", "", boost::python::no_init);
    class_3976c7d110a25d85863447a7b575e6ad.def("inner_stride", method_pointer_07140a15c6d9516daa93f5607e29a3e5, "");
    class_3976c7d110a25d85863447a7b575e6ad.def("outer_stride", method_pointer_d0549e9c3491556da3e487e552c1a147, "");
    class_3976c7d110a25d85863447a7b575e6ad.def("stride", method_pointer_c2b5abec2af95e30831186628a588465, "");
    class_3976c7d110a25d85863447a7b575e6ad.def("row_stride", method_pointer_c7de3bb3230d5e95bde0da728148ab1c, "");
    class_3976c7d110a25d85863447a7b575e6ad.def("col_stride", method_pointer_107b753d9da753d5b8eda92b99fe5d28, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 1 > > >();
    }

}