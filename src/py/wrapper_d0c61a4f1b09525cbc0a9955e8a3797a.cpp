#include "_ieigen.h"


namespace autowig
{
    void method_decorator_d58c71f36d355c36a2c10aa760804348(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const double  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_f86c719cb42d5b1cbef613578eee83a1(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const double  & param_out)     { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_19011eba6d33543ab7c09ee93b36f5c2(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const double  & param_out)     { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_f1ed011c65cf525fba9c85855160e46f(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 1 > & instance, long int  param_in_0, const double  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_2cc81c534a9550db905edb92ec2af389(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 1 > & instance, long int  param_in_0, const double  & param_out)     { instance.operator[](param_in_0) = param_out; }
    void method_decorator_3cabda9059065c3e953b483907b4fff3(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 1 > & instance, long int  param_in_0, const double  & param_out)     { instance.operator()(param_in_0) = param_out; }
    void method_decorator_51de8b0aeddb565b9fbab5a0e72663bf(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 1 > & instance, const double  & param_out)     { instance.x() = param_out; }
    void method_decorator_cf9574195bf2556fba89a44339556419(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 1 > & instance, const double  & param_out)     { instance.y() = param_out; }
// TODO     void method_decorator_a844262adfc254f3883a578ec39f854a(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 1 > & instance, const double  & param_out)     { instance.z() = param_out; }
// TODO     void method_decorator_8ee9cf85a703520d8baee0612ec75431(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 1 > & instance, const double  & param_out)     { instance.w() = param_out; }
}


void wrapper_d0c61a4f1b09525cbc0a9955e8a3797a()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_d58c71f36d355c36a2c10aa760804348)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 1 >::coeffRef;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_f86c719cb42d5b1cbef613578eee83a1)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 1 >::coeffRefByOuterInner;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_19011eba6d33543ab7c09ee93b36f5c2)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 1 >::operator();
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_f1ed011c65cf525fba9c85855160e46f)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 1 >::coeffRef;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_2cc81c534a9550db905edb92ec2af389)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 1 >::operator[];
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_3cabda9059065c3e953b483907b4fff3)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 1 >::operator();
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_51de8b0aeddb565b9fbab5a0e72663bf)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 1 >::x;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_cf9574195bf2556fba89a44339556419)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 1 >::y;
// TODO // TODO     double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_a844262adfc254f3883a578ec39f854a)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 1 >::z;
// TODO // TODO     double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_8ee9cf85a703520d8baee0612ec75431)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 0 > > > class_d0c61a4f1b09525cbc0a9955e8a3797a("_DenseCoeffsBase_d0c61a4f1b09525cbc0a9955e8a3797a", "", boost::python::no_init);
    class_d0c61a4f1b09525cbc0a9955e8a3797a.def("coeff_ref", method_pointer_d58c71f36d355c36a2c10aa760804348, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d0c61a4f1b09525cbc0a9955e8a3797a.def("coeff_ref", autowig::method_decorator_d58c71f36d355c36a2c10aa760804348);
    class_d0c61a4f1b09525cbc0a9955e8a3797a.def("coeff_ref_by_outer_inner", method_pointer_f86c719cb42d5b1cbef613578eee83a1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d0c61a4f1b09525cbc0a9955e8a3797a.def("coeff_ref_by_outer_inner", autowig::method_decorator_f86c719cb42d5b1cbef613578eee83a1);
    class_d0c61a4f1b09525cbc0a9955e8a3797a.def("__call__", method_pointer_19011eba6d33543ab7c09ee93b36f5c2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d0c61a4f1b09525cbc0a9955e8a3797a.def("__call__", autowig::method_decorator_19011eba6d33543ab7c09ee93b36f5c2);
    class_d0c61a4f1b09525cbc0a9955e8a3797a.def("coeff_ref", method_pointer_f1ed011c65cf525fba9c85855160e46f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d0c61a4f1b09525cbc0a9955e8a3797a.def("coeff_ref", autowig::method_decorator_f1ed011c65cf525fba9c85855160e46f);
    class_d0c61a4f1b09525cbc0a9955e8a3797a.def("__getitem__", method_pointer_2cc81c534a9550db905edb92ec2af389, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d0c61a4f1b09525cbc0a9955e8a3797a.def("__getitem__", autowig::method_decorator_2cc81c534a9550db905edb92ec2af389);
    class_d0c61a4f1b09525cbc0a9955e8a3797a.def("__call__", method_pointer_3cabda9059065c3e953b483907b4fff3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d0c61a4f1b09525cbc0a9955e8a3797a.def("__call__", autowig::method_decorator_3cabda9059065c3e953b483907b4fff3);
    class_d0c61a4f1b09525cbc0a9955e8a3797a.def("x", method_pointer_51de8b0aeddb565b9fbab5a0e72663bf, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d0c61a4f1b09525cbc0a9955e8a3797a.def("x", autowig::method_decorator_51de8b0aeddb565b9fbab5a0e72663bf);
    class_d0c61a4f1b09525cbc0a9955e8a3797a.def("y", method_pointer_cf9574195bf2556fba89a44339556419, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d0c61a4f1b09525cbc0a9955e8a3797a.def("y", autowig::method_decorator_cf9574195bf2556fba89a44339556419);
// TODO // TODO     class_d0c61a4f1b09525cbc0a9955e8a3797a.def("z", method_pointer_a844262adfc254f3883a578ec39f854a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
// TODO // TODO     class_d0c61a4f1b09525cbc0a9955e8a3797a.def("z", autowig::method_decorator_a844262adfc254f3883a578ec39f854a);
// TODO // TODO     class_d0c61a4f1b09525cbc0a9955e8a3797a.def("w", method_pointer_8ee9cf85a703520d8baee0612ec75431, boost::python::return_value_policy< boost::python::return_by_value >(), "");
// TODO // TODO     class_d0c61a4f1b09525cbc0a9955e8a3797a.def("w", autowig::method_decorator_8ee9cf85a703520d8baee0612ec75431);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 0 > > >();
    }

}