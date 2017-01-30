#include "_linalg.h"


namespace autowig
{
    void method_decorator_20ecdc9c96365b7199cda6ae9c161de3(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::Scalar & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_d989383705f85a16bd01607e0f7add90(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::Scalar & param_out)     { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_18b5652898bd507aadfa7754b86eb342(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::Scalar & param_out)     { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_aa1bebc0922b568e824aedf8a3168095(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > & instance, ::Eigen::Index  param_in_0, ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::Scalar & param_out)     { instance.coeffRef(param_in_0) = param_out; }
// TODO     void method_decorator_f352658360da5b56a871e28699b27d8d(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > & instance, ::Eigen::Index  param_in_0, ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::Scalar & param_out)     { instance.operator[](param_in_0) = param_out; }
    void method_decorator_f117465eca6052e294f0998917f8f64f(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > & instance, ::Eigen::Index  param_in_0, ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::Scalar & param_out)     { instance.operator()(param_in_0) = param_out; }
// TODO     void method_decorator_1654307e924d5077956b3b657bcafc10(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > & instance, ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::Scalar & param_out)     { instance.x() = param_out; }
// TODO     void method_decorator_a324ad395ced5de798499ff9d6f53152(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > & instance, ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::Scalar & param_out)     { instance.y() = param_out; }
// TODO     void method_decorator_10c9596210da594188ef90fc98d3486d(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > & instance, ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::Scalar & param_out)     { instance.z() = param_out; }
// TODO     void method_decorator_5ba2982c02675f059d431d5b45ce8370(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > & instance, ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::Scalar & param_out)     { instance.w() = param_out; }
}


void wrapper_ef3a9184ff095382ae59f98b7ee1ca0e()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_20ecdc9c96365b7199cda6ae9c161de3)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::coeffRef;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_d989383705f85a16bd01607e0f7add90)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::coeffRefByOuterInner;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_18b5652898bd507aadfa7754b86eb342)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::operator();
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_aa1bebc0922b568e824aedf8a3168095)(::Eigen::Index ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::coeffRef;
// TODO     ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_f352658360da5b56a871e28699b27d8d)(::Eigen::Index ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::operator[];
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_f117465eca6052e294f0998917f8f64f)(::Eigen::Index ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::operator();
// TODO     ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_1654307e924d5077956b3b657bcafc10)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::x;
// TODO     ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_a324ad395ced5de798499ff9d6f53152)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::y;
// TODO     ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_10c9596210da594188ef90fc98d3486d)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::z;
// TODO     ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_5ba2982c02675f059d431d5b45ce8370)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >, autowig::Held< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > >::Type, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 > > > class_ef3a9184ff095382ae59f98b7ee1ca0e("_DenseCoeffsBase_ef3a9184ff095382ae59f98b7ee1ca0e", "", boost::python::no_init);
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("coeff_ref", method_pointer_20ecdc9c96365b7199cda6ae9c161de3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("coeff_ref", autowig::method_decorator_20ecdc9c96365b7199cda6ae9c161de3);
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("coeff_ref_by_outer_inner", method_pointer_d989383705f85a16bd01607e0f7add90, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("coeff_ref_by_outer_inner", autowig::method_decorator_d989383705f85a16bd01607e0f7add90);
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("__call__", method_pointer_18b5652898bd507aadfa7754b86eb342, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("__call__", autowig::method_decorator_18b5652898bd507aadfa7754b86eb342);
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("coeff_ref", method_pointer_aa1bebc0922b568e824aedf8a3168095, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("coeff_ref", autowig::method_decorator_aa1bebc0922b568e824aedf8a3168095);
// TODO     class_ef3a9184ff095382ae59f98b7ee1ca0e.def("__getitem__", method_pointer_f352658360da5b56a871e28699b27d8d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
// TODO     class_ef3a9184ff095382ae59f98b7ee1ca0e.def("__getitem__", autowig::method_decorator_f352658360da5b56a871e28699b27d8d);
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("__call__", method_pointer_f117465eca6052e294f0998917f8f64f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("__call__", autowig::method_decorator_f117465eca6052e294f0998917f8f64f);
// TODO     class_ef3a9184ff095382ae59f98b7ee1ca0e.def("x", method_pointer_1654307e924d5077956b3b657bcafc10, boost::python::return_value_policy< boost::python::return_by_value >(), "");
// TODO     class_ef3a9184ff095382ae59f98b7ee1ca0e.def("x", autowig::method_decorator_1654307e924d5077956b3b657bcafc10);
// TODO     class_ef3a9184ff095382ae59f98b7ee1ca0e.def("y", method_pointer_a324ad395ced5de798499ff9d6f53152, boost::python::return_value_policy< boost::python::return_by_value >(), "");
// TODO     class_ef3a9184ff095382ae59f98b7ee1ca0e.def("y", autowig::method_decorator_a324ad395ced5de798499ff9d6f53152);
// TODO     class_ef3a9184ff095382ae59f98b7ee1ca0e.def("z", method_pointer_10c9596210da594188ef90fc98d3486d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
// TODO     class_ef3a9184ff095382ae59f98b7ee1ca0e.def("z", autowig::method_decorator_10c9596210da594188ef90fc98d3486d);
// TODO     class_ef3a9184ff095382ae59f98b7ee1ca0e.def("w", method_pointer_5ba2982c02675f059d431d5b45ce8370, boost::python::return_value_policy< boost::python::return_by_value >(), "");
// TODO     class_ef3a9184ff095382ae59f98b7ee1ca0e.def("w", autowig::method_decorator_5ba2982c02675f059d431d5b45ce8370);

    if(std::is_class< autowig::Held< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > >::Type >::value)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > >::Type, autowig::Held< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 > >::Type >();
    }

}