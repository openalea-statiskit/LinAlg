#include "_ieigen.h"


namespace autowig
{
    void method_decorator_15af561861c8597a976ad170aa3068f9(struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > > & instance, class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_5a9d955c322354ef93c33f1bc96f42f7(struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > > const & instance, class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_33b7e71a70f753d496aedd96c9e03361()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >  & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > > >::*method_pointer_15af561861c8597a976ad170aa3068f9)() = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > >::derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >  const & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > > >::*method_pointer_03221623e7c65ea59506e20f4f119e60)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > >::derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >  & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > > >::*method_pointer_5a9d955c322354ef93c33f1bc96f42f7)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > >::const_cast_derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >  const & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > > >::*method_pointer_6115007af3d253adbfaec2d0264ecc19)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > > >::*method_pointer_1de3a8c9a84b559bb79cdf26829f5e23)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > > >::*method_pointer_680503a7da8f5dcabbfedd290f07209d)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > > >::*method_pointer_be85248477a850b892ca7c534a89e963)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > > > > class_33b7e71a70f753d496aedd96c9e03361("_EigenBase_33b7e71a70f753d496aedd96c9e03361", "", boost::python::no_init);
    class_33b7e71a70f753d496aedd96c9e03361.def(boost::python::init< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > >  const & >(""));
    class_33b7e71a70f753d496aedd96c9e03361.def("derived", method_pointer_15af561861c8597a976ad170aa3068f9, boost::python::return_internal_reference<>(), "");
    class_33b7e71a70f753d496aedd96c9e03361.def("derived", autowig::method_decorator_15af561861c8597a976ad170aa3068f9);
    class_33b7e71a70f753d496aedd96c9e03361.def("derived", method_pointer_03221623e7c65ea59506e20f4f119e60, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_33b7e71a70f753d496aedd96c9e03361.def("const_cast_derived", method_pointer_5a9d955c322354ef93c33f1bc96f42f7, boost::python::return_internal_reference<>(), "");
    class_33b7e71a70f753d496aedd96c9e03361.def("const_cast_derived", autowig::method_decorator_5a9d955c322354ef93c33f1bc96f42f7);
    class_33b7e71a70f753d496aedd96c9e03361.def("const_derived", method_pointer_6115007af3d253adbfaec2d0264ecc19, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_33b7e71a70f753d496aedd96c9e03361.def("rows", method_pointer_1de3a8c9a84b559bb79cdf26829f5e23, "");
    class_33b7e71a70f753d496aedd96c9e03361.def("cols", method_pointer_680503a7da8f5dcabbfedd290f07209d, "");
    class_33b7e71a70f753d496aedd96c9e03361.def("size", method_pointer_be85248477a850b892ca7c534a89e963, "");

}