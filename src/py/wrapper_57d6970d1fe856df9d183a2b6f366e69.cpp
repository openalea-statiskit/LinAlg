#include "_ieigen.h"


namespace autowig
{
    void method_decorator_97c17b3fc8db5f69b74a50c492409d78(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  & param_out)
    { instance.derived() = param_out; }
    void method_decorator_478f7549c531531695803bd0186f4e22(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > > const & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  & param_out)
    { instance.const_cast_derived() = param_out; }
}


void wrapper_57d6970d1fe856df9d183a2b6f366e69()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_97c17b3fc8db5f69b74a50c492409d78)() = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_dd69da2c373251e2904b0f566a64ac5c)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_478f7549c531531695803bd0186f4e22)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::const_cast_derived;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_cc89c05dc5c65ea8b442a7d00b565515)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_e8fdcff763da5892b8e07d60847346e6)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_fafbe757867f587f9d22ba914a685e3f)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_2d1a94f4fc97504bb59572c53c3679e1)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > > > > class_57d6970d1fe856df9d183a2b6f366e69("_EigenBase_57d6970d1fe856df9d183a2b6f366e69", "", boost::python::no_init);
    class_57d6970d1fe856df9d183a2b6f366e69.def("derived", method_pointer_97c17b3fc8db5f69b74a50c492409d78, boost::python::return_internal_reference<>(), "");
    class_57d6970d1fe856df9d183a2b6f366e69.def("derived", autowig::method_decorator_97c17b3fc8db5f69b74a50c492409d78);
    class_57d6970d1fe856df9d183a2b6f366e69.def("derived", method_pointer_dd69da2c373251e2904b0f566a64ac5c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_57d6970d1fe856df9d183a2b6f366e69.def("const_cast_derived", method_pointer_478f7549c531531695803bd0186f4e22, boost::python::return_internal_reference<>(), "");
    class_57d6970d1fe856df9d183a2b6f366e69.def("const_cast_derived", autowig::method_decorator_478f7549c531531695803bd0186f4e22);
    class_57d6970d1fe856df9d183a2b6f366e69.def("const_derived", method_pointer_cc89c05dc5c65ea8b442a7d00b565515, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_57d6970d1fe856df9d183a2b6f366e69.def("rows", method_pointer_e8fdcff763da5892b8e07d60847346e6, "");
    class_57d6970d1fe856df9d183a2b6f366e69.def("cols", method_pointer_fafbe757867f587f9d22ba914a685e3f, "");
    class_57d6970d1fe856df9d183a2b6f366e69.def("size", method_pointer_2d1a94f4fc97504bb59572c53c3679e1, "");

}