#include "_ieigen.h"


namespace autowig
{
    void method_decorator_bfc6f38e7fb85ae7ab7436b90d1fd518(struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > & instance, class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_97ddc4b7036d57139fdffed4caba8892(struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > const & instance, class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_ea663b46fa65508cbc52fc4554bcd0c7()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_bfc6f38e7fb85ae7ab7436b90d1fd518)() = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::derived;
    class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_2b6d835dd02955409a835442a9d4bad2)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::derived;
    class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_97ddc4b7036d57139fdffed4caba8892)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::const_cast_derived;
    class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_1c35ff4059b458eeb8f3e5ca1a6078a1)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_545eb30c519e58d5bdb0711bcd2fdc29)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_a4525150adde5464b4f661246d92516e)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_674a2eca67ee51c09cc459a0aae72690)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > > > class_ea663b46fa65508cbc52fc4554bcd0c7("_EigenBase_ea663b46fa65508cbc52fc4554bcd0c7", "", boost::python::no_init);
    class_ea663b46fa65508cbc52fc4554bcd0c7.def("derived", method_pointer_bfc6f38e7fb85ae7ab7436b90d1fd518, boost::python::return_internal_reference<>(), "");
    class_ea663b46fa65508cbc52fc4554bcd0c7.def("derived", autowig::method_decorator_bfc6f38e7fb85ae7ab7436b90d1fd518);
    class_ea663b46fa65508cbc52fc4554bcd0c7.def("derived", method_pointer_2b6d835dd02955409a835442a9d4bad2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ea663b46fa65508cbc52fc4554bcd0c7.def("const_cast_derived", method_pointer_97ddc4b7036d57139fdffed4caba8892, boost::python::return_internal_reference<>(), "");
    class_ea663b46fa65508cbc52fc4554bcd0c7.def("const_cast_derived", autowig::method_decorator_97ddc4b7036d57139fdffed4caba8892);
    class_ea663b46fa65508cbc52fc4554bcd0c7.def("const_derived", method_pointer_1c35ff4059b458eeb8f3e5ca1a6078a1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ea663b46fa65508cbc52fc4554bcd0c7.def("rows", method_pointer_545eb30c519e58d5bdb0711bcd2fdc29, "");
    class_ea663b46fa65508cbc52fc4554bcd0c7.def("cols", method_pointer_a4525150adde5464b4f661246d92516e, "");
    class_ea663b46fa65508cbc52fc4554bcd0c7.def("size", method_pointer_674a2eca67ee51c09cc459a0aae72690, "");

}