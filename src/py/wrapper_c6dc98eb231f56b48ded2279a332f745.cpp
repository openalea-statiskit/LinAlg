#include "_ieigen.h"


namespace autowig
{
    void method_decorator_592bb53edebc52ddbd0be1a61e8db9d4(struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > > & instance, class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  & param_out)
    { instance.derived() = param_out; }
    void method_decorator_9028b08c38945c429cda0766af2c6f81(struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > > const & instance, class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  & param_out)
    { instance.const_cast_derived() = param_out; }
}


void wrapper_c6dc98eb231f56b48ded2279a332f745()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_592bb53edebc52ddbd0be1a61e8db9d4)() = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::derived;
    class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_c69f413438cb5702ac64d78aa8c78940)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::derived;
    class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_9028b08c38945c429cda0766af2c6f81)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::const_cast_derived;
    class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_409c5f708f495048b3a8565d10442de8)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_70168085cf5953d5b4fe1a4a5b1b8f51)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_7ef73b0ebbbb5cf98a2d6845b9fe5b4a)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_5f4aa16cee0c594e8d54302b01260e27)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > > > > class_c6dc98eb231f56b48ded2279a332f745("_EigenBase_c6dc98eb231f56b48ded2279a332f745", "", boost::python::no_init);
    class_c6dc98eb231f56b48ded2279a332f745.def("derived", method_pointer_592bb53edebc52ddbd0be1a61e8db9d4, boost::python::return_internal_reference<>(), "");
    class_c6dc98eb231f56b48ded2279a332f745.def("derived", autowig::method_decorator_592bb53edebc52ddbd0be1a61e8db9d4);
    class_c6dc98eb231f56b48ded2279a332f745.def("derived", method_pointer_c69f413438cb5702ac64d78aa8c78940, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c6dc98eb231f56b48ded2279a332f745.def("const_cast_derived", method_pointer_9028b08c38945c429cda0766af2c6f81, boost::python::return_internal_reference<>(), "");
    class_c6dc98eb231f56b48ded2279a332f745.def("const_cast_derived", autowig::method_decorator_9028b08c38945c429cda0766af2c6f81);
    class_c6dc98eb231f56b48ded2279a332f745.def("const_derived", method_pointer_409c5f708f495048b3a8565d10442de8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c6dc98eb231f56b48ded2279a332f745.def("rows", method_pointer_70168085cf5953d5b4fe1a4a5b1b8f51, "");
    class_c6dc98eb231f56b48ded2279a332f745.def("cols", method_pointer_7ef73b0ebbbb5cf98a2d6845b9fe5b4a, "");
    class_c6dc98eb231f56b48ded2279a332f745.def("size", method_pointer_5f4aa16cee0c594e8d54302b01260e27, "");

}