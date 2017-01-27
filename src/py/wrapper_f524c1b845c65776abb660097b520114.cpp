#include "_ieigen.h"


namespace autowig
{
    void method_decorator_f3558bf26f16558795950c5e9e3627fe(struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > > & instance, class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_1de27925a7b45e64bcbbf85820c84585(struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > > const & instance, class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_f524c1b845c65776abb660097b520114()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >  & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > > >::*method_pointer_f3558bf26f16558795950c5e9e3627fe)() = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > >::derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >  const & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > > >::*method_pointer_4ad5afbc78055afab30991c112546194)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > >::derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >  & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > > >::*method_pointer_1de27925a7b45e64bcbbf85820c84585)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > >::const_cast_derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >  const & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > > >::*method_pointer_6fce1f5a81da547693519edf4357ac58)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > > >::*method_pointer_33b829ad8bb155c3a59a25ab6dd6fec3)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > > >::*method_pointer_dc73909ec3875f27abb26f7fcb9c8c57)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > > >::*method_pointer_cd4b5c62622554e8bb853940db90bbfe)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > > > > class_f524c1b845c65776abb660097b520114("_EigenBase_f524c1b845c65776abb660097b520114", "", boost::python::no_init);
    class_f524c1b845c65776abb660097b520114.def(boost::python::init< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > >  const & >(""));
    class_f524c1b845c65776abb660097b520114.def("derived", method_pointer_f3558bf26f16558795950c5e9e3627fe, boost::python::return_internal_reference<>(), "");
    class_f524c1b845c65776abb660097b520114.def("derived", autowig::method_decorator_f3558bf26f16558795950c5e9e3627fe);
    class_f524c1b845c65776abb660097b520114.def("derived", method_pointer_4ad5afbc78055afab30991c112546194, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f524c1b845c65776abb660097b520114.def("const_cast_derived", method_pointer_1de27925a7b45e64bcbbf85820c84585, boost::python::return_internal_reference<>(), "");
    class_f524c1b845c65776abb660097b520114.def("const_cast_derived", autowig::method_decorator_1de27925a7b45e64bcbbf85820c84585);
    class_f524c1b845c65776abb660097b520114.def("const_derived", method_pointer_6fce1f5a81da547693519edf4357ac58, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f524c1b845c65776abb660097b520114.def("rows", method_pointer_33b829ad8bb155c3a59a25ab6dd6fec3, "");
    class_f524c1b845c65776abb660097b520114.def("cols", method_pointer_dc73909ec3875f27abb26f7fcb9c8c57, "");
    class_f524c1b845c65776abb660097b520114.def("size", method_pointer_cd4b5c62622554e8bb853940db90bbfe, "");

}