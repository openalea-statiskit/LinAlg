#include "_ieigen.h"


namespace autowig
{
    void method_decorator_947547c22f5f59489960649befae3495(struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > > & instance, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  & param_out)
    { instance.derived() = param_out; }
    void method_decorator_84c1a6e475f3588294e638455173c9e8(struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > > const & instance, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  & param_out)
    { instance.const_cast_derived() = param_out; }
}


void wrapper_6b4c7bf608a75d4b938af2859b2cc3a8()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_947547c22f5f59489960649befae3495)() = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::derived;
    class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_956da0c90ace50139b88f2a15329b90a)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::derived;
    class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_84c1a6e475f3588294e638455173c9e8)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::const_cast_derived;
    class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_bd3e78f4317256ee8bef53011dd327c7)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_d73f907539575aa4be9cd9c6d72851cd)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_cdf43c027ec6506b87660d17d97e3607)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_4429bb534f52525fb80bcfcc077b4e4f)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > > > > class_6b4c7bf608a75d4b938af2859b2cc3a8("_EigenBase_6b4c7bf608a75d4b938af2859b2cc3a8", "", boost::python::no_init);
    class_6b4c7bf608a75d4b938af2859b2cc3a8.def("derived", method_pointer_947547c22f5f59489960649befae3495, boost::python::return_internal_reference<>(), "");
    class_6b4c7bf608a75d4b938af2859b2cc3a8.def("derived", autowig::method_decorator_947547c22f5f59489960649befae3495);
    class_6b4c7bf608a75d4b938af2859b2cc3a8.def("derived", method_pointer_956da0c90ace50139b88f2a15329b90a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6b4c7bf608a75d4b938af2859b2cc3a8.def("const_cast_derived", method_pointer_84c1a6e475f3588294e638455173c9e8, boost::python::return_internal_reference<>(), "");
    class_6b4c7bf608a75d4b938af2859b2cc3a8.def("const_cast_derived", autowig::method_decorator_84c1a6e475f3588294e638455173c9e8);
    class_6b4c7bf608a75d4b938af2859b2cc3a8.def("const_derived", method_pointer_bd3e78f4317256ee8bef53011dd327c7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6b4c7bf608a75d4b938af2859b2cc3a8.def("rows", method_pointer_d73f907539575aa4be9cd9c6d72851cd, "");
    class_6b4c7bf608a75d4b938af2859b2cc3a8.def("cols", method_pointer_cdf43c027ec6506b87660d17d97e3607, "");
    class_6b4c7bf608a75d4b938af2859b2cc3a8.def("size", method_pointer_4429bb534f52525fb80bcfcc077b4e4f, "");

}