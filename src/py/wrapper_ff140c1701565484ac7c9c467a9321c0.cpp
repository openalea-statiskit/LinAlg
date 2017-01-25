#include "_ieigen.h"


namespace autowig
{
}


void wrapper_ff140c1701565484ac7c9c467a9321c0()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 3 >::*method_pointer_7df8ecc08c4d52eab7f0205bbb59c397)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 3 >::*method_pointer_4067d28359f55f33a63bdb4bd30cfc99)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 3 >::*method_pointer_5ede514d25bd5823ad1ddb339a38c165)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 3 >::*method_pointer_7ea224adfbdf574ea1deaf8c8d30daa8)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 3 >::*method_pointer_e01e5072fb9a5988938c5fe12c80c8ee)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 1 > > > class_ff140c1701565484ac7c9c467a9321c0("_DenseCoeffsBase_ff140c1701565484ac7c9c467a9321c0", "", boost::python::no_init);
    class_ff140c1701565484ac7c9c467a9321c0.def("inner_stride", method_pointer_7df8ecc08c4d52eab7f0205bbb59c397, "");
    class_ff140c1701565484ac7c9c467a9321c0.def("outer_stride", method_pointer_4067d28359f55f33a63bdb4bd30cfc99, "");
    class_ff140c1701565484ac7c9c467a9321c0.def("stride", method_pointer_5ede514d25bd5823ad1ddb339a38c165, "");
    class_ff140c1701565484ac7c9c467a9321c0.def("row_stride", method_pointer_7ea224adfbdf574ea1deaf8c8d30daa8, "");
    class_ff140c1701565484ac7c9c467a9321c0.def("col_stride", method_pointer_e01e5072fb9a5988938c5fe12c80c8ee, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 1 > > >();
    }

}