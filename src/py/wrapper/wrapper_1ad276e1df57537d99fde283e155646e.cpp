#include "_linalg.h"



namespace autowig
{

    void method_decorator_92fdac87b983535580cbe0c0c4b0f003(class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > & instance, ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::MatrixType const & param_in_0, unsigned int  param_in_1, const class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > & param_out) { instance.compute(param_in_0, param_in_1) = param_out; }
    void method_decorator_8b6681c8778f5465889bdd510788456b(class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > & instance, ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::MatrixType const & param_in_0, const class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > & param_out) { instance.compute(param_in_0) = param_out; }
    void method_decorator_2fbdc6142cbb519eb6f8f5263cf5bcf1(class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > & instance, ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::RealScalar const & param_in_0, const class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > & param_out) { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_7afccb902afd53d89a7e4cc9abad029e(class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > & instance, enum ::Eigen::Default_t  param_in_0, const class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > & param_out) { instance.setThreshold(param_in_0) = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > const volatile * get_pointer<class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > const volatile >(class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_1ad276e1df57537d99fde283e155646e()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > & (::Eigen::JacobiSVD< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::*method_pointer_92fdac87b983535580cbe0c0c4b0f003)(::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::MatrixType const &, unsigned int ) = &::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::compute;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > & (::Eigen::JacobiSVD< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::*method_pointer_8b6681c8778f5465889bdd510788456b)(::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::MatrixType const &) = &::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::compute;
    ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::MatrixUType const & (::Eigen::JacobiSVD< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::*method_pointer_db5743042e6b59fcad9a66ad2f576dcd)() const = &::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::matrixU;
    ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::MatrixVType const & (::Eigen::JacobiSVD< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::*method_pointer_09961fb8da0150d1b64a3fb4edf8ed8a)() const = &::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::matrixV;
    ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::SingularValuesType const & (::Eigen::JacobiSVD< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::*method_pointer_5884b745887e5798a906f5f16aa1e95d)() const = &::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::singularValues;
    bool  (::Eigen::JacobiSVD< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::*method_pointer_f0f9b1195347532188cb797c5c7870a3)() const = &::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::computeU;
    bool  (::Eigen::JacobiSVD< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::*method_pointer_c7c2bc04ad595ee38bf34bc28df9b5b3)() const = &::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::computeV;
    ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::Index  (::Eigen::JacobiSVD< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::*method_pointer_51e9f990394a517fbc9513f5465b3d75)() const = &::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::nonzeroSingularValues;
    ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::Index  (::Eigen::JacobiSVD< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::*method_pointer_53b699d68c3955699b1ff8e7ad9586db)() const = &::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::rank;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > & (::Eigen::JacobiSVD< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::*method_pointer_2fbdc6142cbb519eb6f8f5263cf5bcf1)(::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::RealScalar const &) = &::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::setThreshold;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > & (::Eigen::JacobiSVD< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::*method_pointer_7afccb902afd53d89a7e4cc9abad029e)(enum ::Eigen::Default_t ) = &::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::setThreshold;
    ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::RealScalar  (::Eigen::JacobiSVD< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::*method_pointer_366dc45b876a5cdaa0498bafd1c1177e)() const = &::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::threshold;
    ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::Index  (::Eigen::JacobiSVD< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::*method_pointer_b745826e594f5d92b92c1bb1e93e88e6)() const = &::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::rows;
    ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::Index  (::Eigen::JacobiSVD< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::*method_pointer_ea6a772b29d254d59c36aaa76a38f746)() const = &::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::cols;
    boost::python::class_< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >, autowig::Held< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > >::Type > class_1ad276e1df57537d99fde283e155646e("_JacobiSVD_1ad276e1df57537d99fde283e155646e", "", boost::python::no_init);
    class_1ad276e1df57537d99fde283e155646e.def("compute", method_pointer_92fdac87b983535580cbe0c0c4b0f003, boost::python::return_internal_reference<>(), "");
    class_1ad276e1df57537d99fde283e155646e.def("compute", autowig::method_decorator_92fdac87b983535580cbe0c0c4b0f003);
    class_1ad276e1df57537d99fde283e155646e.def("compute", method_pointer_8b6681c8778f5465889bdd510788456b, boost::python::return_internal_reference<>(), "");
    class_1ad276e1df57537d99fde283e155646e.def("compute", autowig::method_decorator_8b6681c8778f5465889bdd510788456b);
    class_1ad276e1df57537d99fde283e155646e.def("matrix_u", method_pointer_db5743042e6b59fcad9a66ad2f576dcd, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1ad276e1df57537d99fde283e155646e.def("matrix_v", method_pointer_09961fb8da0150d1b64a3fb4edf8ed8a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1ad276e1df57537d99fde283e155646e.def("singular_values", method_pointer_5884b745887e5798a906f5f16aa1e95d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1ad276e1df57537d99fde283e155646e.def("compute_u", method_pointer_f0f9b1195347532188cb797c5c7870a3, "");
    class_1ad276e1df57537d99fde283e155646e.def("compute_v", method_pointer_c7c2bc04ad595ee38bf34bc28df9b5b3, "");
    class_1ad276e1df57537d99fde283e155646e.def("nonzero_singular_values", method_pointer_51e9f990394a517fbc9513f5465b3d75, "");
    class_1ad276e1df57537d99fde283e155646e.def("rank", method_pointer_53b699d68c3955699b1ff8e7ad9586db, "");
    class_1ad276e1df57537d99fde283e155646e.def("set_threshold", method_pointer_2fbdc6142cbb519eb6f8f5263cf5bcf1, boost::python::return_internal_reference<>(), "");
    class_1ad276e1df57537d99fde283e155646e.def("set_threshold", autowig::method_decorator_2fbdc6142cbb519eb6f8f5263cf5bcf1);
    class_1ad276e1df57537d99fde283e155646e.def("set_threshold", method_pointer_7afccb902afd53d89a7e4cc9abad029e, boost::python::return_internal_reference<>(), "");
    class_1ad276e1df57537d99fde283e155646e.def("set_threshold", autowig::method_decorator_7afccb902afd53d89a7e4cc9abad029e);
    class_1ad276e1df57537d99fde283e155646e.def("threshold", method_pointer_366dc45b876a5cdaa0498bafd1c1177e, "");
    class_1ad276e1df57537d99fde283e155646e.def("rows", method_pointer_b745826e594f5d92b92c1bb1e93e88e6, "");
    class_1ad276e1df57537d99fde283e155646e.def("cols", method_pointer_ea6a772b29d254d59c36aaa76a38f746, "");

}