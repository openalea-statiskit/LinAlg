#include "_ieigen.h"


namespace autowig
{
    void method_decorator_969ad76f572c55a8be3ecb0d487df99e(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_fe2ff7c6d4d951868d1ff68f4ef236f3(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > const & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_9e9179df87b755bfb16f38f7427b1d6d()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_969ad76f572c55a8be3ecb0d487df99e)() = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_9294df656ef75d748a9190d99e149e89)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_fe2ff7c6d4d951868d1ff68f4ef236f3)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::const_cast_derived;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_7b1e9f6db8de55d6b46b3088b6ec3d27)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_8070975242305d1990ec20046a7b8d3d)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_d020a200e6ed5c54a4207dd857e7e9d5)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_b4c7fdcacac45b8dbb1f775755751c28)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > > > class_9e9179df87b755bfb16f38f7427b1d6d("_EigenBase_9e9179df87b755bfb16f38f7427b1d6d", "", boost::python::no_init);
    class_9e9179df87b755bfb16f38f7427b1d6d.def("derived", method_pointer_969ad76f572c55a8be3ecb0d487df99e, boost::python::return_internal_reference<>(), "");
    class_9e9179df87b755bfb16f38f7427b1d6d.def("derived", autowig::method_decorator_969ad76f572c55a8be3ecb0d487df99e);
    class_9e9179df87b755bfb16f38f7427b1d6d.def("derived", method_pointer_9294df656ef75d748a9190d99e149e89, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_9e9179df87b755bfb16f38f7427b1d6d.def("const_cast_derived", method_pointer_fe2ff7c6d4d951868d1ff68f4ef236f3, boost::python::return_internal_reference<>(), "");
    class_9e9179df87b755bfb16f38f7427b1d6d.def("const_cast_derived", autowig::method_decorator_fe2ff7c6d4d951868d1ff68f4ef236f3);
    class_9e9179df87b755bfb16f38f7427b1d6d.def("const_derived", method_pointer_7b1e9f6db8de55d6b46b3088b6ec3d27, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_9e9179df87b755bfb16f38f7427b1d6d.def("rows", method_pointer_8070975242305d1990ec20046a7b8d3d, "");
    class_9e9179df87b755bfb16f38f7427b1d6d.def("cols", method_pointer_d020a200e6ed5c54a4207dd857e7e9d5, "");
    class_9e9179df87b755bfb16f38f7427b1d6d.def("size", method_pointer_b4c7fdcacac45b8dbb1f775755751c28, "");

}