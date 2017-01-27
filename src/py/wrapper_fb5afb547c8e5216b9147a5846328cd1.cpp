#include "_ieigen.h"


namespace autowig
{
    void method_decorator_c8daf866e02c5e8e9e934ad8014c6742(struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > > & instance, class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_aa70ad2a33475ba8b73423e25094d23c(struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > > const & instance, class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_fb5afb547c8e5216b9147a5846328cd1()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >  & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > > >::*method_pointer_c8daf866e02c5e8e9e934ad8014c6742)() = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > >::derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >  const & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > > >::*method_pointer_11a60f0f83435babb4be5766289f51d1)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > >::derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >  & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > > >::*method_pointer_aa70ad2a33475ba8b73423e25094d23c)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > >::const_cast_derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >  const & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > > >::*method_pointer_229dfa2ef0df54dfb34acb9a0fa5444c)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > > >::*method_pointer_64212148cb6c570da022c30308af0ee5)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > > >::*method_pointer_4d97f606449a5d8d96bfa0cb7313c9fb)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > > >::*method_pointer_20f2ca60d3ee57dbb8397d887220b83f)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > > > > class_fb5afb547c8e5216b9147a5846328cd1("_EigenBase_fb5afb547c8e5216b9147a5846328cd1", "", boost::python::no_init);
    class_fb5afb547c8e5216b9147a5846328cd1.def(boost::python::init< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > >  const & >(""));
    class_fb5afb547c8e5216b9147a5846328cd1.def("derived", method_pointer_c8daf866e02c5e8e9e934ad8014c6742, boost::python::return_internal_reference<>(), "");
    class_fb5afb547c8e5216b9147a5846328cd1.def("derived", autowig::method_decorator_c8daf866e02c5e8e9e934ad8014c6742);
    class_fb5afb547c8e5216b9147a5846328cd1.def("derived", method_pointer_11a60f0f83435babb4be5766289f51d1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_fb5afb547c8e5216b9147a5846328cd1.def("const_cast_derived", method_pointer_aa70ad2a33475ba8b73423e25094d23c, boost::python::return_internal_reference<>(), "");
    class_fb5afb547c8e5216b9147a5846328cd1.def("const_cast_derived", autowig::method_decorator_aa70ad2a33475ba8b73423e25094d23c);
    class_fb5afb547c8e5216b9147a5846328cd1.def("const_derived", method_pointer_229dfa2ef0df54dfb34acb9a0fa5444c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_fb5afb547c8e5216b9147a5846328cd1.def("rows", method_pointer_64212148cb6c570da022c30308af0ee5, "");
    class_fb5afb547c8e5216b9147a5846328cd1.def("cols", method_pointer_4d97f606449a5d8d96bfa0cb7313c9fb, "");
    class_fb5afb547c8e5216b9147a5846328cd1.def("size", method_pointer_20f2ca60d3ee57dbb8397d887220b83f, "");

}