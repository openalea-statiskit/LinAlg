#include "_ieigen.h"


namespace autowig
{
    void method_decorator_edc04eda1f7250b8b067fb5aa0c7434a(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_54c3a416591a572ca96e9b3d752cfe49(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)
    { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_2739d49433385be2afe0d3378518b758(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)
    { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_1fd41f0a445d5f47b9e3bd2e977321b4(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 1 > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_a7972a50144a5d7e90fecf5bbcb7b727(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 1 > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)
    { instance.operator[](param_in_0) = param_out; }
    void method_decorator_1ef62828876350cd94e5ca923b3472e8(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 1 > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)
    { instance.operator()(param_in_0) = param_out; }
    void method_decorator_8a63c5722a9a548590b42e76b6054e99(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 1 > & instance, struct ::std::complex< double >  & param_out)
    { instance.x() = param_out; }
    void method_decorator_a83a2f7d594950aab2644c68a7f7917f(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 1 > & instance, struct ::std::complex< double >  & param_out)
    { instance.y() = param_out; }
    void method_decorator_e6e351b563cb5ec7bf4261a7a789f483(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 1 > & instance, struct ::std::complex< double >  & param_out)
    { instance.z() = param_out; }
    void method_decorator_9d955317e75a5101a1cc907d70cbe3b3(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 1 > & instance, struct ::std::complex< double >  & param_out)
    { instance.w() = param_out; }
}


void wrapper_c422c779fc1c5e94992930a9a315f81d()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_edc04eda1f7250b8b067fb5aa0c7434a)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 1 >::coeffRef;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_54c3a416591a572ca96e9b3d752cfe49)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 1 >::coeffRefByOuterInner;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_2739d49433385be2afe0d3378518b758)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 1 >::operator();
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_1fd41f0a445d5f47b9e3bd2e977321b4)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 1 >::coeffRef;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_a7972a50144a5d7e90fecf5bbcb7b727)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 1 >::operator[];
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_1ef62828876350cd94e5ca923b3472e8)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 1 >::operator();
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_8a63c5722a9a548590b42e76b6054e99)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 1 >::x;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_a83a2f7d594950aab2644c68a7f7917f)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 1 >::y;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_e6e351b563cb5ec7bf4261a7a789f483)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 1 >::z;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_9d955317e75a5101a1cc907d70cbe3b3)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 0 > > > class_c422c779fc1c5e94992930a9a315f81d("_DenseCoeffsBase_c422c779fc1c5e94992930a9a315f81d", "", boost::python::no_init);
    class_c422c779fc1c5e94992930a9a315f81d.def("coeff_ref", method_pointer_edc04eda1f7250b8b067fb5aa0c7434a, boost::python::return_internal_reference<>(), "");
    class_c422c779fc1c5e94992930a9a315f81d.def("coeff_ref", autowig::method_decorator_edc04eda1f7250b8b067fb5aa0c7434a);
    class_c422c779fc1c5e94992930a9a315f81d.def("coeff_ref_by_outer_inner", method_pointer_54c3a416591a572ca96e9b3d752cfe49, boost::python::return_internal_reference<>(), "");
    class_c422c779fc1c5e94992930a9a315f81d.def("coeff_ref_by_outer_inner", autowig::method_decorator_54c3a416591a572ca96e9b3d752cfe49);
    class_c422c779fc1c5e94992930a9a315f81d.def("__call__", method_pointer_2739d49433385be2afe0d3378518b758, boost::python::return_internal_reference<>(), "");
    class_c422c779fc1c5e94992930a9a315f81d.def("__call__", autowig::method_decorator_2739d49433385be2afe0d3378518b758);
    class_c422c779fc1c5e94992930a9a315f81d.def("coeff_ref", method_pointer_1fd41f0a445d5f47b9e3bd2e977321b4, boost::python::return_internal_reference<>(), "");
    class_c422c779fc1c5e94992930a9a315f81d.def("coeff_ref", autowig::method_decorator_1fd41f0a445d5f47b9e3bd2e977321b4);
    class_c422c779fc1c5e94992930a9a315f81d.def("__getitem__", method_pointer_a7972a50144a5d7e90fecf5bbcb7b727, boost::python::return_internal_reference<>(), "");
    class_c422c779fc1c5e94992930a9a315f81d.def("__getitem__", autowig::method_decorator_a7972a50144a5d7e90fecf5bbcb7b727);
    class_c422c779fc1c5e94992930a9a315f81d.def("__call__", method_pointer_1ef62828876350cd94e5ca923b3472e8, boost::python::return_internal_reference<>(), "");
    class_c422c779fc1c5e94992930a9a315f81d.def("__call__", autowig::method_decorator_1ef62828876350cd94e5ca923b3472e8);
    class_c422c779fc1c5e94992930a9a315f81d.def("x", method_pointer_8a63c5722a9a548590b42e76b6054e99, boost::python::return_internal_reference<>(), "");
    class_c422c779fc1c5e94992930a9a315f81d.def("x", autowig::method_decorator_8a63c5722a9a548590b42e76b6054e99);
    class_c422c779fc1c5e94992930a9a315f81d.def("y", method_pointer_a83a2f7d594950aab2644c68a7f7917f, boost::python::return_internal_reference<>(), "");
    class_c422c779fc1c5e94992930a9a315f81d.def("y", autowig::method_decorator_a83a2f7d594950aab2644c68a7f7917f);
    class_c422c779fc1c5e94992930a9a315f81d.def("z", method_pointer_e6e351b563cb5ec7bf4261a7a789f483, boost::python::return_internal_reference<>(), "");
    class_c422c779fc1c5e94992930a9a315f81d.def("z", autowig::method_decorator_e6e351b563cb5ec7bf4261a7a789f483);
    class_c422c779fc1c5e94992930a9a315f81d.def("w", method_pointer_9d955317e75a5101a1cc907d70cbe3b3, boost::python::return_internal_reference<>(), "");
    class_c422c779fc1c5e94992930a9a315f81d.def("w", autowig::method_decorator_9d955317e75a5101a1cc907d70cbe3b3);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 0 > > >();
    }

}