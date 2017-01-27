#include "_ieigen.h"


namespace autowig
{
    void method_decorator_9a26b9e462de58cdb2857ced338b79bb(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_480b6dc496f4534b8ebe773e31f2c2e1(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)     { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_c0d4122122095da4a39094b94d85421a(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)     { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_6a4d80fb8312572bb679ade8c7b8a908(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 1 > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_d08c9c5dd292534f8f699afa2a7c5871(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 1 > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)     { instance.operator[](param_in_0) = param_out; }
    void method_decorator_65cd05eb48fd58dc97cc29fc11fff5c5(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 1 > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)     { instance.operator()(param_in_0) = param_out; }
    void method_decorator_574fde6c31e25782a33ee012df259fac(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 1 > & instance, struct ::std::complex< double >  & param_out)     { instance.x() = param_out; }
    void method_decorator_7265ccb8aa50505e80ea8f4d300e92c9(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 1 > & instance, struct ::std::complex< double >  & param_out)     { instance.y() = param_out; }
    void method_decorator_348d8062a82b50798c5c4d6491123262(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 1 > & instance, struct ::std::complex< double >  & param_out)     { instance.z() = param_out; }
    void method_decorator_33f0f4eb76d257dbbe345466d0b3e08a(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 1 > & instance, struct ::std::complex< double >  & param_out)     { instance.w() = param_out; }
}


void wrapper_542a965fead65d53b599ea32b28cf3cf()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_9a26b9e462de58cdb2857ced338b79bb)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 1 >::coeffRef;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_480b6dc496f4534b8ebe773e31f2c2e1)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 1 >::coeffRefByOuterInner;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_c0d4122122095da4a39094b94d85421a)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 1 >::operator();
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_6a4d80fb8312572bb679ade8c7b8a908)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 1 >::coeffRef;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_d08c9c5dd292534f8f699afa2a7c5871)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 1 >::operator[];
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_65cd05eb48fd58dc97cc29fc11fff5c5)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 1 >::operator();
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_574fde6c31e25782a33ee012df259fac)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 1 >::x;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_7265ccb8aa50505e80ea8f4d300e92c9)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 1 >::y;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_348d8062a82b50798c5c4d6491123262)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 1 >::z;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_33f0f4eb76d257dbbe345466d0b3e08a)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 0 > > > class_542a965fead65d53b599ea32b28cf3cf("_DenseCoeffsBase_542a965fead65d53b599ea32b28cf3cf", "", boost::python::no_init);
    class_542a965fead65d53b599ea32b28cf3cf.def("coeff_ref", method_pointer_9a26b9e462de58cdb2857ced338b79bb, boost::python::return_internal_reference<>(), "");
    class_542a965fead65d53b599ea32b28cf3cf.def("coeff_ref", autowig::method_decorator_9a26b9e462de58cdb2857ced338b79bb);
    class_542a965fead65d53b599ea32b28cf3cf.def("coeff_ref_by_outer_inner", method_pointer_480b6dc496f4534b8ebe773e31f2c2e1, boost::python::return_internal_reference<>(), "");
    class_542a965fead65d53b599ea32b28cf3cf.def("coeff_ref_by_outer_inner", autowig::method_decorator_480b6dc496f4534b8ebe773e31f2c2e1);
    class_542a965fead65d53b599ea32b28cf3cf.def("__call__", method_pointer_c0d4122122095da4a39094b94d85421a, boost::python::return_internal_reference<>(), "");
    class_542a965fead65d53b599ea32b28cf3cf.def("__call__", autowig::method_decorator_c0d4122122095da4a39094b94d85421a);
    class_542a965fead65d53b599ea32b28cf3cf.def("coeff_ref", method_pointer_6a4d80fb8312572bb679ade8c7b8a908, boost::python::return_internal_reference<>(), "");
    class_542a965fead65d53b599ea32b28cf3cf.def("coeff_ref", autowig::method_decorator_6a4d80fb8312572bb679ade8c7b8a908);
    class_542a965fead65d53b599ea32b28cf3cf.def("__getitem__", method_pointer_d08c9c5dd292534f8f699afa2a7c5871, boost::python::return_internal_reference<>(), "");
    class_542a965fead65d53b599ea32b28cf3cf.def("__getitem__", autowig::method_decorator_d08c9c5dd292534f8f699afa2a7c5871);
    class_542a965fead65d53b599ea32b28cf3cf.def("__call__", method_pointer_65cd05eb48fd58dc97cc29fc11fff5c5, boost::python::return_internal_reference<>(), "");
    class_542a965fead65d53b599ea32b28cf3cf.def("__call__", autowig::method_decorator_65cd05eb48fd58dc97cc29fc11fff5c5);
    class_542a965fead65d53b599ea32b28cf3cf.def("x", method_pointer_574fde6c31e25782a33ee012df259fac, boost::python::return_internal_reference<>(), "");
    class_542a965fead65d53b599ea32b28cf3cf.def("x", autowig::method_decorator_574fde6c31e25782a33ee012df259fac);
    class_542a965fead65d53b599ea32b28cf3cf.def("y", method_pointer_7265ccb8aa50505e80ea8f4d300e92c9, boost::python::return_internal_reference<>(), "");
    class_542a965fead65d53b599ea32b28cf3cf.def("y", autowig::method_decorator_7265ccb8aa50505e80ea8f4d300e92c9);
    class_542a965fead65d53b599ea32b28cf3cf.def("z", method_pointer_348d8062a82b50798c5c4d6491123262, boost::python::return_internal_reference<>(), "");
    class_542a965fead65d53b599ea32b28cf3cf.def("z", autowig::method_decorator_348d8062a82b50798c5c4d6491123262);
    class_542a965fead65d53b599ea32b28cf3cf.def("w", method_pointer_33f0f4eb76d257dbbe345466d0b3e08a, boost::python::return_internal_reference<>(), "");
    class_542a965fead65d53b599ea32b28cf3cf.def("w", autowig::method_decorator_33f0f4eb76d257dbbe345466d0b3e08a);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 0 > > >();
    }

}