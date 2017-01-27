#include "_ieigen.h"


namespace autowig
{
    void method_decorator_b96f058b1dc650f0ae63f2568db2770d(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_f7a077b5604357c7bbea43972e81397a(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > > const & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_caaddf5b471c5708ac33d1f310413d85()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_b96f058b1dc650f0ae63f2568db2770d)() = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_f41264bcdd625aa0ae389e45337e6587)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_f7a077b5604357c7bbea43972e81397a)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::const_cast_derived;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_f991638ce5445f60a9400bb919ee76bf)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_2e0f510d9f455b4589417909db80898e)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_3d1d59d7182154eab2394b119bfff583)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_77835148653e520bb8060bbec0ebdbe9)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > > > > class_caaddf5b471c5708ac33d1f310413d85("_EigenBase_caaddf5b471c5708ac33d1f310413d85", "", boost::python::no_init);
    class_caaddf5b471c5708ac33d1f310413d85.def("derived", method_pointer_b96f058b1dc650f0ae63f2568db2770d, boost::python::return_internal_reference<>(), "");
    class_caaddf5b471c5708ac33d1f310413d85.def("derived", autowig::method_decorator_b96f058b1dc650f0ae63f2568db2770d);
    class_caaddf5b471c5708ac33d1f310413d85.def("derived", method_pointer_f41264bcdd625aa0ae389e45337e6587, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_caaddf5b471c5708ac33d1f310413d85.def("const_cast_derived", method_pointer_f7a077b5604357c7bbea43972e81397a, boost::python::return_internal_reference<>(), "");
    class_caaddf5b471c5708ac33d1f310413d85.def("const_cast_derived", autowig::method_decorator_f7a077b5604357c7bbea43972e81397a);
    class_caaddf5b471c5708ac33d1f310413d85.def("const_derived", method_pointer_f991638ce5445f60a9400bb919ee76bf, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_caaddf5b471c5708ac33d1f310413d85.def("rows", method_pointer_2e0f510d9f455b4589417909db80898e, "");
    class_caaddf5b471c5708ac33d1f310413d85.def("cols", method_pointer_3d1d59d7182154eab2394b119bfff583, "");
    class_caaddf5b471c5708ac33d1f310413d85.def("size", method_pointer_77835148653e520bb8060bbec0ebdbe9, "");

}