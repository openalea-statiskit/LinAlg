#include "_linalg.h"



namespace autowig
{

    void method_decorator_1eac69b4d5cd55b6aacfa2c119d86d49(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, const ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::Scalar & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_698db319b8a856828be47b12e53e3037(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, const ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::Scalar & param_out)     { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_21a59b136e535260b209603244e4cb56(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > & instance, ::Eigen::Index  param_in_0, const ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::Scalar & param_out)     { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_1654307e924d5077956b3b657bcafc10(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > & instance, const ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::Scalar & param_out)     { instance.x() = param_out; }
    void method_decorator_a324ad395ced5de798499ff9d6f53152(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > & instance, const ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::Scalar & param_out)     { instance.y() = param_out; }
    void method_decorator_10c9596210da594188ef90fc98d3486d(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > & instance, const ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::Scalar & param_out)     { instance.z() = param_out; }
    void method_decorator_5ba2982c02675f059d431d5b45ce8370(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > & instance, const ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::Scalar & param_out)     { instance.w() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > const volatile * get_pointer<class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > const volatile >(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_ef3a9184ff095382ae59f98b7ee1ca0e()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_1eac69b4d5cd55b6aacfa2c119d86d49)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::coeffRef;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_698db319b8a856828be47b12e53e3037)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::coeffRefByOuterInner;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_21a59b136e535260b209603244e4cb56)(::Eigen::Index ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::coeffRef;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_1654307e924d5077956b3b657bcafc10)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::x;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_a324ad395ced5de798499ff9d6f53152)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::y;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_10c9596210da594188ef90fc98d3486d)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::z;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_5ba2982c02675f059d431d5b45ce8370)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >, autowig::Held< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > >::Type, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 > > > class_ef3a9184ff095382ae59f98b7ee1ca0e("_DenseCoeffsBase_ef3a9184ff095382ae59f98b7ee1ca0e", "", boost::python::no_init);
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("coeff_ref", method_pointer_1eac69b4d5cd55b6aacfa2c119d86d49, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("coeff_ref", autowig::method_decorator_1eac69b4d5cd55b6aacfa2c119d86d49);
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("coeff_ref_by_outer_inner", method_pointer_698db319b8a856828be47b12e53e3037, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("coeff_ref_by_outer_inner", autowig::method_decorator_698db319b8a856828be47b12e53e3037);
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("coeff_ref", method_pointer_21a59b136e535260b209603244e4cb56, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("coeff_ref", autowig::method_decorator_21a59b136e535260b209603244e4cb56);
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("x", method_pointer_1654307e924d5077956b3b657bcafc10, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("x", autowig::method_decorator_1654307e924d5077956b3b657bcafc10);
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("y", method_pointer_a324ad395ced5de798499ff9d6f53152, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("y", autowig::method_decorator_a324ad395ced5de798499ff9d6f53152);
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("z", method_pointer_10c9596210da594188ef90fc98d3486d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("z", autowig::method_decorator_10c9596210da594188ef90fc98d3486d);
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("w", method_pointer_5ba2982c02675f059d431d5b45ce8370, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("w", autowig::method_decorator_5ba2982c02675f059d431d5b45ce8370);

    if(autowig::Held< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > >::Type, autowig::Held< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 > >::Type >();
    }

}