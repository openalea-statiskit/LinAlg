#include "_ieigen.h"


namespace autowig
{
    void method_decorator_c088187c1d055529857d985422469549(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const double  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_4f725f0583695a648e2dc0f79e85ff6c(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const double  & param_out)
    { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_5b5cba70f0d653d6b9c980e5654fa92f(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const double  & param_out)
    { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_01fd3ad8671354ce8254f0527b081860(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 1 > & instance, long int  param_in_0, const double  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_b9d9d72394d9597ab3b93e30d1ed5ff6(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 1 > & instance, long int  param_in_0, const double  & param_out)
    { instance.operator[](param_in_0) = param_out; }
    void method_decorator_29d6ca5d207f533ca86896c6d9995ac0(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 1 > & instance, long int  param_in_0, const double  & param_out)
    { instance.operator()(param_in_0) = param_out; }
    void method_decorator_af17a100e388597fade168739d7b9e04(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 1 > & instance, const double  & param_out)
    { instance.x() = param_out; }
    void method_decorator_de2e88f34b0150d2b1087102afa58fac(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 1 > & instance, const double  & param_out)
    { instance.y() = param_out; }
    void method_decorator_b3a9df41b6e051228db88129c7bebf68(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 1 > & instance, const double  & param_out)
    { instance.z() = param_out; }
    void method_decorator_a4b3615edc0a58e283c31654f9a657a4(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 1 > & instance, const double  & param_out)
    { instance.w() = param_out; }
}


void wrapper_2aaa13bc0a9e5e0e88016fe1528fe0a3()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_c088187c1d055529857d985422469549)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 1 >::coeffRef;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_4f725f0583695a648e2dc0f79e85ff6c)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 1 >::coeffRefByOuterInner;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_5b5cba70f0d653d6b9c980e5654fa92f)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 1 >::operator();
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_01fd3ad8671354ce8254f0527b081860)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 1 >::coeffRef;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_b9d9d72394d9597ab3b93e30d1ed5ff6)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 1 >::operator[];
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_29d6ca5d207f533ca86896c6d9995ac0)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 1 >::operator();
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_af17a100e388597fade168739d7b9e04)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 1 >::x;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_de2e88f34b0150d2b1087102afa58fac)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 1 >::y;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_b3a9df41b6e051228db88129c7bebf68)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 1 >::z;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_a4b3615edc0a58e283c31654f9a657a4)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 0 > > > class_2aaa13bc0a9e5e0e88016fe1528fe0a3("_DenseCoeffsBase_2aaa13bc0a9e5e0e88016fe1528fe0a3", "", boost::python::no_init);
    class_2aaa13bc0a9e5e0e88016fe1528fe0a3.def("coeff_ref", method_pointer_c088187c1d055529857d985422469549, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2aaa13bc0a9e5e0e88016fe1528fe0a3.def("coeff_ref", autowig::method_decorator_c088187c1d055529857d985422469549);
    class_2aaa13bc0a9e5e0e88016fe1528fe0a3.def("coeff_ref_by_outer_inner", method_pointer_4f725f0583695a648e2dc0f79e85ff6c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2aaa13bc0a9e5e0e88016fe1528fe0a3.def("coeff_ref_by_outer_inner", autowig::method_decorator_4f725f0583695a648e2dc0f79e85ff6c);
    class_2aaa13bc0a9e5e0e88016fe1528fe0a3.def("__call__", method_pointer_5b5cba70f0d653d6b9c980e5654fa92f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2aaa13bc0a9e5e0e88016fe1528fe0a3.def("__call__", autowig::method_decorator_5b5cba70f0d653d6b9c980e5654fa92f);
    class_2aaa13bc0a9e5e0e88016fe1528fe0a3.def("coeff_ref", method_pointer_01fd3ad8671354ce8254f0527b081860, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2aaa13bc0a9e5e0e88016fe1528fe0a3.def("coeff_ref", autowig::method_decorator_01fd3ad8671354ce8254f0527b081860);
    class_2aaa13bc0a9e5e0e88016fe1528fe0a3.def("__getitem__", method_pointer_b9d9d72394d9597ab3b93e30d1ed5ff6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2aaa13bc0a9e5e0e88016fe1528fe0a3.def("__getitem__", autowig::method_decorator_b9d9d72394d9597ab3b93e30d1ed5ff6);
    class_2aaa13bc0a9e5e0e88016fe1528fe0a3.def("__call__", method_pointer_29d6ca5d207f533ca86896c6d9995ac0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2aaa13bc0a9e5e0e88016fe1528fe0a3.def("__call__", autowig::method_decorator_29d6ca5d207f533ca86896c6d9995ac0);
    class_2aaa13bc0a9e5e0e88016fe1528fe0a3.def("x", method_pointer_af17a100e388597fade168739d7b9e04, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2aaa13bc0a9e5e0e88016fe1528fe0a3.def("x", autowig::method_decorator_af17a100e388597fade168739d7b9e04);
    class_2aaa13bc0a9e5e0e88016fe1528fe0a3.def("y", method_pointer_de2e88f34b0150d2b1087102afa58fac, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2aaa13bc0a9e5e0e88016fe1528fe0a3.def("y", autowig::method_decorator_de2e88f34b0150d2b1087102afa58fac);
    class_2aaa13bc0a9e5e0e88016fe1528fe0a3.def("z", method_pointer_b3a9df41b6e051228db88129c7bebf68, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2aaa13bc0a9e5e0e88016fe1528fe0a3.def("z", autowig::method_decorator_b3a9df41b6e051228db88129c7bebf68);
    class_2aaa13bc0a9e5e0e88016fe1528fe0a3.def("w", method_pointer_a4b3615edc0a58e283c31654f9a657a4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2aaa13bc0a9e5e0e88016fe1528fe0a3.def("w", autowig::method_decorator_a4b3615edc0a58e283c31654f9a657a4);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 0 > > >();
    }

}