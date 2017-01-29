#include "_linalg.h"


namespace autowig
{
    void method_decorator_ed944981cc6354b8b3f67330c180734d(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::Scalar & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_1a7b370f554d5a2db68b8364a3885013(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::Scalar & param_out)     { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_cb95136fa9745d4f9cb7d401fd7445b7(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::Scalar & param_out)     { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_ade396d211cf5f229998c86a723a43e6(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 > & instance, ::Eigen::Index  param_in_0, ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::Scalar & param_out)     { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_c33fba394a125d8dbe3f62b62f9665d2(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 > & instance, ::Eigen::Index  param_in_0, ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::Scalar & param_out)     { instance.operator[](param_in_0) = param_out; }
    void method_decorator_a81ddb9121bf5e1a95148a78b0d8da20(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 > & instance, ::Eigen::Index  param_in_0, ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::Scalar & param_out)     { instance.operator()(param_in_0) = param_out; }
    void method_decorator_4542f240c1f653a3a7f0de9c578b174f(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 > & instance, ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::Scalar & param_out)     { instance.x() = param_out; }
    void method_decorator_13040b74b470529fbbcdd18c2a2b8c22(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 > & instance, ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::Scalar & param_out)     { instance.y() = param_out; }
    void method_decorator_08cdb4e61d9f570486ba51b37e70efd7(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 > & instance, ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::Scalar & param_out)     { instance.z() = param_out; }
    void method_decorator_1545022e4592504daea517fdbfb3cbae(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 > & instance, ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::Scalar & param_out)     { instance.w() = param_out; }
}


void wrapper_00fd34b090f05d6ba6ef57e82ee8a862()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_ed944981cc6354b8b3f67330c180734d)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::coeffRef;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_1a7b370f554d5a2db68b8364a3885013)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::coeffRefByOuterInner;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_cb95136fa9745d4f9cb7d401fd7445b7)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::operator();
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_ade396d211cf5f229998c86a723a43e6)(::Eigen::Index ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::coeffRef;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_c33fba394a125d8dbe3f62b62f9665d2)(::Eigen::Index ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::operator[];
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_a81ddb9121bf5e1a95148a78b0d8da20)(::Eigen::Index ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::operator();
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_4542f240c1f653a3a7f0de9c578b174f)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::x;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_13040b74b470529fbbcdd18c2a2b8c22)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::y;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_08cdb4e61d9f570486ba51b37e70efd7)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::z;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_1545022e4592504daea517fdbfb3cbae)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 > > > class_00fd34b090f05d6ba6ef57e82ee8a862("_DenseCoeffsBase_00fd34b090f05d6ba6ef57e82ee8a862", "", boost::python::no_init);
    class_00fd34b090f05d6ba6ef57e82ee8a862.def("coeff_ref", method_pointer_ed944981cc6354b8b3f67330c180734d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_00fd34b090f05d6ba6ef57e82ee8a862.def("coeff_ref", autowig::method_decorator_ed944981cc6354b8b3f67330c180734d);
    class_00fd34b090f05d6ba6ef57e82ee8a862.def("coeff_ref_by_outer_inner", method_pointer_1a7b370f554d5a2db68b8364a3885013, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_00fd34b090f05d6ba6ef57e82ee8a862.def("coeff_ref_by_outer_inner", autowig::method_decorator_1a7b370f554d5a2db68b8364a3885013);
    class_00fd34b090f05d6ba6ef57e82ee8a862.def("__call__", method_pointer_cb95136fa9745d4f9cb7d401fd7445b7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_00fd34b090f05d6ba6ef57e82ee8a862.def("__call__", autowig::method_decorator_cb95136fa9745d4f9cb7d401fd7445b7);
    class_00fd34b090f05d6ba6ef57e82ee8a862.def("coeff_ref", method_pointer_ade396d211cf5f229998c86a723a43e6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_00fd34b090f05d6ba6ef57e82ee8a862.def("coeff_ref", autowig::method_decorator_ade396d211cf5f229998c86a723a43e6);
    class_00fd34b090f05d6ba6ef57e82ee8a862.def("__getitem__", method_pointer_c33fba394a125d8dbe3f62b62f9665d2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_00fd34b090f05d6ba6ef57e82ee8a862.def("__getitem__", autowig::method_decorator_c33fba394a125d8dbe3f62b62f9665d2);
    class_00fd34b090f05d6ba6ef57e82ee8a862.def("__call__", method_pointer_a81ddb9121bf5e1a95148a78b0d8da20, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_00fd34b090f05d6ba6ef57e82ee8a862.def("__call__", autowig::method_decorator_a81ddb9121bf5e1a95148a78b0d8da20);
    class_00fd34b090f05d6ba6ef57e82ee8a862.def("x", method_pointer_4542f240c1f653a3a7f0de9c578b174f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_00fd34b090f05d6ba6ef57e82ee8a862.def("x", autowig::method_decorator_4542f240c1f653a3a7f0de9c578b174f);
    class_00fd34b090f05d6ba6ef57e82ee8a862.def("y", method_pointer_13040b74b470529fbbcdd18c2a2b8c22, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_00fd34b090f05d6ba6ef57e82ee8a862.def("y", autowig::method_decorator_13040b74b470529fbbcdd18c2a2b8c22);
    class_00fd34b090f05d6ba6ef57e82ee8a862.def("z", method_pointer_08cdb4e61d9f570486ba51b37e70efd7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_00fd34b090f05d6ba6ef57e82ee8a862.def("z", autowig::method_decorator_08cdb4e61d9f570486ba51b37e70efd7);
    class_00fd34b090f05d6ba6ef57e82ee8a862.def("w", method_pointer_1545022e4592504daea517fdbfb3cbae, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_00fd34b090f05d6ba6ef57e82ee8a862.def("w", autowig::method_decorator_1545022e4592504daea517fdbfb3cbae);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 > > >();
    }

}