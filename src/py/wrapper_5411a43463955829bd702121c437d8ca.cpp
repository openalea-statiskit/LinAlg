#include "_ieigen.h"


namespace autowig
{
    void method_decorator_ea7e5a88c1de5ad38691eba9a364f245(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  & param_out)
    { instance.derived() = param_out; }
    void method_decorator_139fd6a427d550148fd08346ec194625(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > > const & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  & param_out)
    { instance.const_cast_derived() = param_out; }
}


void wrapper_5411a43463955829bd702121c437d8ca()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_ea7e5a88c1de5ad38691eba9a364f245)() = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_94800807ee8557eb9729e60922dd1321)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_139fd6a427d550148fd08346ec194625)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::const_cast_derived;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_56748d8072dd51118e6a17b408a4d784)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_08fb191b73ad5703bbbc4b6477186fc9)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_6e7f9762b196512987b99884b730da1f)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_4dd407adbca95d9baa70825862b665f5)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > > > > class_5411a43463955829bd702121c437d8ca("_EigenBase_5411a43463955829bd702121c437d8ca", "", boost::python::no_init);
    class_5411a43463955829bd702121c437d8ca.def("derived", method_pointer_ea7e5a88c1de5ad38691eba9a364f245, boost::python::return_internal_reference<>(), "");
    class_5411a43463955829bd702121c437d8ca.def("derived", autowig::method_decorator_ea7e5a88c1de5ad38691eba9a364f245);
    class_5411a43463955829bd702121c437d8ca.def("derived", method_pointer_94800807ee8557eb9729e60922dd1321, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5411a43463955829bd702121c437d8ca.def("const_cast_derived", method_pointer_139fd6a427d550148fd08346ec194625, boost::python::return_internal_reference<>(), "");
    class_5411a43463955829bd702121c437d8ca.def("const_cast_derived", autowig::method_decorator_139fd6a427d550148fd08346ec194625);
    class_5411a43463955829bd702121c437d8ca.def("const_derived", method_pointer_56748d8072dd51118e6a17b408a4d784, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5411a43463955829bd702121c437d8ca.def("rows", method_pointer_08fb191b73ad5703bbbc4b6477186fc9, "");
    class_5411a43463955829bd702121c437d8ca.def("cols", method_pointer_6e7f9762b196512987b99884b730da1f, "");
    class_5411a43463955829bd702121c437d8ca.def("size", method_pointer_4dd407adbca95d9baa70825862b665f5, "");

}