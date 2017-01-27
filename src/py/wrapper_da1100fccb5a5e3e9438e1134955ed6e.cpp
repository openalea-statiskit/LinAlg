#include "_ieigen.h"


namespace autowig
{
    void method_decorator_5411284921215fc0a3d6d3dd47d73754(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_6faee2d0e0de5c5e99e631dad0fecfee(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)     { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_6174bc54e28a525fbafae97dc9e2e34d(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)     { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_48ea841fe22258c5aa47a29e5cfdb611(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 > & instance, long int  param_in_0, const float  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
// TODO     void method_decorator_937465799b695141b36326f25f9006b5(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 > & instance, long int  param_in_0, const float  & param_out)     { instance.operator[](param_in_0) = param_out; }
    void method_decorator_9712a6bedd8b5627967352509c0bdaed(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 > & instance, long int  param_in_0, const float  & param_out)     { instance.operator()(param_in_0) = param_out; }
// TODO // TODO     void method_decorator_2a5840237840562ba9058856d62cca91(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 > & instance, const float  & param_out)     { instance.x() = param_out; }
// TODO     void method_decorator_165c3c18ed0552d48d2ba9ac2d7904a9(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 > & instance, const float  & param_out)     { instance.y() = param_out; }
// TODO     void method_decorator_f3175e5a004f5b519b02ed939b70ab3b(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 > & instance, const float  & param_out)     { instance.z() = param_out; }
// TODO     void method_decorator_941def2554c152ef8471dafbfe5b5975(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 > & instance, const float  & param_out)     { instance.w() = param_out; }
}


void wrapper_da1100fccb5a5e3e9438e1134955ed6e()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_5411284921215fc0a3d6d3dd47d73754)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::coeffRef;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_6faee2d0e0de5c5e99e631dad0fecfee)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::coeffRefByOuterInner;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_6174bc54e28a525fbafae97dc9e2e34d)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::operator();
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_48ea841fe22258c5aa47a29e5cfdb611)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::coeffRef;
// TODO // TODO     float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_937465799b695141b36326f25f9006b5)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::operator[];
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_9712a6bedd8b5627967352509c0bdaed)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::operator();
// TODO     float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_2a5840237840562ba9058856d62cca91)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::x;
// TODO     float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_165c3c18ed0552d48d2ba9ac2d7904a9)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::y;
// TODO     float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_f3175e5a004f5b519b02ed939b70ab3b)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::z;
// TODO     float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_941def2554c152ef8471dafbfe5b5975)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 0 > > > class_da1100fccb5a5e3e9438e1134955ed6e("_DenseCoeffsBase_da1100fccb5a5e3e9438e1134955ed6e", "", boost::python::no_init);
    class_da1100fccb5a5e3e9438e1134955ed6e.def("coeff_ref", method_pointer_5411284921215fc0a3d6d3dd47d73754, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_da1100fccb5a5e3e9438e1134955ed6e.def("coeff_ref", autowig::method_decorator_5411284921215fc0a3d6d3dd47d73754);
    class_da1100fccb5a5e3e9438e1134955ed6e.def("coeff_ref_by_outer_inner", method_pointer_6faee2d0e0de5c5e99e631dad0fecfee, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_da1100fccb5a5e3e9438e1134955ed6e.def("coeff_ref_by_outer_inner", autowig::method_decorator_6faee2d0e0de5c5e99e631dad0fecfee);
    class_da1100fccb5a5e3e9438e1134955ed6e.def("__call__", method_pointer_6174bc54e28a525fbafae97dc9e2e34d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_da1100fccb5a5e3e9438e1134955ed6e.def("__call__", autowig::method_decorator_6174bc54e28a525fbafae97dc9e2e34d);
    class_da1100fccb5a5e3e9438e1134955ed6e.def("coeff_ref", method_pointer_48ea841fe22258c5aa47a29e5cfdb611, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_da1100fccb5a5e3e9438e1134955ed6e.def("coeff_ref", autowig::method_decorator_48ea841fe22258c5aa47a29e5cfdb611);
// TODO // TODO     class_da1100fccb5a5e3e9438e1134955ed6e.def("__getitem__", method_pointer_937465799b695141b36326f25f9006b5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
// TODO // TODO     class_da1100fccb5a5e3e9438e1134955ed6e.def("__getitem__", autowig::method_decorator_937465799b695141b36326f25f9006b5);
    class_da1100fccb5a5e3e9438e1134955ed6e.def("__call__", method_pointer_9712a6bedd8b5627967352509c0bdaed, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_da1100fccb5a5e3e9438e1134955ed6e.def("__call__", autowig::method_decorator_9712a6bedd8b5627967352509c0bdaed);
// TODO     class_da1100fccb5a5e3e9438e1134955ed6e.def("x", method_pointer_2a5840237840562ba9058856d62cca91, boost::python::return_value_policy< boost::python::return_by_value >(), "");
// TODO     class_da1100fccb5a5e3e9438e1134955ed6e.def("x", autowig::method_decorator_2a5840237840562ba9058856d62cca91);
// TODO     class_da1100fccb5a5e3e9438e1134955ed6e.def("y", method_pointer_165c3c18ed0552d48d2ba9ac2d7904a9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
// TODO     class_da1100fccb5a5e3e9438e1134955ed6e.def("y", autowig::method_decorator_165c3c18ed0552d48d2ba9ac2d7904a9);
// TODO     class_da1100fccb5a5e3e9438e1134955ed6e.def("z", method_pointer_f3175e5a004f5b519b02ed939b70ab3b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
// TODO     class_da1100fccb5a5e3e9438e1134955ed6e.def("z", autowig::method_decorator_f3175e5a004f5b519b02ed939b70ab3b);
// TODO     class_da1100fccb5a5e3e9438e1134955ed6e.def("w", method_pointer_941def2554c152ef8471dafbfe5b5975, boost::python::return_value_policy< boost::python::return_by_value >(), "");
// TODO     class_da1100fccb5a5e3e9438e1134955ed6e.def("w", autowig::method_decorator_941def2554c152ef8471dafbfe5b5975);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 0 > > >();
    }

}