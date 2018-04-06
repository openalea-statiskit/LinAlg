#include "_linalg.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const volatile * get_pointer<class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const volatile >(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_582003aac6505a6d9ea4c4fa99329e5e()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    ::Eigen::Index  (::Eigen::Matrix< double, -1, 1, 0, -1, 1 >::*method_pointer_b56afc7a8c2353ab883944457788298f)() const = &::Eigen::Matrix< double, -1, 1, 0, -1, 1 >::innerStride;
    ::Eigen::Index  (::Eigen::Matrix< double, -1, 1, 0, -1, 1 >::*method_pointer_992f8240a80759b49f02e38fcc77710b)() const = &::Eigen::Matrix< double, -1, 1, 0, -1, 1 >::outerStride;
    struct function_group
    {
        static class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  function_0f6e9a93f6895e3abb2f2d9c593026d1(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & parameter_0, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & parameter_1)
        { return operator-(parameter_0, parameter_1); }
        static class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  function_3f898290a1a054fb91487d2da79c482f(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & parameter_0, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & parameter_1)
        { return operator+(parameter_0, parameter_1); }
        static class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  function_774c6e6d879d5f1a84672b9648a0379f(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & parameter_0, double const & parameter_1)
        { return operator*(parameter_0, parameter_1); }
        static class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  function_a68e7f10eb60575dbff4c47e06b69732(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & parameter_0, class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > const & parameter_1)
        { return operator*(parameter_0, parameter_1); }
        static class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  function_29b151e16eef52f1be3d1179f3f5d23f(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & parameter_0, double const & parameter_1)
        { return operator/(parameter_0, parameter_1); }
    };
    boost::python::class_< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, autowig::Held< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::Type, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > > > class_582003aac6505a6d9ea4c4fa99329e5e("_Matrix_582003aac6505a6d9ea4c4fa99329e5e", "", boost::python::no_init);
    class_582003aac6505a6d9ea4c4fa99329e5e.def(boost::python::init<  >(""));
    class_582003aac6505a6d9ea4c4fa99329e5e.def(boost::python::init< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >::Scalar const &, ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >::Scalar const &, ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >::Scalar const & >(""));
    class_582003aac6505a6d9ea4c4fa99329e5e.def(boost::python::init< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >::Scalar const &, ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >::Scalar const &, ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >::Scalar const &, ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >::Scalar const & >(""));
    class_582003aac6505a6d9ea4c4fa99329e5e.def(boost::python::init< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >(""));
    class_582003aac6505a6d9ea4c4fa99329e5e.def(boost::python::init< long int const & >(""));
    class_582003aac6505a6d9ea4c4fa99329e5e.def(boost::python::init< struct ::Eigen::EigenBase< class ::Eigen::Solve< class ::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >, class ::Eigen::CwiseBinaryOp< struct ::Eigen::internal::scalar_quotient_op< double, double >, class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > const, class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const > const > > > const & >(""));
    class_582003aac6505a6d9ea4c4fa99329e5e.def(boost::python::init< struct ::Eigen::EigenBase< class ::Eigen::Select< class ::Eigen::CwiseBinaryOp< struct ::Eigen::internal::scalar_cmp_op< double, double, Eigen::internal::ComparisonName::cmp_LT >, class ::Eigen::ArrayWrapper< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const > const, class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Array< double, -1, 1, 0, -1, 1 > > const >, class ::Eigen::CwiseUnaryOp< struct ::Eigen::internal::scalar_opposite_op< double >, class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > const >, class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > > > const & >(""));
    class_582003aac6505a6d9ea4c4fa99329e5e.def(boost::python::init< class ::Eigen::CwiseBinaryOp< struct ::Eigen::internal::scalar_product_op< double, double >, class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const > const, class ::Eigen::Block< class ::Eigen::Block< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, -1, 1, true >, -1, 1, false > const > const & >(""));
    class_582003aac6505a6d9ea4c4fa99329e5e.def(boost::python::init< class ::Eigen::CwiseBinaryOp< struct ::Eigen::internal::scalar_product_op< double, double >, class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const > const, class ::Eigen::Map< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0, class ::Eigen::Stride< 0, 0 > > const > const & >(""));
    class_582003aac6505a6d9ea4c4fa99329e5e.def(boost::python::init< class ::Eigen::CwiseBinaryOp< struct ::Eigen::internal::scalar_product_op< double, double >, class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const > const, class ::Eigen::Block< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const, -1, 1, false > const > const & >(""));
    class_582003aac6505a6d9ea4c4fa99329e5e.def(boost::python::init< struct ::Eigen::EigenBase< class ::Eigen::Solve< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >, class ::Eigen::CwiseBinaryOp< struct ::Eigen::internal::scalar_quotient_op< double, double >, class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > const, class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const > const > > > const & >(""));
    class_582003aac6505a6d9ea4c4fa99329e5e.def(boost::python::init< long int const &, long int const & >(""));
    class_582003aac6505a6d9ea4c4fa99329e5e.def(boost::python::init< class ::Eigen::Product< class ::Eigen::Block< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const, -1, -1, false >, class ::Eigen::Block< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, -1, 1, false >, 0 > const & >(""));
    class_582003aac6505a6d9ea4c4fa99329e5e.def(boost::python::init< struct ::Eigen::EigenBase< class ::Eigen::Solve< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >, class ::Eigen::CwiseBinaryOp< struct ::Eigen::internal::scalar_quotient_op< double, double >, class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > const, class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const > const > > > const & >(""));
    class_582003aac6505a6d9ea4c4fa99329e5e.def(boost::python::init< struct ::Eigen::EigenBase< class ::Eigen::Solve< class ::Eigen::LLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >, class ::Eigen::CwiseBinaryOp< struct ::Eigen::internal::scalar_quotient_op< double, double >, class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > const, class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const > const > > > const & >(""));
    class_582003aac6505a6d9ea4c4fa99329e5e.def(boost::python::init< class ::Eigen::CwiseBinaryOp< struct ::Eigen::internal::scalar_product_op< double, double >, class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const > const, class ::Eigen::Block< class ::Eigen::Block< class ::Eigen::Block< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, -1, -1, false >, -1, 1, true >, -1, 1, false > const > const & >(""));
    class_582003aac6505a6d9ea4c4fa99329e5e.def("inner_stride", method_pointer_b56afc7a8c2353ab883944457788298f, "");
    class_582003aac6505a6d9ea4c4fa99329e5e.def("outer_stride", method_pointer_992f8240a80759b49f02e38fcc77710b, "");
    class_582003aac6505a6d9ea4c4fa99329e5e.def("__sub__", function_group::function_0f6e9a93f6895e3abb2f2d9c593026d1, "");
    class_582003aac6505a6d9ea4c4fa99329e5e.def("__add__", function_group::function_3f898290a1a054fb91487d2da79c482f, "");
    class_582003aac6505a6d9ea4c4fa99329e5e.def("__mul__", function_group::function_774c6e6d879d5f1a84672b9648a0379f, "");
    class_582003aac6505a6d9ea4c4fa99329e5e.def("__mul__", function_group::function_a68e7f10eb60575dbff4c47e06b69732, "");
    class_582003aac6505a6d9ea4c4fa99329e5e.def("__div__", function_group::function_29b151e16eef52f1be3d1179f3f5d23f, "");

    if(autowig::Held< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::Type, autowig::Held< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::Type >();
    }

}