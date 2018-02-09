#include "_linalg.h"



namespace autowig
{

    void method_decorator_fae50732d08a599d9b36bd1abd51ba7b(class ::Eigen::SparseVector< double, 0, int > & instance, class ::Eigen::SparseVector< double, 0, int > const & param_in_0, const class ::Eigen::SparseVector< double, 0, int > & param_out) { instance.operator+=(param_in_0) = param_out; }
    void method_decorator_5a611c4cf5555163af48a3e2f2387c06(class ::Eigen::SparseVector< double, 0, int > & instance, class ::Eigen::SparseVector< double, 0, int > const & param_in_0, const class ::Eigen::SparseVector< double, 0, int > & param_out) { instance.operator-=(param_in_0) = param_out; }
    void method_decorator_c64546b9e5b15440b367c56869425d86(class ::Eigen::SparseVector< double, 0, int > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, double param_out) { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_a60cf720fcf8534686f73b918038069e(class ::Eigen::SparseVector< double, 0, int > & instance, ::Eigen::Index  param_in_0, double param_out) { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_6459be0640885540bf06a9fe1ea35e24(class ::Eigen::SparseVector< double, 0, int > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, double param_out) { instance.insertBackByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_a9c83c131d1c549682a04a39bc38123f(class ::Eigen::SparseVector< double, 0, int > & instance, ::Eigen::Index  param_in_0, double param_out) { instance.insertBack(param_in_0) = param_out; }
    void method_decorator_6e677ac51bcb5ebc9cc20c9569ebacdb(class ::Eigen::SparseVector< double, 0, int > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, double param_out) { instance.insertBackByOuterInnerUnordered(param_in_0, param_in_1) = param_out; }
    void method_decorator_b3a87e12cb2d58da95fc677ffe3e97a0(class ::Eigen::SparseVector< double, 0, int > & instance, ::Eigen::Index  param_in_0, double param_out) { instance.insertBackUnordered(param_in_0) = param_out; }
    void method_decorator_696eaf5f69265b2997ff9f087c0b622b(class ::Eigen::SparseVector< double, 0, int > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, double param_out) { instance.insert(param_in_0, param_in_1) = param_out; }
    void method_decorator_4a667508cd495edab0aa013828b0dbd3(class ::Eigen::SparseVector< double, 0, int > & instance, ::Eigen::Index  param_in_0, double param_out) { instance.insert(param_in_0) = param_out; }
    void method_decorator_9b585adbb9b954c1a170526694f9d3c1(class ::Eigen::SparseVector< double, 0, int > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, double param_out) { instance.fill(param_in_0, param_in_1) = param_out; }
    void method_decorator_4285131989da54199af6c3fc09ac0fc6(class ::Eigen::SparseVector< double, 0, int > & instance, ::Eigen::Index  param_in_0, double param_out) { instance.fill(param_in_0) = param_out; }
    void method_decorator_4d69194514d95b0c9d0202ee94817de1(class ::Eigen::SparseVector< double, 0, int > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, double param_out) { instance.fillrand(param_in_0, param_in_1) = param_out; }
    void method_decorator_335a9e8069335079b382f4824f21810f(class ::Eigen::SparseVector< double, 0, int > & instance, ::Eigen::Index  param_in_0, double param_out) { instance.fillrand(param_in_0) = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::Eigen::SparseVector< double, 0, int > const volatile * get_pointer<class ::Eigen::SparseVector< double, 0, int > const volatile >(class ::Eigen::SparseVector< double, 0, int > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_89a1f4bc90b95adda2461ec1574670e0()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::SparseVector< double, 0, int > & (::Eigen::SparseVector< double, 0, int >::*method_pointer_fae50732d08a599d9b36bd1abd51ba7b)(class ::Eigen::SparseVector< double, 0, int > const &) = &::Eigen::SparseVector< double, 0, int >::operator+=;
    class ::Eigen::SparseVector< double, 0, int > & (::Eigen::SparseVector< double, 0, int >::*method_pointer_5a611c4cf5555163af48a3e2f2387c06)(class ::Eigen::SparseVector< double, 0, int > const &) = &::Eigen::SparseVector< double, 0, int >::operator-=;
    ::Eigen::Index  (::Eigen::SparseVector< double, 0, int >::*method_pointer_cf22b388f09e59abbb5c0f4cf30312c3)() const = &::Eigen::SparseVector< double, 0, int >::rows;
    ::Eigen::Index  (::Eigen::SparseVector< double, 0, int >::*method_pointer_59271100d0475327be7442ed8502a9b1)() const = &::Eigen::SparseVector< double, 0, int >::cols;
    ::Eigen::Index  (::Eigen::SparseVector< double, 0, int >::*method_pointer_66637cf3961d5edbaf4e2a42235261bf)() const = &::Eigen::SparseVector< double, 0, int >::innerSize;
    ::Eigen::Index  (::Eigen::SparseVector< double, 0, int >::*method_pointer_b0a18fa732715ab1b4dd40ae3160b4cf)() const = &::Eigen::SparseVector< double, 0, int >::outerSize;
    ::Eigen::SparseVector< double, 0, int >::Scalar  (::Eigen::SparseVector< double, 0, int >::*method_pointer_d4b675b27691564cb9d37daad17df418)(::Eigen::Index , ::Eigen::Index ) const = &::Eigen::SparseVector< double, 0, int >::coeff;
    ::Eigen::SparseVector< double, 0, int >::Scalar  (::Eigen::SparseVector< double, 0, int >::*method_pointer_2d18d5cc46ab559f9f9bd1e6630bebee)(::Eigen::Index ) const = &::Eigen::SparseVector< double, 0, int >::coeff;
    ::Eigen::SparseVector< double, 0, int >::Scalar & (::Eigen::SparseVector< double, 0, int >::*method_pointer_c64546b9e5b15440b367c56869425d86)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::SparseVector< double, 0, int >::coeffRef;
    ::Eigen::SparseVector< double, 0, int >::Scalar & (::Eigen::SparseVector< double, 0, int >::*method_pointer_a60cf720fcf8534686f73b918038069e)(::Eigen::Index ) = &::Eigen::SparseVector< double, 0, int >::coeffRef;
    void  (::Eigen::SparseVector< double, 0, int >::*method_pointer_5d3fd9edf5ae53a3a5e57e2e01e869f6)() = &::Eigen::SparseVector< double, 0, int >::setZero;
    ::Eigen::Index  (::Eigen::SparseVector< double, 0, int >::*method_pointer_2e51707cff0f54329d83872d1a37e7a0)() const = &::Eigen::SparseVector< double, 0, int >::nonZeros;
    void  (::Eigen::SparseVector< double, 0, int >::*method_pointer_d19a689a26be5251bcc1d9ed9f0b1138)(::Eigen::Index ) = &::Eigen::SparseVector< double, 0, int >::startVec;
    ::Eigen::SparseVector< double, 0, int >::Scalar & (::Eigen::SparseVector< double, 0, int >::*method_pointer_6459be0640885540bf06a9fe1ea35e24)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::SparseVector< double, 0, int >::insertBackByOuterInner;
    ::Eigen::SparseVector< double, 0, int >::Scalar & (::Eigen::SparseVector< double, 0, int >::*method_pointer_a9c83c131d1c549682a04a39bc38123f)(::Eigen::Index ) = &::Eigen::SparseVector< double, 0, int >::insertBack;
    ::Eigen::SparseVector< double, 0, int >::Scalar & (::Eigen::SparseVector< double, 0, int >::*method_pointer_6e677ac51bcb5ebc9cc20c9569ebacdb)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::SparseVector< double, 0, int >::insertBackByOuterInnerUnordered;
    ::Eigen::SparseVector< double, 0, int >::Scalar & (::Eigen::SparseVector< double, 0, int >::*method_pointer_b3a87e12cb2d58da95fc677ffe3e97a0)(::Eigen::Index ) = &::Eigen::SparseVector< double, 0, int >::insertBackUnordered;
    ::Eigen::SparseVector< double, 0, int >::Scalar & (::Eigen::SparseVector< double, 0, int >::*method_pointer_696eaf5f69265b2997ff9f087c0b622b)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::SparseVector< double, 0, int >::insert;
    ::Eigen::SparseVector< double, 0, int >::Scalar & (::Eigen::SparseVector< double, 0, int >::*method_pointer_4a667508cd495edab0aa013828b0dbd3)(::Eigen::Index ) = &::Eigen::SparseVector< double, 0, int >::insert;
    void  (::Eigen::SparseVector< double, 0, int >::*method_pointer_47350c624f895ed5a3f6be04d68aaff1)(::Eigen::Index ) = &::Eigen::SparseVector< double, 0, int >::reserve;
    void  (::Eigen::SparseVector< double, 0, int >::*method_pointer_bd409f6d17aa50379f58055bf34a3b3e)() = &::Eigen::SparseVector< double, 0, int >::finalize;
    void  (::Eigen::SparseVector< double, 0, int >::*method_pointer_db4ba8cdc8ed55309d09bc897eba03d7)(::Eigen::SparseVector< double, 0, int >::Scalar const &, ::Eigen::SparseVector< double, 0, int >::RealScalar const &) = &::Eigen::SparseVector< double, 0, int >::prune;
    void  (::Eigen::SparseVector< double, 0, int >::*method_pointer_af0640d0e476533a86e5b555bb9c43b6)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::SparseVector< double, 0, int >::resize;
    void  (::Eigen::SparseVector< double, 0, int >::*method_pointer_cdf55aa84a2e509589b4be2dbfb3b225)(::Eigen::Index ) = &::Eigen::SparseVector< double, 0, int >::resize;
    void  (::Eigen::SparseVector< double, 0, int >::*method_pointer_e8680072a99d5ee89d137898d94ce06d)(::Eigen::Index ) = &::Eigen::SparseVector< double, 0, int >::conservativeResize;
    void  (::Eigen::SparseVector< double, 0, int >::*method_pointer_7d993137d8025a6cbe65de0b6420d476)(::Eigen::Index ) = &::Eigen::SparseVector< double, 0, int >::resizeNonZeros;
    void  (::Eigen::SparseVector< double, 0, int >::*method_pointer_7cd996fb684a53d79305f5027b50df29)(class ::Eigen::SparseVector< double, 0, int > &) = &::Eigen::SparseVector< double, 0, int >::swap;
    ::Eigen::SparseVector< double, 0, int >::Scalar  (::Eigen::SparseVector< double, 0, int >::*method_pointer_a4ab84ceca3255e9b93466d36a21c3ef)() const = &::Eigen::SparseVector< double, 0, int >::sum;
    void  (::Eigen::SparseVector< double, 0, int >::*method_pointer_4fa7b50583f25e919c85490578a11121)(::Eigen::Index ) = &::Eigen::SparseVector< double, 0, int >::startFill;
    ::Eigen::SparseVector< double, 0, int >::Scalar & (::Eigen::SparseVector< double, 0, int >::*method_pointer_9b585adbb9b954c1a170526694f9d3c1)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::SparseVector< double, 0, int >::fill;
    ::Eigen::SparseVector< double, 0, int >::Scalar & (::Eigen::SparseVector< double, 0, int >::*method_pointer_4285131989da54199af6c3fc09ac0fc6)(::Eigen::Index ) = &::Eigen::SparseVector< double, 0, int >::fill;
    ::Eigen::SparseVector< double, 0, int >::Scalar & (::Eigen::SparseVector< double, 0, int >::*method_pointer_4d69194514d95b0c9d0202ee94817de1)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::SparseVector< double, 0, int >::fillrand;
    ::Eigen::SparseVector< double, 0, int >::Scalar & (::Eigen::SparseVector< double, 0, int >::*method_pointer_335a9e8069335079b382f4824f21810f)(::Eigen::Index ) = &::Eigen::SparseVector< double, 0, int >::fillrand;
    struct function_group
    {
        static class ::std::basic_ostream< char, struct ::std::char_traits< char > > & function_2a7689b0292f582998a943e008dc9fc9(class ::std::basic_ostream< char, struct ::std::char_traits< char > > & parameter_0, class ::Eigen::SparseVector< double, 0, int > const & parameter_1)
        { return operator<<(parameter_0, parameter_1); }
    };
    boost::python::class_< class ::Eigen::SparseVector< double, 0, int >, autowig::Held< class ::Eigen::SparseVector< double, 0, int > >::Type, boost::python::bases< class ::Eigen::SparseCompressedBase< class ::Eigen::SparseVector< double, 0, int > > > > class_89a1f4bc90b95adda2461ec1574670e0("_SparseVector_89a1f4bc90b95adda2461ec1574670e0", "", boost::python::no_init);
    class_89a1f4bc90b95adda2461ec1574670e0.def(boost::python::init<  >(""));
    class_89a1f4bc90b95adda2461ec1574670e0.def(boost::python::init< ::Eigen::Index  >(""));
    class_89a1f4bc90b95adda2461ec1574670e0.def(boost::python::init< ::Eigen::Index , ::Eigen::Index  >(""));
    class_89a1f4bc90b95adda2461ec1574670e0.def(boost::python::init< class ::Eigen::SparseVector< double, 0, int > const & >(""));
    class_89a1f4bc90b95adda2461ec1574670e0.def("__iadd__", method_pointer_fae50732d08a599d9b36bd1abd51ba7b, boost::python::return_internal_reference<>(), "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("__iadd__", autowig::method_decorator_fae50732d08a599d9b36bd1abd51ba7b);
    class_89a1f4bc90b95adda2461ec1574670e0.def("__isub__", method_pointer_5a611c4cf5555163af48a3e2f2387c06, boost::python::return_internal_reference<>(), "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("__isub__", autowig::method_decorator_5a611c4cf5555163af48a3e2f2387c06);
    class_89a1f4bc90b95adda2461ec1574670e0.def("rows", method_pointer_cf22b388f09e59abbb5c0f4cf30312c3, "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("cols", method_pointer_59271100d0475327be7442ed8502a9b1, "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("inner_size", method_pointer_66637cf3961d5edbaf4e2a42235261bf, "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("outer_size", method_pointer_b0a18fa732715ab1b4dd40ae3160b4cf, "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("coeff", method_pointer_d4b675b27691564cb9d37daad17df418, "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("coeff", method_pointer_2d18d5cc46ab559f9f9bd1e6630bebee, "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("coeff_ref", method_pointer_c64546b9e5b15440b367c56869425d86, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("coeff_ref", autowig::method_decorator_c64546b9e5b15440b367c56869425d86);
    class_89a1f4bc90b95adda2461ec1574670e0.def("coeff_ref", method_pointer_a60cf720fcf8534686f73b918038069e, boost::python::return_value_policy< boost::python::return_by_value >(), ":Parameter:\n    `i` (:cpp:any:`long` int) - Undocumented\n\n:Returns:\n    a reference to the coefficient value at given index :raw-latex:`\\a `i\n    This operation involes a log(rho\\*size) binary search. If the\n    coefficient does not exist yet, then a sorted insertion into a\n    sequential buffer is performed.\n    \n    This insertion might be very costly if the number of nonzeros above\n    :raw-latex:`\\a `i is large.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_89a1f4bc90b95adda2461ec1574670e0.def("coeff_ref", autowig::method_decorator_a60cf720fcf8534686f73b918038069e);
    class_89a1f4bc90b95adda2461ec1574670e0.def("set_zero", method_pointer_5d3fd9edf5ae53a3a5e57e2e01e869f6, "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("non_zeros", method_pointer_2e51707cff0f54329d83872d1a37e7a0, ":Returns:\n    the number of non zero coefficients\n\n:Return Type:\n    :cpp:any:`long` int\n\n");
    class_89a1f4bc90b95adda2461ec1574670e0.def("start_vec", method_pointer_d19a689a26be5251bcc1d9ed9f0b1138, "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("insert_back_by_outer_inner", method_pointer_6459be0640885540bf06a9fe1ea35e24, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("insert_back_by_outer_inner", autowig::method_decorator_6459be0640885540bf06a9fe1ea35e24);
    class_89a1f4bc90b95adda2461ec1574670e0.def("insert_back", method_pointer_a9c83c131d1c549682a04a39bc38123f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("insert_back", autowig::method_decorator_a9c83c131d1c549682a04a39bc38123f);
    class_89a1f4bc90b95adda2461ec1574670e0.def("insert_back_by_outer_inner_unordered", method_pointer_6e677ac51bcb5ebc9cc20c9569ebacdb, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("insert_back_by_outer_inner_unordered", autowig::method_decorator_6e677ac51bcb5ebc9cc20c9569ebacdb);
    class_89a1f4bc90b95adda2461ec1574670e0.def("insert_back_unordered", method_pointer_b3a87e12cb2d58da95fc677ffe3e97a0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("insert_back_unordered", autowig::method_decorator_b3a87e12cb2d58da95fc677ffe3e97a0);
    class_89a1f4bc90b95adda2461ec1574670e0.def("insert", method_pointer_696eaf5f69265b2997ff9f087c0b622b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("insert", autowig::method_decorator_696eaf5f69265b2997ff9f087c0b622b);
    class_89a1f4bc90b95adda2461ec1574670e0.def("insert", method_pointer_4a667508cd495edab0aa013828b0dbd3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("insert", autowig::method_decorator_4a667508cd495edab0aa013828b0dbd3);
    class_89a1f4bc90b95adda2461ec1574670e0.def("reserve", method_pointer_47350c624f895ed5a3f6be04d68aaff1, ":Parameter:\n    `reserveSize` (:cpp:any:`long` int) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_89a1f4bc90b95adda2461ec1574670e0.def("finalize", method_pointer_bd409f6d17aa50379f58055bf34a3b3e, "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("prune", method_pointer_db4ba8cdc8ed55309d09bc897eba03d7, ":Parameters:\n  - `reference` (:cpp:any:`double`) - Undocumented\n  - `epsilon` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_89a1f4bc90b95adda2461ec1574670e0.def("resize", method_pointer_af0640d0e476533a86e5b555bb9c43b6, ":Parameters:\n  - `rows` (:cpp:any:`long` int) - Undocumented\n  - `cols` (:cpp:any:`long` int) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_89a1f4bc90b95adda2461ec1574670e0.def("resize", method_pointer_cdf55aa84a2e509589b4be2dbfb3b225, ":Parameter:\n    `newSize` (:cpp:any:`long` int) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_89a1f4bc90b95adda2461ec1574670e0.def("conservative_resize", method_pointer_e8680072a99d5ee89d137898d94ce06d, ":Parameter:\n    `newSize` (:cpp:any:`long` int) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_89a1f4bc90b95adda2461ec1574670e0.def("resize_non_zeros", method_pointer_7d993137d8025a6cbe65de0b6420d476, "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("swap", method_pointer_7cd996fb684a53d79305f5027b50df29, ":Parameter:\n    `other` (:cpp:any:`::Eigen::SparseVector<` double, 0, int >) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_89a1f4bc90b95adda2461ec1574670e0.def("sum", method_pointer_a4ab84ceca3255e9b93466d36a21c3ef, ":Return Type:\n    :cpp:any:`double`\n\n");
    class_89a1f4bc90b95adda2461ec1574670e0.def("start_fill", method_pointer_4fa7b50583f25e919c85490578a11121, ":Parameter:\n    `reserve` (:cpp:any:`long` int) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_89a1f4bc90b95adda2461ec1574670e0.def("fill", method_pointer_9b585adbb9b954c1a170526694f9d3c1, boost::python::return_value_policy< boost::python::return_by_value >(), ":Parameters:\n  - `r` (:cpp:any:`long` int) - Undocumented\n  - `c` (:cpp:any:`long` int) - Undocumented\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_89a1f4bc90b95adda2461ec1574670e0.def("fill", autowig::method_decorator_9b585adbb9b954c1a170526694f9d3c1);
    class_89a1f4bc90b95adda2461ec1574670e0.def("fill", method_pointer_4285131989da54199af6c3fc09ac0fc6, boost::python::return_value_policy< boost::python::return_by_value >(), ":Parameter:\n    `i` (:cpp:any:`long` int) - Undocumented\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_89a1f4bc90b95adda2461ec1574670e0.def("fill", autowig::method_decorator_4285131989da54199af6c3fc09ac0fc6);
    class_89a1f4bc90b95adda2461ec1574670e0.def("fillrand", method_pointer_4d69194514d95b0c9d0202ee94817de1, boost::python::return_value_policy< boost::python::return_by_value >(), ":Parameters:\n  - `r` (:cpp:any:`long` int) - Undocumented\n  - `c` (:cpp:any:`long` int) - Undocumented\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_89a1f4bc90b95adda2461ec1574670e0.def("fillrand", autowig::method_decorator_4d69194514d95b0c9d0202ee94817de1);
    class_89a1f4bc90b95adda2461ec1574670e0.def("fillrand", method_pointer_335a9e8069335079b382f4824f21810f, boost::python::return_value_policy< boost::python::return_by_value >(), ":Parameter:\n    `i` (:cpp:any:`long` int) - Undocumented\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_89a1f4bc90b95adda2461ec1574670e0.def("fillrand", autowig::method_decorator_335a9e8069335079b382f4824f21810f);
    class_89a1f4bc90b95adda2461ec1574670e0.def("__lshift__", function_group::function_2a7689b0292f582998a943e008dc9fc9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::Eigen::SparseVector< double, 0, int > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::Eigen::SparseVector< double, 0, int > >::Type, autowig::Held< class ::Eigen::SparseCompressedBase< class ::Eigen::SparseVector< double, 0, int > > >::Type >();
    }

}