#include "_ieigen.h"


namespace autowig
{
    void method_decorator_76b19a62f8085219a06d300e243e3758(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  & param_out)
    { instance.derived() = param_out; }
    void method_decorator_d2573e2f1eb051ecb773ee17bafca371(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > const & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  & param_out)
    { instance.const_cast_derived() = param_out; }
}


void wrapper_11833c8276e05c6b90edd2c2aa72bbda()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_76b19a62f8085219a06d300e243e3758)() = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_5ff4c5cb07e355d08a34848e8945a982)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_d2573e2f1eb051ecb773ee17bafca371)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::const_cast_derived;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_0fcd65dcf59958c29892802e19f74d30)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_26654f62cfb4525bbaedc068cb00afc9)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_e5e88dbbe15f5b72870daa5122d88eaa)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_83f79872700658f5951ddce2275e3279)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > > > class_11833c8276e05c6b90edd2c2aa72bbda("_EigenBase_11833c8276e05c6b90edd2c2aa72bbda", "", boost::python::no_init);
    class_11833c8276e05c6b90edd2c2aa72bbda.def("derived", method_pointer_76b19a62f8085219a06d300e243e3758, boost::python::return_internal_reference<>(), "");
    class_11833c8276e05c6b90edd2c2aa72bbda.def("derived", autowig::method_decorator_76b19a62f8085219a06d300e243e3758);
    class_11833c8276e05c6b90edd2c2aa72bbda.def("derived", method_pointer_5ff4c5cb07e355d08a34848e8945a982, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_11833c8276e05c6b90edd2c2aa72bbda.def("const_cast_derived", method_pointer_d2573e2f1eb051ecb773ee17bafca371, boost::python::return_internal_reference<>(), "");
    class_11833c8276e05c6b90edd2c2aa72bbda.def("const_cast_derived", autowig::method_decorator_d2573e2f1eb051ecb773ee17bafca371);
    class_11833c8276e05c6b90edd2c2aa72bbda.def("const_derived", method_pointer_0fcd65dcf59958c29892802e19f74d30, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_11833c8276e05c6b90edd2c2aa72bbda.def("rows", method_pointer_26654f62cfb4525bbaedc068cb00afc9, "");
    class_11833c8276e05c6b90edd2c2aa72bbda.def("cols", method_pointer_e5e88dbbe15f5b72870daa5122d88eaa, "");
    class_11833c8276e05c6b90edd2c2aa72bbda.def("size", method_pointer_83f79872700658f5951ddce2275e3279, "");

}