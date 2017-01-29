#include "_linalg.h"


namespace autowig
{
    void method_decorator_eb20dbd27235578b8e50c98d2934ec80(struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > & instance, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_dcfe3df8f57352cdb38fcf0f61a7e13d(struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > const & instance, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_81ee7ad6d9c95f98acffdfcee8c9dbf5()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_eb20dbd27235578b8e50c98d2934ec80)() = &::Eigen::EigenBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::derived;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_d92db36e6be4583d8ea61ce28355f7b7)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::derived;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_dcfe3df8f57352cdb38fcf0f61a7e13d)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::const_cast_derived;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_168318e2e41e56e8bd2462209f0f4c85)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::const_derived;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > > > class_81ee7ad6d9c95f98acffdfcee8c9dbf5("_EigenBase_81ee7ad6d9c95f98acffdfcee8c9dbf5", "", boost::python::no_init);
    class_81ee7ad6d9c95f98acffdfcee8c9dbf5.def("derived", method_pointer_eb20dbd27235578b8e50c98d2934ec80, boost::python::return_internal_reference<>(), "");
    class_81ee7ad6d9c95f98acffdfcee8c9dbf5.def("derived", autowig::method_decorator_eb20dbd27235578b8e50c98d2934ec80);
    class_81ee7ad6d9c95f98acffdfcee8c9dbf5.def("derived", method_pointer_d92db36e6be4583d8ea61ce28355f7b7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_81ee7ad6d9c95f98acffdfcee8c9dbf5.def("const_cast_derived", method_pointer_dcfe3df8f57352cdb38fcf0f61a7e13d, boost::python::return_internal_reference<>(), "");
    class_81ee7ad6d9c95f98acffdfcee8c9dbf5.def("const_cast_derived", autowig::method_decorator_dcfe3df8f57352cdb38fcf0f61a7e13d);
    class_81ee7ad6d9c95f98acffdfcee8c9dbf5.def("const_derived", method_pointer_168318e2e41e56e8bd2462209f0f4c85, boost::python::return_value_policy< boost::python::return_by_value >(), "");

}