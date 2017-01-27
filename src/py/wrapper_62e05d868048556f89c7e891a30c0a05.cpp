#include "_ieigen.h"


namespace autowig
{
    void method_decorator_f7efe48f1d2e54e89af8b906e3123804(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_03cdf27838345d949df86bffea1d4802(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > > const & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_62e05d868048556f89c7e891a30c0a05()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_f7efe48f1d2e54e89af8b906e3123804)() = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_40a74e62e1b65ba5a710b68cb852d7c6)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_03cdf27838345d949df86bffea1d4802)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::const_cast_derived;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_b8aa74b253355c858f0e4d0c480269f3)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_485bfea0f8da53a1b9512f5763d9dbf8)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_1bd72e769db558d691ec7972c0a95395)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_2d9ccac1a32c54059d1f961101be778e)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > > > > class_62e05d868048556f89c7e891a30c0a05("_EigenBase_62e05d868048556f89c7e891a30c0a05", "", boost::python::no_init);
    class_62e05d868048556f89c7e891a30c0a05.def("derived", method_pointer_f7efe48f1d2e54e89af8b906e3123804, boost::python::return_internal_reference<>(), "");
    class_62e05d868048556f89c7e891a30c0a05.def("derived", autowig::method_decorator_f7efe48f1d2e54e89af8b906e3123804);
    class_62e05d868048556f89c7e891a30c0a05.def("derived", method_pointer_40a74e62e1b65ba5a710b68cb852d7c6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_62e05d868048556f89c7e891a30c0a05.def("const_cast_derived", method_pointer_03cdf27838345d949df86bffea1d4802, boost::python::return_internal_reference<>(), "");
    class_62e05d868048556f89c7e891a30c0a05.def("const_cast_derived", autowig::method_decorator_03cdf27838345d949df86bffea1d4802);
    class_62e05d868048556f89c7e891a30c0a05.def("const_derived", method_pointer_b8aa74b253355c858f0e4d0c480269f3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_62e05d868048556f89c7e891a30c0a05.def("rows", method_pointer_485bfea0f8da53a1b9512f5763d9dbf8, "");
    class_62e05d868048556f89c7e891a30c0a05.def("cols", method_pointer_1bd72e769db558d691ec7972c0a95395, "");
    class_62e05d868048556f89c7e891a30c0a05.def("size", method_pointer_2d9ccac1a32c54059d1f961101be778e, "");

}