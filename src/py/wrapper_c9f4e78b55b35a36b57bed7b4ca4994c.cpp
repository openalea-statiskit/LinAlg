#include "_ieigen.h"


namespace autowig
{
    void method_decorator_e458d18279e65d238dcf6c32ed626102(struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > > & instance, class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_3a9e5f6e54d95312b1733895d0dfebab(struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > > const & instance, class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_c9f4e78b55b35a36b57bed7b4ca4994c()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  & (::Eigen::EigenBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_e458d18279e65d238dcf6c32ed626102)() = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::derived;
    class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_049b32b7f1965278ad2c558be57734e6)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::derived;
    class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  & (::Eigen::EigenBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_3a9e5f6e54d95312b1733895d0dfebab)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::const_cast_derived;
    class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_8cf10733b48955bdbf04fe0cb1dbf034)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_4c609748925d5f1b9582e660a5f4b1ef)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_0e41d62fb6965ef49a3d5265e3a51ecc)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_c01a414d555250e982ef28b8dd88c2cf)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > > > > class_c9f4e78b55b35a36b57bed7b4ca4994c("_EigenBase_c9f4e78b55b35a36b57bed7b4ca4994c", "", boost::python::no_init);
    class_c9f4e78b55b35a36b57bed7b4ca4994c.def("derived", method_pointer_e458d18279e65d238dcf6c32ed626102, boost::python::return_internal_reference<>(), "");
    class_c9f4e78b55b35a36b57bed7b4ca4994c.def("derived", autowig::method_decorator_e458d18279e65d238dcf6c32ed626102);
    class_c9f4e78b55b35a36b57bed7b4ca4994c.def("derived", method_pointer_049b32b7f1965278ad2c558be57734e6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c9f4e78b55b35a36b57bed7b4ca4994c.def("const_cast_derived", method_pointer_3a9e5f6e54d95312b1733895d0dfebab, boost::python::return_internal_reference<>(), "");
    class_c9f4e78b55b35a36b57bed7b4ca4994c.def("const_cast_derived", autowig::method_decorator_3a9e5f6e54d95312b1733895d0dfebab);
    class_c9f4e78b55b35a36b57bed7b4ca4994c.def("const_derived", method_pointer_8cf10733b48955bdbf04fe0cb1dbf034, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c9f4e78b55b35a36b57bed7b4ca4994c.def("rows", method_pointer_4c609748925d5f1b9582e660a5f4b1ef, "");
    class_c9f4e78b55b35a36b57bed7b4ca4994c.def("cols", method_pointer_0e41d62fb6965ef49a3d5265e3a51ecc, "");
    class_c9f4e78b55b35a36b57bed7b4ca4994c.def("size", method_pointer_c01a414d555250e982ef28b8dd88c2cf, "");

}