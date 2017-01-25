#include "_ieigen.h"


namespace autowig
{
}


void wrapper_7359d161ff8755a3a3b4ed9112a24301()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 3 >::*method_pointer_6b1a80863fec5d2e82f816413d542348)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 3 >::*method_pointer_5e62e4dabae65c99a9fc85022dfd5628)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 3 >::*method_pointer_db77e78f9e795b17a08412873c390ce7)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 3 >::*method_pointer_b35a37c2334456f2bcc97d44a5b9a0e8)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 3 >::*method_pointer_ec17a659a79a5ca1bc23ffe249a84ded)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 1 > > > class_7359d161ff8755a3a3b4ed9112a24301("_DenseCoeffsBase_7359d161ff8755a3a3b4ed9112a24301", "", boost::python::no_init);
    class_7359d161ff8755a3a3b4ed9112a24301.def("inner_stride", method_pointer_6b1a80863fec5d2e82f816413d542348, "");
    class_7359d161ff8755a3a3b4ed9112a24301.def("outer_stride", method_pointer_5e62e4dabae65c99a9fc85022dfd5628, "");
    class_7359d161ff8755a3a3b4ed9112a24301.def("stride", method_pointer_db77e78f9e795b17a08412873c390ce7, "");
    class_7359d161ff8755a3a3b4ed9112a24301.def("row_stride", method_pointer_b35a37c2334456f2bcc97d44a5b9a0e8, "");
    class_7359d161ff8755a3a3b4ed9112a24301.def("col_stride", method_pointer_ec17a659a79a5ca1bc23ffe249a84ded, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 1 > > >();
    }

}