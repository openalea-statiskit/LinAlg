#include "_ieigen.h"


namespace autowig
{
    void method_decorator_3cddc7b6193153efb29fc1822313acbb(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_9292e3aafe1e5955b5ac925b738a4601(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > > const & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_1b81bf28daf15479be479ef6d16e11b8()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_3cddc7b6193153efb29fc1822313acbb)() = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_5584472d88445fe28613e7ebd110761e)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_9292e3aafe1e5955b5ac925b738a4601)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::const_cast_derived;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_c41c29ed5c6b5fc8971b4397ffc02034)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_a0a855abff3650f5bf05fa20f383a5c7)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_0f42cfb8f17e5d58953e6b9129b7f1f6)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_c78d645287b050e7bb694a961600132d)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > > > > class_1b81bf28daf15479be479ef6d16e11b8("_EigenBase_1b81bf28daf15479be479ef6d16e11b8", "", boost::python::no_init);
    class_1b81bf28daf15479be479ef6d16e11b8.def("derived", method_pointer_3cddc7b6193153efb29fc1822313acbb, boost::python::return_internal_reference<>(), "");
    class_1b81bf28daf15479be479ef6d16e11b8.def("derived", autowig::method_decorator_3cddc7b6193153efb29fc1822313acbb);
    class_1b81bf28daf15479be479ef6d16e11b8.def("derived", method_pointer_5584472d88445fe28613e7ebd110761e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1b81bf28daf15479be479ef6d16e11b8.def("const_cast_derived", method_pointer_9292e3aafe1e5955b5ac925b738a4601, boost::python::return_internal_reference<>(), "");
    class_1b81bf28daf15479be479ef6d16e11b8.def("const_cast_derived", autowig::method_decorator_9292e3aafe1e5955b5ac925b738a4601);
    class_1b81bf28daf15479be479ef6d16e11b8.def("const_derived", method_pointer_c41c29ed5c6b5fc8971b4397ffc02034, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1b81bf28daf15479be479ef6d16e11b8.def("rows", method_pointer_a0a855abff3650f5bf05fa20f383a5c7, "");
    class_1b81bf28daf15479be479ef6d16e11b8.def("cols", method_pointer_0f42cfb8f17e5d58953e6b9129b7f1f6, "");
    class_1b81bf28daf15479be479ef6d16e11b8.def("size", method_pointer_c78d645287b050e7bb694a961600132d, "");

}