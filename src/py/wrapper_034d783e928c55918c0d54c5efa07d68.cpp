#include "_ieigen.h"


namespace autowig
{
}


void wrapper_034d783e928c55918c0d54c5efa07d68()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 3 >::*method_pointer_6c7d076457c450c58248497295443d4e)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 3 >::*method_pointer_749ef27a0a215726aaac2b41178201d2)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 3 >::*method_pointer_61768dd7af5c530ebc819237c2b3d33b)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 3 >::*method_pointer_d9a4e6849f6f56b5ba0a0ebc34684415)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 3 >::*method_pointer_fb228646021a50a3ab7ce2e214aedae4)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 1 > > > class_034d783e928c55918c0d54c5efa07d68("_DenseCoeffsBase_034d783e928c55918c0d54c5efa07d68", "", boost::python::no_init);
    class_034d783e928c55918c0d54c5efa07d68.def("inner_stride", method_pointer_6c7d076457c450c58248497295443d4e, "");
    class_034d783e928c55918c0d54c5efa07d68.def("outer_stride", method_pointer_749ef27a0a215726aaac2b41178201d2, "");
    class_034d783e928c55918c0d54c5efa07d68.def("stride", method_pointer_61768dd7af5c530ebc819237c2b3d33b, "");
    class_034d783e928c55918c0d54c5efa07d68.def("row_stride", method_pointer_d9a4e6849f6f56b5ba0a0ebc34684415, "");
    class_034d783e928c55918c0d54c5efa07d68.def("col_stride", method_pointer_fb228646021a50a3ab7ce2e214aedae4, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 1 > > >();
    }

}