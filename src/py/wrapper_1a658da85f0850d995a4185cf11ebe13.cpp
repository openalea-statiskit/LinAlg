#include "_ieigen.h"


namespace autowig
{
    void method_decorator_608ae10a566a5bfa98a5b495316aa7d9(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_2b32e1cc526556a198dfd7b6cad02c96(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > > const & instance, class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_1a658da85f0850d995a4185cf11ebe13()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_608ae10a566a5bfa98a5b495316aa7d9)() = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_f30cb65e7e5457d38d002400fc6700af)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_2b32e1cc526556a198dfd7b6cad02c96)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::const_cast_derived;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_3524262780f55893b44d5e6361084549)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_ce70164f8561522f86eafa4ae1d4ae93)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_490a845bc4bb51c686e1b806e751ba1b)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_c4aa2ac45ba35f078f797b89cdcf92cb)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > > > > class_1a658da85f0850d995a4185cf11ebe13("_EigenBase_1a658da85f0850d995a4185cf11ebe13", "", boost::python::no_init);
    class_1a658da85f0850d995a4185cf11ebe13.def("derived", method_pointer_608ae10a566a5bfa98a5b495316aa7d9, boost::python::return_internal_reference<>(), "");
    class_1a658da85f0850d995a4185cf11ebe13.def("derived", autowig::method_decorator_608ae10a566a5bfa98a5b495316aa7d9);
    class_1a658da85f0850d995a4185cf11ebe13.def("derived", method_pointer_f30cb65e7e5457d38d002400fc6700af, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1a658da85f0850d995a4185cf11ebe13.def("const_cast_derived", method_pointer_2b32e1cc526556a198dfd7b6cad02c96, boost::python::return_internal_reference<>(), "");
    class_1a658da85f0850d995a4185cf11ebe13.def("const_cast_derived", autowig::method_decorator_2b32e1cc526556a198dfd7b6cad02c96);
    class_1a658da85f0850d995a4185cf11ebe13.def("const_derived", method_pointer_3524262780f55893b44d5e6361084549, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1a658da85f0850d995a4185cf11ebe13.def("rows", method_pointer_ce70164f8561522f86eafa4ae1d4ae93, "");
    class_1a658da85f0850d995a4185cf11ebe13.def("cols", method_pointer_490a845bc4bb51c686e1b806e751ba1b, "");
    class_1a658da85f0850d995a4185cf11ebe13.def("size", method_pointer_c4aa2ac45ba35f078f797b89cdcf92cb, "");

}