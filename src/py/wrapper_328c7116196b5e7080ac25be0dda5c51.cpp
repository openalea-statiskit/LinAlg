#include "_ieigen.h"


namespace autowig
{
    void method_decorator_f7c397152f905e94a389697819d8b0ef(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_51e79caf040b5dae876c202ae69a75a2(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > const & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_328c7116196b5e7080ac25be0dda5c51()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_f7c397152f905e94a389697819d8b0ef)() = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_a34a5f8502b9534da23d68fc271aabbd)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_51e79caf040b5dae876c202ae69a75a2)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::const_cast_derived;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_dd6863449b2f5d468a80828ba2c8e4d6)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_571e735023465f36be40dbf16476dcb2)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_8550688eaa6a552894f15f770b8c417d)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_c397e3ad645a53ae812fd1cee67b7999)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > > > class_328c7116196b5e7080ac25be0dda5c51("_EigenBase_328c7116196b5e7080ac25be0dda5c51", "", boost::python::no_init);
    class_328c7116196b5e7080ac25be0dda5c51.def("derived", method_pointer_f7c397152f905e94a389697819d8b0ef, boost::python::return_internal_reference<>(), "");
    class_328c7116196b5e7080ac25be0dda5c51.def("derived", autowig::method_decorator_f7c397152f905e94a389697819d8b0ef);
    class_328c7116196b5e7080ac25be0dda5c51.def("derived", method_pointer_a34a5f8502b9534da23d68fc271aabbd, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_328c7116196b5e7080ac25be0dda5c51.def("const_cast_derived", method_pointer_51e79caf040b5dae876c202ae69a75a2, boost::python::return_internal_reference<>(), "");
    class_328c7116196b5e7080ac25be0dda5c51.def("const_cast_derived", autowig::method_decorator_51e79caf040b5dae876c202ae69a75a2);
    class_328c7116196b5e7080ac25be0dda5c51.def("const_derived", method_pointer_dd6863449b2f5d468a80828ba2c8e4d6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_328c7116196b5e7080ac25be0dda5c51.def("rows", method_pointer_571e735023465f36be40dbf16476dcb2, "");
    class_328c7116196b5e7080ac25be0dda5c51.def("cols", method_pointer_8550688eaa6a552894f15f770b8c417d, "");
    class_328c7116196b5e7080ac25be0dda5c51.def("size", method_pointer_c397e3ad645a53ae812fd1cee67b7999, "");

}