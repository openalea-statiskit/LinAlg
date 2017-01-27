#include "_ieigen.h"


namespace autowig
{
    void method_decorator_944ed9632a465ebe9dadf42ed3c8fd54(struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > > & instance, class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_84b5cd69b1435bef985769cf83fccf13(struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > > const & instance, class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_0a80720fffa35e95b1cfa0219e846b8b()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >  & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > > >::*method_pointer_944ed9632a465ebe9dadf42ed3c8fd54)() = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > >::derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >  const & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > > >::*method_pointer_297d930a08b3524297043cabd79b4cf0)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > >::derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >  & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > > >::*method_pointer_84b5cd69b1435bef985769cf83fccf13)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > >::const_cast_derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >  const & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > > >::*method_pointer_2232944181035612ab61f7263a08d122)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > > >::*method_pointer_18ea8e1a11c657a2afebd863ee59cb83)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > > >::*method_pointer_432f2aadcd575366846f0a6a62ab783b)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > > >::*method_pointer_e840d51346375168836b57ff28ec2601)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > > > > class_0a80720fffa35e95b1cfa0219e846b8b("_EigenBase_0a80720fffa35e95b1cfa0219e846b8b", "", boost::python::no_init);
    class_0a80720fffa35e95b1cfa0219e846b8b.def(boost::python::init< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > >  const & >(""));
    class_0a80720fffa35e95b1cfa0219e846b8b.def("derived", method_pointer_944ed9632a465ebe9dadf42ed3c8fd54, boost::python::return_internal_reference<>(), "");
    class_0a80720fffa35e95b1cfa0219e846b8b.def("derived", autowig::method_decorator_944ed9632a465ebe9dadf42ed3c8fd54);
    class_0a80720fffa35e95b1cfa0219e846b8b.def("derived", method_pointer_297d930a08b3524297043cabd79b4cf0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0a80720fffa35e95b1cfa0219e846b8b.def("const_cast_derived", method_pointer_84b5cd69b1435bef985769cf83fccf13, boost::python::return_internal_reference<>(), "");
    class_0a80720fffa35e95b1cfa0219e846b8b.def("const_cast_derived", autowig::method_decorator_84b5cd69b1435bef985769cf83fccf13);
    class_0a80720fffa35e95b1cfa0219e846b8b.def("const_derived", method_pointer_2232944181035612ab61f7263a08d122, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0a80720fffa35e95b1cfa0219e846b8b.def("rows", method_pointer_18ea8e1a11c657a2afebd863ee59cb83, "");
    class_0a80720fffa35e95b1cfa0219e846b8b.def("cols", method_pointer_432f2aadcd575366846f0a6a62ab783b, "");
    class_0a80720fffa35e95b1cfa0219e846b8b.def("size", method_pointer_e840d51346375168836b57ff28ec2601, "");

}