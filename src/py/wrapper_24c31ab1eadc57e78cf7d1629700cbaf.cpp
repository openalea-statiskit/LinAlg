#include "_ieigen.h"


namespace autowig
{
    void method_decorator_7e0b6220c7b95d49b938ce8068e67aa6(struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > > & instance, class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_d24ef2a22c0351e4aedb223361a0d006(struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > > const & instance, class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_24c31ab1eadc57e78cf7d1629700cbaf()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_7e0b6220c7b95d49b938ce8068e67aa6)() = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::derived;
    class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_9e31ccb4f57550f1995d29e001c43c3b)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::derived;
    class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_d24ef2a22c0351e4aedb223361a0d006)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::const_cast_derived;
    class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_9030275835845c3ab8115b23aed000d3)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_6c7e4e77acad53e68b132d4323abe8e5)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_430372f9bf0d538cac9b60c783f56a15)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_1855b985d8d252e7bea47aebce09b58b)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > > > > class_24c31ab1eadc57e78cf7d1629700cbaf("_EigenBase_24c31ab1eadc57e78cf7d1629700cbaf", "", boost::python::no_init);
    class_24c31ab1eadc57e78cf7d1629700cbaf.def("derived", method_pointer_7e0b6220c7b95d49b938ce8068e67aa6, boost::python::return_internal_reference<>(), "");
    class_24c31ab1eadc57e78cf7d1629700cbaf.def("derived", autowig::method_decorator_7e0b6220c7b95d49b938ce8068e67aa6);
    class_24c31ab1eadc57e78cf7d1629700cbaf.def("derived", method_pointer_9e31ccb4f57550f1995d29e001c43c3b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_24c31ab1eadc57e78cf7d1629700cbaf.def("const_cast_derived", method_pointer_d24ef2a22c0351e4aedb223361a0d006, boost::python::return_internal_reference<>(), "");
    class_24c31ab1eadc57e78cf7d1629700cbaf.def("const_cast_derived", autowig::method_decorator_d24ef2a22c0351e4aedb223361a0d006);
    class_24c31ab1eadc57e78cf7d1629700cbaf.def("const_derived", method_pointer_9030275835845c3ab8115b23aed000d3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_24c31ab1eadc57e78cf7d1629700cbaf.def("rows", method_pointer_6c7e4e77acad53e68b132d4323abe8e5, "");
    class_24c31ab1eadc57e78cf7d1629700cbaf.def("cols", method_pointer_430372f9bf0d538cac9b60c783f56a15, "");
    class_24c31ab1eadc57e78cf7d1629700cbaf.def("size", method_pointer_1855b985d8d252e7bea47aebce09b58b, "");

}