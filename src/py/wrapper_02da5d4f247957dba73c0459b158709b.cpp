#include "_ieigen.h"


namespace autowig
{
    void method_decorator_cc1233d664135c9f8785593358d86da5(struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > > & instance, class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_891fcb48e8955f238b56f7e1cb76755e(struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > > const & instance, class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_02da5d4f247957dba73c0459b158709b()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >  & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > > >::*method_pointer_cc1233d664135c9f8785593358d86da5)() = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > >::derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >  const & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > > >::*method_pointer_f849a68b3575539ab85003f17e62fcab)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > >::derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >  & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > > >::*method_pointer_891fcb48e8955f238b56f7e1cb76755e)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > >::const_cast_derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >  const & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > > >::*method_pointer_e4a23d88f4aa5809ac86cc0b8f755a14)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > > >::*method_pointer_95e0c6c4e11a53ccb2603421ef085442)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > > >::*method_pointer_fcfbf9a185125bdb990ed681f2ba121e)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > > >::*method_pointer_945b53441c3751caa53305a44b36ad75)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > > > > class_02da5d4f247957dba73c0459b158709b("_EigenBase_02da5d4f247957dba73c0459b158709b", "", boost::python::no_init);
    class_02da5d4f247957dba73c0459b158709b.def(boost::python::init< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > >  const & >(""));
    class_02da5d4f247957dba73c0459b158709b.def("derived", method_pointer_cc1233d664135c9f8785593358d86da5, boost::python::return_internal_reference<>(), "");
    class_02da5d4f247957dba73c0459b158709b.def("derived", autowig::method_decorator_cc1233d664135c9f8785593358d86da5);
    class_02da5d4f247957dba73c0459b158709b.def("derived", method_pointer_f849a68b3575539ab85003f17e62fcab, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_02da5d4f247957dba73c0459b158709b.def("const_cast_derived", method_pointer_891fcb48e8955f238b56f7e1cb76755e, boost::python::return_internal_reference<>(), "");
    class_02da5d4f247957dba73c0459b158709b.def("const_cast_derived", autowig::method_decorator_891fcb48e8955f238b56f7e1cb76755e);
    class_02da5d4f247957dba73c0459b158709b.def("const_derived", method_pointer_e4a23d88f4aa5809ac86cc0b8f755a14, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_02da5d4f247957dba73c0459b158709b.def("rows", method_pointer_95e0c6c4e11a53ccb2603421ef085442, "");
    class_02da5d4f247957dba73c0459b158709b.def("cols", method_pointer_fcfbf9a185125bdb990ed681f2ba121e, "");
    class_02da5d4f247957dba73c0459b158709b.def("size", method_pointer_945b53441c3751caa53305a44b36ad75, "");

}