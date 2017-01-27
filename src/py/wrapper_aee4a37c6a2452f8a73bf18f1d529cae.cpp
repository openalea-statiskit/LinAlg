#include "_ieigen.h"


namespace autowig
{
    void method_decorator_e9e731e875c251eb92ca3cec2dc0fb75(struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > > & instance, class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_bf0f9969098650f38a9ca0d5053c24b4(struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > > const & instance, class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_aee4a37c6a2452f8a73bf18f1d529cae()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >  & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > > >::*method_pointer_e9e731e875c251eb92ca3cec2dc0fb75)() = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > >::derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >  const & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > > >::*method_pointer_bfb4f832373c5a2fa178f7f52624a718)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > >::derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >  & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > > >::*method_pointer_bf0f9969098650f38a9ca0d5053c24b4)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > >::const_cast_derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >  const & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > > >::*method_pointer_7f60429a7a4a538ab122dbf454511cb1)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > > >::*method_pointer_91fd5596e74f512a890a952fb30dab49)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > > >::*method_pointer_335df6d4adcf5f69b62f949fa4772555)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > > >::*method_pointer_ba98510e5e4952b9b56c163a1d157a72)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > > > > class_aee4a37c6a2452f8a73bf18f1d529cae("_EigenBase_aee4a37c6a2452f8a73bf18f1d529cae", "", boost::python::no_init);
    class_aee4a37c6a2452f8a73bf18f1d529cae.def(boost::python::init< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > >  const & >(""));
    class_aee4a37c6a2452f8a73bf18f1d529cae.def("derived", method_pointer_e9e731e875c251eb92ca3cec2dc0fb75, boost::python::return_internal_reference<>(), "");
    class_aee4a37c6a2452f8a73bf18f1d529cae.def("derived", autowig::method_decorator_e9e731e875c251eb92ca3cec2dc0fb75);
    class_aee4a37c6a2452f8a73bf18f1d529cae.def("derived", method_pointer_bfb4f832373c5a2fa178f7f52624a718, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_aee4a37c6a2452f8a73bf18f1d529cae.def("const_cast_derived", method_pointer_bf0f9969098650f38a9ca0d5053c24b4, boost::python::return_internal_reference<>(), "");
    class_aee4a37c6a2452f8a73bf18f1d529cae.def("const_cast_derived", autowig::method_decorator_bf0f9969098650f38a9ca0d5053c24b4);
    class_aee4a37c6a2452f8a73bf18f1d529cae.def("const_derived", method_pointer_7f60429a7a4a538ab122dbf454511cb1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_aee4a37c6a2452f8a73bf18f1d529cae.def("rows", method_pointer_91fd5596e74f512a890a952fb30dab49, "");
    class_aee4a37c6a2452f8a73bf18f1d529cae.def("cols", method_pointer_335df6d4adcf5f69b62f949fa4772555, "");
    class_aee4a37c6a2452f8a73bf18f1d529cae.def("size", method_pointer_ba98510e5e4952b9b56c163a1d157a72, "");

}