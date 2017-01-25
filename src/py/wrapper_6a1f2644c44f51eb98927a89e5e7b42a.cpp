#include "_ieigen.h"


namespace autowig
{
    void method_decorator_ff85d192e1a05d05840e01b1bde89a34(struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > > & instance, class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  & param_out)
    { instance.derived() = param_out; }
    void method_decorator_9438eb201ab456b29673152832fbf1e4(struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > > const & instance, class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  & param_out)
    { instance.const_cast_derived() = param_out; }
}


void wrapper_6a1f2644c44f51eb98927a89e5e7b42a()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  & (::Eigen::EigenBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_ff85d192e1a05d05840e01b1bde89a34)() = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::derived;
    class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_83f0477236ea51d5bea1f0f2a110339e)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::derived;
    class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  & (::Eigen::EigenBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_9438eb201ab456b29673152832fbf1e4)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::const_cast_derived;
    class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_d07f89d1300a585ea1e881eb409d524d)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_ffd74c4d354a551baeee90dfadad5fd0)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_4ba472926ae95c849648dc7252ef618a)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_c0f2b981f13d5fd780ff4b1112714f1e)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > > > > class_6a1f2644c44f51eb98927a89e5e7b42a("_EigenBase_6a1f2644c44f51eb98927a89e5e7b42a", "", boost::python::no_init);
    class_6a1f2644c44f51eb98927a89e5e7b42a.def("derived", method_pointer_ff85d192e1a05d05840e01b1bde89a34, boost::python::return_internal_reference<>(), "");
    class_6a1f2644c44f51eb98927a89e5e7b42a.def("derived", autowig::method_decorator_ff85d192e1a05d05840e01b1bde89a34);
    class_6a1f2644c44f51eb98927a89e5e7b42a.def("derived", method_pointer_83f0477236ea51d5bea1f0f2a110339e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6a1f2644c44f51eb98927a89e5e7b42a.def("const_cast_derived", method_pointer_9438eb201ab456b29673152832fbf1e4, boost::python::return_internal_reference<>(), "");
    class_6a1f2644c44f51eb98927a89e5e7b42a.def("const_cast_derived", autowig::method_decorator_9438eb201ab456b29673152832fbf1e4);
    class_6a1f2644c44f51eb98927a89e5e7b42a.def("const_derived", method_pointer_d07f89d1300a585ea1e881eb409d524d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6a1f2644c44f51eb98927a89e5e7b42a.def("rows", method_pointer_ffd74c4d354a551baeee90dfadad5fd0, "");
    class_6a1f2644c44f51eb98927a89e5e7b42a.def("cols", method_pointer_4ba472926ae95c849648dc7252ef618a, "");
    class_6a1f2644c44f51eb98927a89e5e7b42a.def("size", method_pointer_c0f2b981f13d5fd780ff4b1112714f1e, "");

}