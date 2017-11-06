#include "_linalg.h"



namespace autowig
{

    void method_decorator_fae50732d08a599d9b36bd1abd51ba7b(class ::Eigen::SparseVector< double, 0, int > & instance, class ::Eigen::SparseVector< double, 0, int > const & param_in_0, const class ::Eigen::SparseVector< double, 0, int > & param_out) { instance.operator+=(param_in_0) = param_out; }
    void method_decorator_5a611c4cf5555163af48a3e2f2387c06(class ::Eigen::SparseVector< double, 0, int > & instance, class ::Eigen::SparseVector< double, 0, int > const & param_in_0, const class ::Eigen::SparseVector< double, 0, int > & param_out) { instance.operator-=(param_in_0) = param_out; }
    void method_decorator_ce43605ab9c95afcad1484e764affc93(class ::Eigen::SparseVector< double, 0, int > & instance, const ::Eigen::SparseVector< double, 0, int >::Storage & param_out) { instance.data() = param_out; }
    void method_decorator_495cd430448357e48a0ec8b82ee42db6(class ::Eigen::SparseVector< double, 0, int > & instance, ::Eigen::SparseVector< double, 0, int >::Index  param_in_0, ::Eigen::SparseVector< double, 0, int >::Index  param_in_1, double param_out) { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_811dfcaa03895689bd5f1a8716779807(class ::Eigen::SparseVector< double, 0, int > & instance, ::Eigen::SparseVector< double, 0, int >::Index  param_in_0, double param_out) { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_59127dc852ec5474b60c679833a675f8(class ::Eigen::SparseVector< double, 0, int > & instance, ::Eigen::SparseVector< double, 0, int >::Index  param_in_0, ::Eigen::SparseVector< double, 0, int >::Index  param_in_1, double param_out) { instance.insertBackByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_60d33c702941536ba7acfd769037d973(class ::Eigen::SparseVector< double, 0, int > & instance, ::Eigen::SparseVector< double, 0, int >::Index  param_in_0, double param_out) { instance.insertBack(param_in_0) = param_out; }
    void method_decorator_5145abd4f78852989f3b9c4469216dce(class ::Eigen::SparseVector< double, 0, int > & instance, ::Eigen::SparseVector< double, 0, int >::Index  param_in_0, ::Eigen::SparseVector< double, 0, int >::Index  param_in_1, double param_out) { instance.insert(param_in_0, param_in_1) = param_out; }
    void method_decorator_871e9b4ce86e5569b856db4a2d7db93a(class ::Eigen::SparseVector< double, 0, int > & instance, ::Eigen::SparseVector< double, 0, int >::Index  param_in_0, double param_out) { instance.insert(param_in_0) = param_out; }
    void method_decorator_3649900e5e32565aa01b881e6f9ac05e(class ::Eigen::SparseVector< double, 0, int > & instance, ::Eigen::SparseVector< double, 0, int >::Index  param_in_0, ::Eigen::SparseVector< double, 0, int >::Index  param_in_1, double param_out) { instance.fill(param_in_0, param_in_1) = param_out; }
    void method_decorator_f6f7728d52845d74b2867ae25d983cb5(class ::Eigen::SparseVector< double, 0, int > & instance, ::Eigen::SparseVector< double, 0, int >::Index  param_in_0, double param_out) { instance.fill(param_in_0) = param_out; }
    void method_decorator_158f31535df156dfae76b320676c384d(class ::Eigen::SparseVector< double, 0, int > & instance, ::Eigen::SparseVector< double, 0, int >::Index  param_in_0, ::Eigen::SparseVector< double, 0, int >::Index  param_in_1, double param_out) { instance.fillrand(param_in_0, param_in_1) = param_out; }
    void method_decorator_4b9c075d478452cfae285cd51c54786e(class ::Eigen::SparseVector< double, 0, int > & instance, ::Eigen::SparseVector< double, 0, int >::Index  param_in_0, double param_out) { instance.fillrand(param_in_0) = param_out; }
    void method_decorator_1b5fe23c88f95a74add9817ee5fca906(class ::Eigen::SparseVector< double, 0, int > & instance, const ::Eigen::SparseVector< double, 0, int >::Storage & param_out) { instance._data() = param_out; }
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
    ::Eigen::SparseVector< double, 0, int >::Index  (::Eigen::SparseVector< double, 0, int >::*method_pointer_cf22b388f09e59abbb5c0f4cf30312c3)() const = &::Eigen::SparseVector< double, 0, int >::rows;
    ::Eigen::SparseVector< double, 0, int >::Index  (::Eigen::SparseVector< double, 0, int >::*method_pointer_59271100d0475327be7442ed8502a9b1)() const = &::Eigen::SparseVector< double, 0, int >::cols;
    ::Eigen::SparseVector< double, 0, int >::Index  (::Eigen::SparseVector< double, 0, int >::*method_pointer_66637cf3961d5edbaf4e2a42235261bf)() const = &::Eigen::SparseVector< double, 0, int >::innerSize;
    ::Eigen::SparseVector< double, 0, int >::Index  (::Eigen::SparseVector< double, 0, int >::*method_pointer_b0a18fa732715ab1b4dd40ae3160b4cf)() const = &::Eigen::SparseVector< double, 0, int >::outerSize;
    ::Eigen::SparseVector< double, 0, int >::Storage & (::Eigen::SparseVector< double, 0, int >::*method_pointer_ce43605ab9c95afcad1484e764affc93)() = &::Eigen::SparseVector< double, 0, int >::data;
    ::Eigen::SparseVector< double, 0, int >::Storage const & (::Eigen::SparseVector< double, 0, int >::*method_pointer_648d35aa6c6251528c765d788a681e6d)() const = &::Eigen::SparseVector< double, 0, int >::data;
    ::Eigen::SparseVector< double, 0, int >::Scalar  (::Eigen::SparseVector< double, 0, int >::*method_pointer_b65add6652f454dd98764291c01ec7e1)(::Eigen::SparseVector< double, 0, int >::Index , ::Eigen::SparseVector< double, 0, int >::Index ) const = &::Eigen::SparseVector< double, 0, int >::coeff;
    ::Eigen::SparseVector< double, 0, int >::Scalar  (::Eigen::SparseVector< double, 0, int >::*method_pointer_6e54af2e90fd5b69a223b9f7a3e79abe)(::Eigen::SparseVector< double, 0, int >::Index ) const = &::Eigen::SparseVector< double, 0, int >::coeff;
    ::Eigen::SparseVector< double, 0, int >::Scalar & (::Eigen::SparseVector< double, 0, int >::*method_pointer_495cd430448357e48a0ec8b82ee42db6)(::Eigen::SparseVector< double, 0, int >::Index , ::Eigen::SparseVector< double, 0, int >::Index ) = &::Eigen::SparseVector< double, 0, int >::coeffRef;
    ::Eigen::SparseVector< double, 0, int >::Scalar & (::Eigen::SparseVector< double, 0, int >::*method_pointer_811dfcaa03895689bd5f1a8716779807)(::Eigen::SparseVector< double, 0, int >::Index ) = &::Eigen::SparseVector< double, 0, int >::coeffRef;
    void  (::Eigen::SparseVector< double, 0, int >::*method_pointer_5d3fd9edf5ae53a3a5e57e2e01e869f6)() = &::Eigen::SparseVector< double, 0, int >::setZero;
    ::Eigen::SparseVector< double, 0, int >::Index  (::Eigen::SparseVector< double, 0, int >::*method_pointer_2e51707cff0f54329d83872d1a37e7a0)() const = &::Eigen::SparseVector< double, 0, int >::nonZeros;
    void  (::Eigen::SparseVector< double, 0, int >::*method_pointer_e5b71689eca85ad08c6e533d614cefcf)(::Eigen::SparseVector< double, 0, int >::Index ) = &::Eigen::SparseVector< double, 0, int >::startVec;
    ::Eigen::SparseVector< double, 0, int >::Scalar & (::Eigen::SparseVector< double, 0, int >::*method_pointer_59127dc852ec5474b60c679833a675f8)(::Eigen::SparseVector< double, 0, int >::Index , ::Eigen::SparseVector< double, 0, int >::Index ) = &::Eigen::SparseVector< double, 0, int >::insertBackByOuterInner;
    ::Eigen::SparseVector< double, 0, int >::Scalar & (::Eigen::SparseVector< double, 0, int >::*method_pointer_60d33c702941536ba7acfd769037d973)(::Eigen::SparseVector< double, 0, int >::Index ) = &::Eigen::SparseVector< double, 0, int >::insertBack;
    ::Eigen::SparseVector< double, 0, int >::Scalar & (::Eigen::SparseVector< double, 0, int >::*method_pointer_5145abd4f78852989f3b9c4469216dce)(::Eigen::SparseVector< double, 0, int >::Index , ::Eigen::SparseVector< double, 0, int >::Index ) = &::Eigen::SparseVector< double, 0, int >::insert;
    ::Eigen::SparseVector< double, 0, int >::Scalar & (::Eigen::SparseVector< double, 0, int >::*method_pointer_871e9b4ce86e5569b856db4a2d7db93a)(::Eigen::SparseVector< double, 0, int >::Index ) = &::Eigen::SparseVector< double, 0, int >::insert;
    void  (::Eigen::SparseVector< double, 0, int >::*method_pointer_b0da04f2c9f35e7abc59b2619be1537b)(::Eigen::SparseVector< double, 0, int >::Index ) = &::Eigen::SparseVector< double, 0, int >::reserve;
    void  (::Eigen::SparseVector< double, 0, int >::*method_pointer_bd409f6d17aa50379f58055bf34a3b3e)() = &::Eigen::SparseVector< double, 0, int >::finalize;
    void  (::Eigen::SparseVector< double, 0, int >::*method_pointer_db4ba8cdc8ed55309d09bc897eba03d7)(::Eigen::SparseVector< double, 0, int >::Scalar const &, ::Eigen::SparseVector< double, 0, int >::RealScalar const &) = &::Eigen::SparseVector< double, 0, int >::prune;
    void  (::Eigen::SparseVector< double, 0, int >::*method_pointer_653cb22db0ad539398f32eb23594455b)(::Eigen::SparseVector< double, 0, int >::Index , ::Eigen::SparseVector< double, 0, int >::Index ) = &::Eigen::SparseVector< double, 0, int >::resize;
    void  (::Eigen::SparseVector< double, 0, int >::*method_pointer_e20a1bf494ed50f2a8688c7a6231462e)(::Eigen::SparseVector< double, 0, int >::Index ) = &::Eigen::SparseVector< double, 0, int >::resize;
    void  (::Eigen::SparseVector< double, 0, int >::*method_pointer_b13d534b14d2524aa4c978c05ecb0bc5)(::Eigen::SparseVector< double, 0, int >::Index ) = &::Eigen::SparseVector< double, 0, int >::resizeNonZeros;
    void  (::Eigen::SparseVector< double, 0, int >::*method_pointer_7cd996fb684a53d79305f5027b50df29)(class ::Eigen::SparseVector< double, 0, int > &) = &::Eigen::SparseVector< double, 0, int >::swap;
    ::Eigen::SparseVector< double, 0, int >::Scalar  (::Eigen::SparseVector< double, 0, int >::*method_pointer_a4ab84ceca3255e9b93466d36a21c3ef)() const = &::Eigen::SparseVector< double, 0, int >::sum;
    void  (::Eigen::SparseVector< double, 0, int >::*method_pointer_87fc84b03d0f5f32b9b2e9f39bd67872)(::Eigen::SparseVector< double, 0, int >::Index ) = &::Eigen::SparseVector< double, 0, int >::startFill;
    ::Eigen::SparseVector< double, 0, int >::Scalar & (::Eigen::SparseVector< double, 0, int >::*method_pointer_3649900e5e32565aa01b881e6f9ac05e)(::Eigen::SparseVector< double, 0, int >::Index , ::Eigen::SparseVector< double, 0, int >::Index ) = &::Eigen::SparseVector< double, 0, int >::fill;
    ::Eigen::SparseVector< double, 0, int >::Scalar & (::Eigen::SparseVector< double, 0, int >::*method_pointer_f6f7728d52845d74b2867ae25d983cb5)(::Eigen::SparseVector< double, 0, int >::Index ) = &::Eigen::SparseVector< double, 0, int >::fill;
    ::Eigen::SparseVector< double, 0, int >::Scalar & (::Eigen::SparseVector< double, 0, int >::*method_pointer_158f31535df156dfae76b320676c384d)(::Eigen::SparseVector< double, 0, int >::Index , ::Eigen::SparseVector< double, 0, int >::Index ) = &::Eigen::SparseVector< double, 0, int >::fillrand;
    ::Eigen::SparseVector< double, 0, int >::Scalar & (::Eigen::SparseVector< double, 0, int >::*method_pointer_4b9c075d478452cfae285cd51c54786e)(::Eigen::SparseVector< double, 0, int >::Index ) = &::Eigen::SparseVector< double, 0, int >::fillrand;
    ::Eigen::SparseVector< double, 0, int >::Storage & (::Eigen::SparseVector< double, 0, int >::*method_pointer_1b5fe23c88f95a74add9817ee5fca906)() = &::Eigen::SparseVector< double, 0, int >::_data;
    ::Eigen::SparseVector< double, 0, int >::Storage const & (::Eigen::SparseVector< double, 0, int >::*method_pointer_46b8c75369cb535597006f5326e8bc9e)() const = &::Eigen::SparseVector< double, 0, int >::_data;
    struct function_group
    {
        static class ::std::basic_ostream< char, struct ::std::char_traits< char > > & function_2a7689b0292f582998a943e008dc9fc9(class ::std::basic_ostream< char, struct ::std::char_traits< char > > & parameter_0, class ::Eigen::SparseVector< double, 0, int > const & parameter_1)
        { return operator<<(parameter_0, parameter_1); }
    };
    boost::python::class_< class ::Eigen::SparseVector< double, 0, int >, autowig::Held< class ::Eigen::SparseVector< double, 0, int > >::Type, boost::python::bases< class ::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > > > > class_89a1f4bc90b95adda2461ec1574670e0("_SparseVector_89a1f4bc90b95adda2461ec1574670e0", "", boost::python::no_init);
    class_89a1f4bc90b95adda2461ec1574670e0.def(boost::python::init<  >(""));
    class_89a1f4bc90b95adda2461ec1574670e0.def(boost::python::init< ::Eigen::SparseVector< double, 0, int >::Index  >(""));
    class_89a1f4bc90b95adda2461ec1574670e0.def(boost::python::init< ::Eigen::SparseVector< double, 0, int >::Index , ::Eigen::SparseVector< double, 0, int >::Index  >(""));
    class_89a1f4bc90b95adda2461ec1574670e0.def(boost::python::init< class ::Eigen::SparseVector< double, 0, int > const & >(""));
    class_89a1f4bc90b95adda2461ec1574670e0.def("__iadd__", method_pointer_fae50732d08a599d9b36bd1abd51ba7b, boost::python::return_internal_reference<>(), "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("__iadd__", autowig::method_decorator_fae50732d08a599d9b36bd1abd51ba7b);
    class_89a1f4bc90b95adda2461ec1574670e0.def("__isub__", method_pointer_5a611c4cf5555163af48a3e2f2387c06, boost::python::return_internal_reference<>(), "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("__isub__", autowig::method_decorator_5a611c4cf5555163af48a3e2f2387c06);
    class_89a1f4bc90b95adda2461ec1574670e0.def("rows", method_pointer_cf22b388f09e59abbb5c0f4cf30312c3, "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("cols", method_pointer_59271100d0475327be7442ed8502a9b1, "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("inner_size", method_pointer_66637cf3961d5edbaf4e2a42235261bf, "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("outer_size", method_pointer_b0a18fa732715ab1b4dd40ae3160b4cf, "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("data", method_pointer_ce43605ab9c95afcad1484e764affc93, boost::python::return_internal_reference<>(), "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("data", autowig::method_decorator_ce43605ab9c95afcad1484e764affc93);
    class_89a1f4bc90b95adda2461ec1574670e0.def("data", method_pointer_648d35aa6c6251528c765d788a681e6d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("coeff", method_pointer_b65add6652f454dd98764291c01ec7e1, "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("coeff", method_pointer_6e54af2e90fd5b69a223b9f7a3e79abe, "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("coeff_ref", method_pointer_495cd430448357e48a0ec8b82ee42db6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("coeff_ref", autowig::method_decorator_495cd430448357e48a0ec8b82ee42db6);
    class_89a1f4bc90b95adda2461ec1574670e0.def("coeff_ref", method_pointer_811dfcaa03895689bd5f1a8716779807, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("coeff_ref", autowig::method_decorator_811dfcaa03895689bd5f1a8716779807);
    class_89a1f4bc90b95adda2461ec1574670e0.def("set_zero", method_pointer_5d3fd9edf5ae53a3a5e57e2e01e869f6, "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("non_zeros", method_pointer_2e51707cff0f54329d83872d1a37e7a0, "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("start_vec", method_pointer_e5b71689eca85ad08c6e533d614cefcf, "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("insert_back_by_outer_inner", method_pointer_59127dc852ec5474b60c679833a675f8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("insert_back_by_outer_inner", autowig::method_decorator_59127dc852ec5474b60c679833a675f8);
    class_89a1f4bc90b95adda2461ec1574670e0.def("insert_back", method_pointer_60d33c702941536ba7acfd769037d973, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("insert_back", autowig::method_decorator_60d33c702941536ba7acfd769037d973);
    class_89a1f4bc90b95adda2461ec1574670e0.def("insert", method_pointer_5145abd4f78852989f3b9c4469216dce, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("insert", autowig::method_decorator_5145abd4f78852989f3b9c4469216dce);
    class_89a1f4bc90b95adda2461ec1574670e0.def("insert", method_pointer_871e9b4ce86e5569b856db4a2d7db93a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("insert", autowig::method_decorator_871e9b4ce86e5569b856db4a2d7db93a);
    class_89a1f4bc90b95adda2461ec1574670e0.def("reserve", method_pointer_b0da04f2c9f35e7abc59b2619be1537b, "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("finalize", method_pointer_bd409f6d17aa50379f58055bf34a3b3e, "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("prune", method_pointer_db4ba8cdc8ed55309d09bc897eba03d7, "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("resize", method_pointer_653cb22db0ad539398f32eb23594455b, "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("resize", method_pointer_e20a1bf494ed50f2a8688c7a6231462e, "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("resize_non_zeros", method_pointer_b13d534b14d2524aa4c978c05ecb0bc5, "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("swap", method_pointer_7cd996fb684a53d79305f5027b50df29, "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("sum", method_pointer_a4ab84ceca3255e9b93466d36a21c3ef, "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("start_fill", method_pointer_87fc84b03d0f5f32b9b2e9f39bd67872, "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("fill", method_pointer_3649900e5e32565aa01b881e6f9ac05e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("fill", autowig::method_decorator_3649900e5e32565aa01b881e6f9ac05e);
    class_89a1f4bc90b95adda2461ec1574670e0.def("fill", method_pointer_f6f7728d52845d74b2867ae25d983cb5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("fill", autowig::method_decorator_f6f7728d52845d74b2867ae25d983cb5);
    class_89a1f4bc90b95adda2461ec1574670e0.def("fillrand", method_pointer_158f31535df156dfae76b320676c384d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("fillrand", autowig::method_decorator_158f31535df156dfae76b320676c384d);
    class_89a1f4bc90b95adda2461ec1574670e0.def("fillrand", method_pointer_4b9c075d478452cfae285cd51c54786e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("fillrand", autowig::method_decorator_4b9c075d478452cfae285cd51c54786e);
    class_89a1f4bc90b95adda2461ec1574670e0.def("data", method_pointer_1b5fe23c88f95a74add9817ee5fca906, boost::python::return_internal_reference<>(), "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("data", autowig::method_decorator_1b5fe23c88f95a74add9817ee5fca906);
    class_89a1f4bc90b95adda2461ec1574670e0.def("data", method_pointer_46b8c75369cb535597006f5326e8bc9e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_89a1f4bc90b95adda2461ec1574670e0.def("__lshift__", function_group::function_2a7689b0292f582998a943e008dc9fc9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::Eigen::SparseVector< double, 0, int > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::Eigen::SparseVector< double, 0, int > >::Type, autowig::Held< class ::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > > >::Type >();
    }

}