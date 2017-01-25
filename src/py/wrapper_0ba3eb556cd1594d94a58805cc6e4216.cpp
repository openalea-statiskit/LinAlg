#include "_ieigen.h"


namespace autowig
{
}


void wrapper_0ba3eb556cd1594d94a58805cc6e4216()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 3 >::*method_pointer_282d96d90dc851a3af4d7ccc3f5402ce)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 3 >::*method_pointer_240c8e972701531cba3003ebd3bf2fde)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 3 >::*method_pointer_d6eea76cb37156a59d58dbfee8296839)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 3 >::*method_pointer_99013fdeafb85106b2021844676fd4ee)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 3 >::*method_pointer_e6e651e2f095507fbb007ee15141818a)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 1 > > > class_0ba3eb556cd1594d94a58805cc6e4216("_DenseCoeffsBase_0ba3eb556cd1594d94a58805cc6e4216", "", boost::python::no_init);
    class_0ba3eb556cd1594d94a58805cc6e4216.def("inner_stride", method_pointer_282d96d90dc851a3af4d7ccc3f5402ce, "");
    class_0ba3eb556cd1594d94a58805cc6e4216.def("outer_stride", method_pointer_240c8e972701531cba3003ebd3bf2fde, "");
    class_0ba3eb556cd1594d94a58805cc6e4216.def("stride", method_pointer_d6eea76cb37156a59d58dbfee8296839, "");
    class_0ba3eb556cd1594d94a58805cc6e4216.def("row_stride", method_pointer_99013fdeafb85106b2021844676fd4ee, "");
    class_0ba3eb556cd1594d94a58805cc6e4216.def("col_stride", method_pointer_e6e651e2f095507fbb007ee15141818a, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 1 > > >();
    }

}