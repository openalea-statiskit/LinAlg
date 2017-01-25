#include "_ieigen.h"


namespace autowig
{
    void method_decorator_1eac69b4d5cd55b6aacfa2c119d86d49(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const double  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_698db319b8a856828be47b12e53e3037(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const double  & param_out)
    { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_701a11f67e5d5228b8f1c6eae5d39a5e(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const double  & param_out)
    { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_21a59b136e535260b209603244e4cb56(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > & instance, long int  param_in_0, const double  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_6b1e76c416145f64add83ffbfc349970(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > & instance, long int  param_in_0, const double  & param_out)
    { instance.operator[](param_in_0) = param_out; }
    void method_decorator_da88179d36065d408240e2d18758aad2(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > & instance, long int  param_in_0, const double  & param_out)
    { instance.operator()(param_in_0) = param_out; }
    void method_decorator_1654307e924d5077956b3b657bcafc10(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > & instance, const double  & param_out)
    { instance.x() = param_out; }
    void method_decorator_a324ad395ced5de798499ff9d6f53152(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > & instance, const double  & param_out)
    { instance.y() = param_out; }
    void method_decorator_10c9596210da594188ef90fc98d3486d(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > & instance, const double  & param_out)
    { instance.z() = param_out; }
    void method_decorator_5ba2982c02675f059d431d5b45ce8370(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > & instance, const double  & param_out)
    { instance.w() = param_out; }
}


void wrapper_ef3a9184ff095382ae59f98b7ee1ca0e()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_1eac69b4d5cd55b6aacfa2c119d86d49)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::coeffRef;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_698db319b8a856828be47b12e53e3037)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::coeffRefByOuterInner;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_701a11f67e5d5228b8f1c6eae5d39a5e)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::operator();
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_21a59b136e535260b209603244e4cb56)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::coeffRef;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_6b1e76c416145f64add83ffbfc349970)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::operator[];
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_da88179d36065d408240e2d18758aad2)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::operator();
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_1654307e924d5077956b3b657bcafc10)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::x;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_a324ad395ced5de798499ff9d6f53152)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::y;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_10c9596210da594188ef90fc98d3486d)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::z;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_5ba2982c02675f059d431d5b45ce8370)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 > > > class_ef3a9184ff095382ae59f98b7ee1ca0e("_DenseCoeffsBase_ef3a9184ff095382ae59f98b7ee1ca0e", "", boost::python::no_init);
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("coeff_ref", method_pointer_1eac69b4d5cd55b6aacfa2c119d86d49, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("coeff_ref", autowig::method_decorator_1eac69b4d5cd55b6aacfa2c119d86d49);
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("coeff_ref_by_outer_inner", method_pointer_698db319b8a856828be47b12e53e3037, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("coeff_ref_by_outer_inner", autowig::method_decorator_698db319b8a856828be47b12e53e3037);
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("__call__", method_pointer_701a11f67e5d5228b8f1c6eae5d39a5e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("__call__", autowig::method_decorator_701a11f67e5d5228b8f1c6eae5d39a5e);
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("coeff_ref", method_pointer_21a59b136e535260b209603244e4cb56, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("coeff_ref", autowig::method_decorator_21a59b136e535260b209603244e4cb56);
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("__getitem__", method_pointer_6b1e76c416145f64add83ffbfc349970, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("__getitem__", autowig::method_decorator_6b1e76c416145f64add83ffbfc349970);
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("__call__", method_pointer_da88179d36065d408240e2d18758aad2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("__call__", autowig::method_decorator_da88179d36065d408240e2d18758aad2);
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("x", method_pointer_1654307e924d5077956b3b657bcafc10, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("x", autowig::method_decorator_1654307e924d5077956b3b657bcafc10);
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("y", method_pointer_a324ad395ced5de798499ff9d6f53152, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("y", autowig::method_decorator_a324ad395ced5de798499ff9d6f53152);
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("z", method_pointer_10c9596210da594188ef90fc98d3486d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("z", autowig::method_decorator_10c9596210da594188ef90fc98d3486d);
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("w", method_pointer_5ba2982c02675f059d431d5b45ce8370, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("w", autowig::method_decorator_5ba2982c02675f059d431d5b45ce8370);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 > > >();
    }

}