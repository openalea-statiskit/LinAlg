#include "_ieigen.h"


namespace autowig
{
    void method_decorator_1d9dd53214295482a0c67f59f3887dcc(struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > & instance, class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_bad1e24f39095248bcc81e7db4bd44a7(struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > const & instance, class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_7476970748f95e88a7d748e0c708f407()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_1d9dd53214295482a0c67f59f3887dcc)() = &::Eigen::EigenBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::derived;
    class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_6af48adb8e885490a59cdf41ccd70f20)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::derived;
    class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_bad1e24f39095248bcc81e7db4bd44a7)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::const_cast_derived;
    class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_d24061d66e2b512a8060d9a5305f8f81)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_5a3a2656c88754f8ba26238dfb429742)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_300b745638b355d7a55ce64e4ece723f)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_1af51c3c91315dff8c4f193993fcf05b)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > > > class_7476970748f95e88a7d748e0c708f407("_EigenBase_7476970748f95e88a7d748e0c708f407", "", boost::python::no_init);
    class_7476970748f95e88a7d748e0c708f407.def("derived", method_pointer_1d9dd53214295482a0c67f59f3887dcc, boost::python::return_internal_reference<>(), "");
    class_7476970748f95e88a7d748e0c708f407.def("derived", autowig::method_decorator_1d9dd53214295482a0c67f59f3887dcc);
    class_7476970748f95e88a7d748e0c708f407.def("derived", method_pointer_6af48adb8e885490a59cdf41ccd70f20, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7476970748f95e88a7d748e0c708f407.def("const_cast_derived", method_pointer_bad1e24f39095248bcc81e7db4bd44a7, boost::python::return_internal_reference<>(), "");
    class_7476970748f95e88a7d748e0c708f407.def("const_cast_derived", autowig::method_decorator_bad1e24f39095248bcc81e7db4bd44a7);
    class_7476970748f95e88a7d748e0c708f407.def("const_derived", method_pointer_d24061d66e2b512a8060d9a5305f8f81, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7476970748f95e88a7d748e0c708f407.def("rows", method_pointer_5a3a2656c88754f8ba26238dfb429742, "");
    class_7476970748f95e88a7d748e0c708f407.def("cols", method_pointer_300b745638b355d7a55ce64e4ece723f, "");
    class_7476970748f95e88a7d748e0c708f407.def("size", method_pointer_1af51c3c91315dff8c4f193993fcf05b, "");

}