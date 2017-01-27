#include "_ieigen.h"


namespace autowig
{
    void method_decorator_d8b4d58624b65b268d5df365c69ebcf1(struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > & instance, class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_95a0f395d1f85021966b138d2af8eb52(struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > const & instance, class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_606739ba444a5269bc6341d7e41349f6()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  & (::Eigen::EigenBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_d8b4d58624b65b268d5df365c69ebcf1)() = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::derived;
    class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_d750d314f1885a078c1057553d70746b)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::derived;
    class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  & (::Eigen::EigenBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_95a0f395d1f85021966b138d2af8eb52)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::const_cast_derived;
    class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_b6fbbf5b83cf5286b1c52e3b45119e65)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_6df3890edf775c2988c40d71eadb01d3)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_bf6753d489b35b3383ddadcf0194afea)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_de437ab5798e5fc69aa93292a17ada70)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > > > class_606739ba444a5269bc6341d7e41349f6("_EigenBase_606739ba444a5269bc6341d7e41349f6", "", boost::python::no_init);
    class_606739ba444a5269bc6341d7e41349f6.def("derived", method_pointer_d8b4d58624b65b268d5df365c69ebcf1, boost::python::return_internal_reference<>(), "");
    class_606739ba444a5269bc6341d7e41349f6.def("derived", autowig::method_decorator_d8b4d58624b65b268d5df365c69ebcf1);
    class_606739ba444a5269bc6341d7e41349f6.def("derived", method_pointer_d750d314f1885a078c1057553d70746b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_606739ba444a5269bc6341d7e41349f6.def("const_cast_derived", method_pointer_95a0f395d1f85021966b138d2af8eb52, boost::python::return_internal_reference<>(), "");
    class_606739ba444a5269bc6341d7e41349f6.def("const_cast_derived", autowig::method_decorator_95a0f395d1f85021966b138d2af8eb52);
    class_606739ba444a5269bc6341d7e41349f6.def("const_derived", method_pointer_b6fbbf5b83cf5286b1c52e3b45119e65, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_606739ba444a5269bc6341d7e41349f6.def("rows", method_pointer_6df3890edf775c2988c40d71eadb01d3, "");
    class_606739ba444a5269bc6341d7e41349f6.def("cols", method_pointer_bf6753d489b35b3383ddadcf0194afea, "");
    class_606739ba444a5269bc6341d7e41349f6.def("size", method_pointer_de437ab5798e5fc69aa93292a17ada70, "");

}