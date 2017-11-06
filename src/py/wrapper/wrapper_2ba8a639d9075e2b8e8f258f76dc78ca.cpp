#include "_linalg.h"



namespace autowig
{

    void method_decorator_c2366e5485d35c3bb07540f6af90a027(class ::Eigen::SparseMatrix< double, 0, int > & instance, class ::Eigen::SparseMatrix< double, 0, int > const & param_in_0, const class ::Eigen::SparseMatrix< double, 0, int > & param_out) { instance.operator+=(param_in_0) = param_out; }
    void method_decorator_a0cbbee9fccc5bd892d7c6bc920a27ca(class ::Eigen::SparseMatrix< double, 0, int > & instance, class ::Eigen::SparseMatrix< double, 0, int > const & param_in_0, const class ::Eigen::SparseMatrix< double, 0, int > & param_out) { instance.operator-=(param_in_0) = param_out; }
    void method_decorator_b38cff7328135a2ebd9fe16b941a6267(class ::Eigen::SparseMatrix< double, 0, int > & instance, const ::Eigen::SparseMatrix< double, 0, int >::Storage & param_out) { instance.data() = param_out; }
    void method_decorator_1d78773f3c7058f792090495f00df475(class ::Eigen::SparseMatrix< double, 0, int > & instance, ::Eigen::SparseMatrix< double, 0, int >::Index  param_in_0, ::Eigen::SparseMatrix< double, 0, int >::Index  param_in_1, double param_out) { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_518832cacbfe518faa4e11726d5fe71e(class ::Eigen::SparseMatrix< double, 0, int > & instance, ::Eigen::SparseMatrix< double, 0, int >::Index  param_in_0, ::Eigen::SparseMatrix< double, 0, int >::Index  param_in_1, double param_out) { instance.insert(param_in_0, param_in_1) = param_out; }
    void method_decorator_cbb331dd1d5f5d51842b2e75b3e99125(class ::Eigen::SparseMatrix< double, 0, int > & instance, ::Eigen::SparseMatrix< double, 0, int >::Index  param_in_0, ::Eigen::SparseMatrix< double, 0, int >::Index  param_in_1, double param_out) { instance.insertBack(param_in_0, param_in_1) = param_out; }
    void method_decorator_5ce976006c635f9a8e74b8dea19dcbad(class ::Eigen::SparseMatrix< double, 0, int > & instance, ::Eigen::SparseMatrix< double, 0, int >::Index  param_in_0, ::Eigen::SparseMatrix< double, 0, int >::Index  param_in_1, double param_out) { instance.insertBackByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_861da5bd08bb58f98ec863decb1c6c54(class ::Eigen::SparseMatrix< double, 0, int > & instance, ::Eigen::SparseMatrix< double, 0, int >::Index  param_in_0, ::Eigen::SparseMatrix< double, 0, int >::Index  param_in_1, double param_out) { instance.insertBackByOuterInnerUnordered(param_in_0, param_in_1) = param_out; }
    void method_decorator_63a5bb4829055ffa816ee60bfce594e0(class ::Eigen::SparseMatrix< double, 0, int > & instance, ::Eigen::SparseMatrix< double, 0, int >::Index  param_in_0, ::Eigen::SparseMatrix< double, 0, int >::Index  param_in_1, double param_out) { instance.insertByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_033d403c333c58368e8d732a6e2acd8d(class ::Eigen::SparseMatrix< double, 0, int > & instance, ::Eigen::SparseMatrix< double, 0, int >::Index  param_in_0, ::Eigen::SparseMatrix< double, 0, int >::Index  param_in_1, double param_out) { instance.insertBackUncompressed(param_in_0, param_in_1) = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::Eigen::SparseMatrix< double, 0, int > const volatile * get_pointer<class ::Eigen::SparseMatrix< double, 0, int > const volatile >(class ::Eigen::SparseMatrix< double, 0, int > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_2ba8a639d9075e2b8e8f258f76dc78ca()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::SparseMatrix< double, 0, int > & (::Eigen::SparseMatrix< double, 0, int >::*method_pointer_c2366e5485d35c3bb07540f6af90a027)(class ::Eigen::SparseMatrix< double, 0, int > const &) = &::Eigen::SparseMatrix< double, 0, int >::operator+=;
    class ::Eigen::SparseMatrix< double, 0, int > & (::Eigen::SparseMatrix< double, 0, int >::*method_pointer_a0cbbee9fccc5bd892d7c6bc920a27ca)(class ::Eigen::SparseMatrix< double, 0, int > const &) = &::Eigen::SparseMatrix< double, 0, int >::operator-=;
    bool  (::Eigen::SparseMatrix< double, 0, int >::*method_pointer_5c4e67434447503d95a6c154c256aed1)() const = &::Eigen::SparseMatrix< double, 0, int >::isCompressed;
    ::Eigen::SparseMatrix< double, 0, int >::Index  (::Eigen::SparseMatrix< double, 0, int >::*method_pointer_2e0eb9bcbe045726bdbc57bfaf527801)() const = &::Eigen::SparseMatrix< double, 0, int >::rows;
    ::Eigen::SparseMatrix< double, 0, int >::Index  (::Eigen::SparseMatrix< double, 0, int >::*method_pointer_7d08fd1ee17e55479431549aeb7b1ac6)() const = &::Eigen::SparseMatrix< double, 0, int >::cols;
    ::Eigen::SparseMatrix< double, 0, int >::Index  (::Eigen::SparseMatrix< double, 0, int >::*method_pointer_0f633c226a745293b7d7dd0764a85edb)() const = &::Eigen::SparseMatrix< double, 0, int >::innerSize;
    ::Eigen::SparseMatrix< double, 0, int >::Index  (::Eigen::SparseMatrix< double, 0, int >::*method_pointer_a48c3adee66b5295a81203174cb8604e)() const = &::Eigen::SparseMatrix< double, 0, int >::outerSize;
    ::Eigen::SparseMatrix< double, 0, int >::Storage & (::Eigen::SparseMatrix< double, 0, int >::*method_pointer_b38cff7328135a2ebd9fe16b941a6267)() = &::Eigen::SparseMatrix< double, 0, int >::data;
    ::Eigen::SparseMatrix< double, 0, int >::Storage const & (::Eigen::SparseMatrix< double, 0, int >::*method_pointer_7d978edd25595e619e54242cd0ed2680)() const = &::Eigen::SparseMatrix< double, 0, int >::data;
    ::Eigen::SparseMatrix< double, 0, int >::Scalar  (::Eigen::SparseMatrix< double, 0, int >::*method_pointer_446c5ad16c605124b118ade1007fe21d)(::Eigen::SparseMatrix< double, 0, int >::Index , ::Eigen::SparseMatrix< double, 0, int >::Index ) const = &::Eigen::SparseMatrix< double, 0, int >::coeff;
    ::Eigen::SparseMatrix< double, 0, int >::Scalar & (::Eigen::SparseMatrix< double, 0, int >::*method_pointer_1d78773f3c7058f792090495f00df475)(::Eigen::SparseMatrix< double, 0, int >::Index , ::Eigen::SparseMatrix< double, 0, int >::Index ) = &::Eigen::SparseMatrix< double, 0, int >::coeffRef;
    ::Eigen::SparseMatrix< double, 0, int >::Scalar & (::Eigen::SparseMatrix< double, 0, int >::*method_pointer_518832cacbfe518faa4e11726d5fe71e)(::Eigen::SparseMatrix< double, 0, int >::Index , ::Eigen::SparseMatrix< double, 0, int >::Index ) = &::Eigen::SparseMatrix< double, 0, int >::insert;
    void  (::Eigen::SparseMatrix< double, 0, int >::*method_pointer_73ec3bcd8c425302a9271a05fec724f9)() = &::Eigen::SparseMatrix< double, 0, int >::setZero;
    ::Eigen::SparseMatrix< double, 0, int >::Index  (::Eigen::SparseMatrix< double, 0, int >::*method_pointer_8350ca46e03a54c78d28140cc59e1927)() const = &::Eigen::SparseMatrix< double, 0, int >::nonZeros;
    void  (::Eigen::SparseMatrix< double, 0, int >::*method_pointer_365d15aeee7c59b59e0188c5743d194c)(::Eigen::SparseMatrix< double, 0, int >::Index ) = &::Eigen::SparseMatrix< double, 0, int >::reserve;
    ::Eigen::SparseMatrix< double, 0, int >::Scalar & (::Eigen::SparseMatrix< double, 0, int >::*method_pointer_cbb331dd1d5f5d51842b2e75b3e99125)(::Eigen::SparseMatrix< double, 0, int >::Index , ::Eigen::SparseMatrix< double, 0, int >::Index ) = &::Eigen::SparseMatrix< double, 0, int >::insertBack;
    ::Eigen::SparseMatrix< double, 0, int >::Scalar & (::Eigen::SparseMatrix< double, 0, int >::*method_pointer_5ce976006c635f9a8e74b8dea19dcbad)(::Eigen::SparseMatrix< double, 0, int >::Index , ::Eigen::SparseMatrix< double, 0, int >::Index ) = &::Eigen::SparseMatrix< double, 0, int >::insertBackByOuterInner;
    ::Eigen::SparseMatrix< double, 0, int >::Scalar & (::Eigen::SparseMatrix< double, 0, int >::*method_pointer_861da5bd08bb58f98ec863decb1c6c54)(::Eigen::SparseMatrix< double, 0, int >::Index , ::Eigen::SparseMatrix< double, 0, int >::Index ) = &::Eigen::SparseMatrix< double, 0, int >::insertBackByOuterInnerUnordered;
    void  (::Eigen::SparseMatrix< double, 0, int >::*method_pointer_05b878fabe6651e390bb30c4a565cb0a)(::Eigen::SparseMatrix< double, 0, int >::Index ) = &::Eigen::SparseMatrix< double, 0, int >::startVec;
    void  (::Eigen::SparseMatrix< double, 0, int >::*method_pointer_ce36924e6f5355d4867dd4a6d482cca4)() = &::Eigen::SparseMatrix< double, 0, int >::finalize;
    void  (::Eigen::SparseMatrix< double, 0, int >::*method_pointer_5ef02234d6f252ccb46e09a623e28092)() = &::Eigen::SparseMatrix< double, 0, int >::sumupDuplicates;
    ::Eigen::SparseMatrix< double, 0, int >::Scalar & (::Eigen::SparseMatrix< double, 0, int >::*method_pointer_63a5bb4829055ffa816ee60bfce594e0)(::Eigen::SparseMatrix< double, 0, int >::Index , ::Eigen::SparseMatrix< double, 0, int >::Index ) = &::Eigen::SparseMatrix< double, 0, int >::insertByOuterInner;
    void  (::Eigen::SparseMatrix< double, 0, int >::*method_pointer_70f20b4c5a4a531680411544507df22f)() = &::Eigen::SparseMatrix< double, 0, int >::makeCompressed;
    void  (::Eigen::SparseMatrix< double, 0, int >::*method_pointer_c72b364091a35649be62c7849d039ea9)() = &::Eigen::SparseMatrix< double, 0, int >::uncompress;
    void  (::Eigen::SparseMatrix< double, 0, int >::*method_pointer_7895f46112d7565686259f45b896c3b2)(::Eigen::SparseMatrix< double, 0, int >::Scalar const &, ::Eigen::SparseMatrix< double, 0, int >::RealScalar const &) = &::Eigen::SparseMatrix< double, 0, int >::prune;
    void  (::Eigen::SparseMatrix< double, 0, int >::*method_pointer_133520c2840057628e345752e5f16db1)(::Eigen::SparseMatrix< double, 0, int >::Index , ::Eigen::SparseMatrix< double, 0, int >::Index ) = &::Eigen::SparseMatrix< double, 0, int >::conservativeResize;
    void  (::Eigen::SparseMatrix< double, 0, int >::*method_pointer_9e5142e60d0058e9bbf9d1d56826f6ae)(::Eigen::SparseMatrix< double, 0, int >::Index , ::Eigen::SparseMatrix< double, 0, int >::Index ) = &::Eigen::SparseMatrix< double, 0, int >::resize;
    void  (::Eigen::SparseMatrix< double, 0, int >::*method_pointer_c89a66deaa735aafb195ebf68531075f)(::Eigen::SparseMatrix< double, 0, int >::Index ) = &::Eigen::SparseMatrix< double, 0, int >::resizeNonZeros;
    void  (::Eigen::SparseMatrix< double, 0, int >::*method_pointer_35516a1eb9b75171a892a6b70185420c)(class ::Eigen::SparseMatrix< double, 0, int > &) = &::Eigen::SparseMatrix< double, 0, int >::swap;
    void  (::Eigen::SparseMatrix< double, 0, int >::*method_pointer_aa4e818c4b2e5598b011fbb536748310)() = &::Eigen::SparseMatrix< double, 0, int >::setIdentity;
    ::Eigen::SparseMatrix< double, 0, int >::Scalar  (::Eigen::SparseMatrix< double, 0, int >::*method_pointer_8b56b16cbd8d534f9e1630c76f0049f3)() const = &::Eigen::SparseMatrix< double, 0, int >::sum;
    ::Eigen::SparseMatrix< double, 0, int >::Scalar & (::Eigen::SparseMatrix< double, 0, int >::*method_pointer_033d403c333c58368e8d732a6e2acd8d)(::Eigen::SparseMatrix< double, 0, int >::Index , ::Eigen::SparseMatrix< double, 0, int >::Index ) = &::Eigen::SparseMatrix< double, 0, int >::insertBackUncompressed;
    struct function_group
    {
        static class ::std::basic_ostream< char, struct ::std::char_traits< char > > & function_0ca9b67bcdf1575ca5ff01708a2d9359(class ::std::basic_ostream< char, struct ::std::char_traits< char > > & parameter_0, class ::Eigen::SparseMatrix< double, 0, int > const & parameter_1)
        { return operator<<(parameter_0, parameter_1); }
    };
    boost::python::class_< class ::Eigen::SparseMatrix< double, 0, int >, autowig::Held< class ::Eigen::SparseMatrix< double, 0, int > >::Type, boost::python::bases< class ::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > > > > class_2ba8a639d9075e2b8e8f258f76dc78ca("_SparseMatrix_2ba8a639d9075e2b8e8f258f76dc78ca", "", boost::python::no_init);
    class_2ba8a639d9075e2b8e8f258f76dc78ca.def(boost::python::init<  >(""));
    class_2ba8a639d9075e2b8e8f258f76dc78ca.def(boost::python::init< ::Eigen::SparseMatrix< double, 0, int >::Index , ::Eigen::SparseMatrix< double, 0, int >::Index  >(""));
    class_2ba8a639d9075e2b8e8f258f76dc78ca.def(boost::python::init< class ::Eigen::SparseMatrix< double, 0, int > const & >(""));
    class_2ba8a639d9075e2b8e8f258f76dc78ca.def("__iadd__", method_pointer_c2366e5485d35c3bb07540f6af90a027, boost::python::return_internal_reference<>(), "");
    class_2ba8a639d9075e2b8e8f258f76dc78ca.def("__iadd__", autowig::method_decorator_c2366e5485d35c3bb07540f6af90a027);
    class_2ba8a639d9075e2b8e8f258f76dc78ca.def("__isub__", method_pointer_a0cbbee9fccc5bd892d7c6bc920a27ca, boost::python::return_internal_reference<>(), "");
    class_2ba8a639d9075e2b8e8f258f76dc78ca.def("__isub__", autowig::method_decorator_a0cbbee9fccc5bd892d7c6bc920a27ca);
    class_2ba8a639d9075e2b8e8f258f76dc78ca.def("is_compressed", method_pointer_5c4e67434447503d95a6c154c256aed1, "");
    class_2ba8a639d9075e2b8e8f258f76dc78ca.def("rows", method_pointer_2e0eb9bcbe045726bdbc57bfaf527801, "");
    class_2ba8a639d9075e2b8e8f258f76dc78ca.def("cols", method_pointer_7d08fd1ee17e55479431549aeb7b1ac6, "");
    class_2ba8a639d9075e2b8e8f258f76dc78ca.def("inner_size", method_pointer_0f633c226a745293b7d7dd0764a85edb, "");
    class_2ba8a639d9075e2b8e8f258f76dc78ca.def("outer_size", method_pointer_a48c3adee66b5295a81203174cb8604e, "");
    class_2ba8a639d9075e2b8e8f258f76dc78ca.def("data", method_pointer_b38cff7328135a2ebd9fe16b941a6267, boost::python::return_internal_reference<>(), "");
    class_2ba8a639d9075e2b8e8f258f76dc78ca.def("data", autowig::method_decorator_b38cff7328135a2ebd9fe16b941a6267);
    class_2ba8a639d9075e2b8e8f258f76dc78ca.def("data", method_pointer_7d978edd25595e619e54242cd0ed2680, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2ba8a639d9075e2b8e8f258f76dc78ca.def("coeff", method_pointer_446c5ad16c605124b118ade1007fe21d, "");
    class_2ba8a639d9075e2b8e8f258f76dc78ca.def("coeff_ref", method_pointer_1d78773f3c7058f792090495f00df475, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2ba8a639d9075e2b8e8f258f76dc78ca.def("coeff_ref", autowig::method_decorator_1d78773f3c7058f792090495f00df475);
    class_2ba8a639d9075e2b8e8f258f76dc78ca.def("insert", method_pointer_518832cacbfe518faa4e11726d5fe71e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2ba8a639d9075e2b8e8f258f76dc78ca.def("insert", autowig::method_decorator_518832cacbfe518faa4e11726d5fe71e);
    class_2ba8a639d9075e2b8e8f258f76dc78ca.def("set_zero", method_pointer_73ec3bcd8c425302a9271a05fec724f9, "");
    class_2ba8a639d9075e2b8e8f258f76dc78ca.def("non_zeros", method_pointer_8350ca46e03a54c78d28140cc59e1927, "");
    class_2ba8a639d9075e2b8e8f258f76dc78ca.def("reserve", method_pointer_365d15aeee7c59b59e0188c5743d194c, "");
    class_2ba8a639d9075e2b8e8f258f76dc78ca.def("insert_back", method_pointer_cbb331dd1d5f5d51842b2e75b3e99125, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2ba8a639d9075e2b8e8f258f76dc78ca.def("insert_back", autowig::method_decorator_cbb331dd1d5f5d51842b2e75b3e99125);
    class_2ba8a639d9075e2b8e8f258f76dc78ca.def("insert_back_by_outer_inner", method_pointer_5ce976006c635f9a8e74b8dea19dcbad, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2ba8a639d9075e2b8e8f258f76dc78ca.def("insert_back_by_outer_inner", autowig::method_decorator_5ce976006c635f9a8e74b8dea19dcbad);
    class_2ba8a639d9075e2b8e8f258f76dc78ca.def("insert_back_by_outer_inner_unordered", method_pointer_861da5bd08bb58f98ec863decb1c6c54, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2ba8a639d9075e2b8e8f258f76dc78ca.def("insert_back_by_outer_inner_unordered", autowig::method_decorator_861da5bd08bb58f98ec863decb1c6c54);
    class_2ba8a639d9075e2b8e8f258f76dc78ca.def("start_vec", method_pointer_05b878fabe6651e390bb30c4a565cb0a, "");
    class_2ba8a639d9075e2b8e8f258f76dc78ca.def("finalize", method_pointer_ce36924e6f5355d4867dd4a6d482cca4, "");
    class_2ba8a639d9075e2b8e8f258f76dc78ca.def("sumup_duplicates", method_pointer_5ef02234d6f252ccb46e09a623e28092, "");
    class_2ba8a639d9075e2b8e8f258f76dc78ca.def("insert_by_outer_inner", method_pointer_63a5bb4829055ffa816ee60bfce594e0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2ba8a639d9075e2b8e8f258f76dc78ca.def("insert_by_outer_inner", autowig::method_decorator_63a5bb4829055ffa816ee60bfce594e0);
    class_2ba8a639d9075e2b8e8f258f76dc78ca.def("make_compressed", method_pointer_70f20b4c5a4a531680411544507df22f, "");
    class_2ba8a639d9075e2b8e8f258f76dc78ca.def("uncompress", method_pointer_c72b364091a35649be62c7849d039ea9, "");
    class_2ba8a639d9075e2b8e8f258f76dc78ca.def("prune", method_pointer_7895f46112d7565686259f45b896c3b2, "");
    class_2ba8a639d9075e2b8e8f258f76dc78ca.def("conservative_resize", method_pointer_133520c2840057628e345752e5f16db1, "");
    class_2ba8a639d9075e2b8e8f258f76dc78ca.def("resize", method_pointer_9e5142e60d0058e9bbf9d1d56826f6ae, "");
    class_2ba8a639d9075e2b8e8f258f76dc78ca.def("resize_non_zeros", method_pointer_c89a66deaa735aafb195ebf68531075f, "");
    class_2ba8a639d9075e2b8e8f258f76dc78ca.def("swap", method_pointer_35516a1eb9b75171a892a6b70185420c, "");
    class_2ba8a639d9075e2b8e8f258f76dc78ca.def("set_identity", method_pointer_aa4e818c4b2e5598b011fbb536748310, "");
    class_2ba8a639d9075e2b8e8f258f76dc78ca.def("sum", method_pointer_8b56b16cbd8d534f9e1630c76f0049f3, "");
    class_2ba8a639d9075e2b8e8f258f76dc78ca.def("insert_back_uncompressed", method_pointer_033d403c333c58368e8d732a6e2acd8d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2ba8a639d9075e2b8e8f258f76dc78ca.def("insert_back_uncompressed", autowig::method_decorator_033d403c333c58368e8d732a6e2acd8d);
    class_2ba8a639d9075e2b8e8f258f76dc78ca.def("__lshift__", function_group::function_0ca9b67bcdf1575ca5ff01708a2d9359, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::Eigen::SparseMatrix< double, 0, int > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::Eigen::SparseMatrix< double, 0, int > >::Type, autowig::Held< class ::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > > >::Type >();
    }

}