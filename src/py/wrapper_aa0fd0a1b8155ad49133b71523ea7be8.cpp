#include "_ieigen.h"


namespace autowig
{
    void method_decorator_519cfc67ce13511e9b51971482239d8d(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >  & param_out)     { instance.base() = param_out; }
    void method_decorator_a98a189517d051a5bb272e3c774909e3(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_89c5d853290450b7a29bb14540a14b57(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, const int  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_10113e0eb9b354f7b50219fa8daef8a7(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, int  const & param_in_1, class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  & param_out)     { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_0a141e0324e657439e82a8f39a377b07(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, long int  param_in_1, int  const & param_in_2, class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  & param_out)     { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_11a01ed2ee145986828f7de7c41c5117(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  & param_out)     { instance.setZero(param_in_0) = param_out; }
    void method_decorator_ec06dce7ce9f550d9f22cee7e3b6c6f4(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  & param_out)     { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_e1b3695a4b68516096f99b6322e51c70(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  & param_out)     { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_4ba010beef305133b18552f2944a8e53(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  & param_out)     { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_4767435b53285b62b132f0aca2bbe0b0(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  & param_out)     { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_7fb5f00e3914546fb9be0382c89831bb(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  & param_out)     { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_aa0fd0a1b8155ad49133b71523ea7be8()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_519cfc67ce13511e9b51971482239d8d)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_e270ab5ba96f5020b66e2e949c7f3ee2)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_45f402ff8ae05c60bb4ffcd79ea58cd3)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_a8b94c82f4ab539595e1886dc5739da0)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::cols;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_cc344e2774fd5ce7887ed1c5fb0ddf70)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::coeff;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_0a5ca98ff0e15eef87b7888915cf4d14)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::coeff;
    int  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_a98a189517d051a5bb272e3c774909e3)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::coeffRef;
    int  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_89c5d853290450b7a29bb14540a14b57)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::coeffRef;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_22a434658c965245830850653b62ea78)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::coeffRef;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_a78cf84d7cae528a9baa5221d6d68092)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::coeffRef;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_a210c6fc970c54408d340d6d8f822940)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_67eded1f86735308ba799da8379290c0)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_7b24fd4d61a35a248fd28af614c33654)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_05cd81fdd3485179856f38be01341343)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_f31a1d3b943d5ef7a22d073980512c11)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::conservativeResize;
    class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_10113e0eb9b354f7b50219fa8daef8a7)(long int , int  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::setConstant;
    class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_0a141e0324e657439e82a8f39a377b07)(long int , long int , int  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::setConstant;
    class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_11a01ed2ee145986828f7de7c41c5117)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::setZero;
    class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_ec06dce7ce9f550d9f22cee7e3b6c6f4)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::setZero;
    class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_e1b3695a4b68516096f99b6322e51c70)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::setOnes;
    class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_4ba010beef305133b18552f2944a8e53)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::setOnes;
    class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_4767435b53285b62b132f0aca2bbe0b0)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::setRandom;
    class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_7fb5f00e3914546fb9be0382c89831bb)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::setRandom;
    void  (*method_pointer_e23b1187f08a50cb899498490307f6a1)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > > >, boost::noncopyable > class_aa0fd0a1b8155ad49133b71523ea7be8("_PlainObjectBase_aa0fd0a1b8155ad49133b71523ea7be8", "", boost::python::no_init);
    class_aa0fd0a1b8155ad49133b71523ea7be8.def("base", method_pointer_519cfc67ce13511e9b51971482239d8d, boost::python::return_internal_reference<>(), "");
    class_aa0fd0a1b8155ad49133b71523ea7be8.def("base", autowig::method_decorator_519cfc67ce13511e9b51971482239d8d);
    class_aa0fd0a1b8155ad49133b71523ea7be8.def("base", method_pointer_e270ab5ba96f5020b66e2e949c7f3ee2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_aa0fd0a1b8155ad49133b71523ea7be8.def("rows", method_pointer_45f402ff8ae05c60bb4ffcd79ea58cd3, "");
    class_aa0fd0a1b8155ad49133b71523ea7be8.def("cols", method_pointer_a8b94c82f4ab539595e1886dc5739da0, "");
    class_aa0fd0a1b8155ad49133b71523ea7be8.def("coeff", method_pointer_cc344e2774fd5ce7887ed1c5fb0ddf70, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_aa0fd0a1b8155ad49133b71523ea7be8.def("coeff", method_pointer_0a5ca98ff0e15eef87b7888915cf4d14, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_aa0fd0a1b8155ad49133b71523ea7be8.def("coeff_ref", method_pointer_a98a189517d051a5bb272e3c774909e3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_aa0fd0a1b8155ad49133b71523ea7be8.def("coeff_ref", autowig::method_decorator_a98a189517d051a5bb272e3c774909e3);
    class_aa0fd0a1b8155ad49133b71523ea7be8.def("coeff_ref", method_pointer_89c5d853290450b7a29bb14540a14b57, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_aa0fd0a1b8155ad49133b71523ea7be8.def("coeff_ref", autowig::method_decorator_89c5d853290450b7a29bb14540a14b57);
    class_aa0fd0a1b8155ad49133b71523ea7be8.def("coeff_ref", method_pointer_22a434658c965245830850653b62ea78, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_aa0fd0a1b8155ad49133b71523ea7be8.def("coeff_ref", method_pointer_a78cf84d7cae528a9baa5221d6d68092, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_aa0fd0a1b8155ad49133b71523ea7be8.def("resize", method_pointer_a210c6fc970c54408d340d6d8f822940, "");
    class_aa0fd0a1b8155ad49133b71523ea7be8.def("resize", method_pointer_67eded1f86735308ba799da8379290c0, "");
    class_aa0fd0a1b8155ad49133b71523ea7be8.def("resize", method_pointer_7b24fd4d61a35a248fd28af614c33654, "");
    class_aa0fd0a1b8155ad49133b71523ea7be8.def("resize", method_pointer_05cd81fdd3485179856f38be01341343, "");
    class_aa0fd0a1b8155ad49133b71523ea7be8.def("conservative_resize", method_pointer_f31a1d3b943d5ef7a22d073980512c11, "");
    class_aa0fd0a1b8155ad49133b71523ea7be8.def("set_constant", method_pointer_10113e0eb9b354f7b50219fa8daef8a7, boost::python::return_internal_reference<>(), "");
    class_aa0fd0a1b8155ad49133b71523ea7be8.def("set_constant", autowig::method_decorator_10113e0eb9b354f7b50219fa8daef8a7);
    class_aa0fd0a1b8155ad49133b71523ea7be8.def("set_constant", method_pointer_0a141e0324e657439e82a8f39a377b07, boost::python::return_internal_reference<>(), "");
    class_aa0fd0a1b8155ad49133b71523ea7be8.def("set_constant", autowig::method_decorator_0a141e0324e657439e82a8f39a377b07);
    class_aa0fd0a1b8155ad49133b71523ea7be8.def("set_zero", method_pointer_11a01ed2ee145986828f7de7c41c5117, boost::python::return_internal_reference<>(), "");
    class_aa0fd0a1b8155ad49133b71523ea7be8.def("set_zero", autowig::method_decorator_11a01ed2ee145986828f7de7c41c5117);
    class_aa0fd0a1b8155ad49133b71523ea7be8.def("set_zero", method_pointer_ec06dce7ce9f550d9f22cee7e3b6c6f4, boost::python::return_internal_reference<>(), "");
    class_aa0fd0a1b8155ad49133b71523ea7be8.def("set_zero", autowig::method_decorator_ec06dce7ce9f550d9f22cee7e3b6c6f4);
    class_aa0fd0a1b8155ad49133b71523ea7be8.def("set_ones", method_pointer_e1b3695a4b68516096f99b6322e51c70, boost::python::return_internal_reference<>(), "");
    class_aa0fd0a1b8155ad49133b71523ea7be8.def("set_ones", autowig::method_decorator_e1b3695a4b68516096f99b6322e51c70);
    class_aa0fd0a1b8155ad49133b71523ea7be8.def("set_ones", method_pointer_4ba010beef305133b18552f2944a8e53, boost::python::return_internal_reference<>(), "");
    class_aa0fd0a1b8155ad49133b71523ea7be8.def("set_ones", autowig::method_decorator_4ba010beef305133b18552f2944a8e53);
    class_aa0fd0a1b8155ad49133b71523ea7be8.def("set_random", method_pointer_4767435b53285b62b132f0aca2bbe0b0, boost::python::return_internal_reference<>(), "");
    class_aa0fd0a1b8155ad49133b71523ea7be8.def("set_random", autowig::method_decorator_4767435b53285b62b132f0aca2bbe0b0);
    class_aa0fd0a1b8155ad49133b71523ea7be8.def("set_random", method_pointer_7fb5f00e3914546fb9be0382c89831bb, boost::python::return_internal_reference<>(), "");
    class_aa0fd0a1b8155ad49133b71523ea7be8.def("set_random", autowig::method_decorator_7fb5f00e3914546fb9be0382c89831bb);
    class_aa0fd0a1b8155ad49133b71523ea7be8.def("check_template_params", method_pointer_e23b1187f08a50cb899498490307f6a1, "");
    class_aa0fd0a1b8155ad49133b71523ea7be8.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > > > >();
    }

}