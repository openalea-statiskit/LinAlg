#include "_linalg.h"



namespace autowig
{

    void method_decorator_5fb0a7b96d44589abc874fddc24e5493(class ::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > > & instance, ::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::size_type  param_in_0, const ::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::reference  param_out) { instance.at(param_in_0) = param_out; }
    void method_decorator_0944eca2d7335d0885a6ad5ea8476355(class ::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > > & instance, const ::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::reference  param_out) { instance.front() = param_out; }
    void method_decorator_c7df4bc3b7f55d67989cef594ee853d1(class ::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > > & instance, const ::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::reference  param_out) { instance.back() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > > const volatile * get_pointer<class ::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > > const volatile >(class ::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_5e2acfe6c26a535782c2d4f020c56308()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    void  (::std::vector< ::Eigen::SparseVector< double, 0, int >, ::std::allocator< ::Eigen::SparseVector< double, 0, int > > >::*method_pointer_f3d0acacec19560bab3ce2d960271de8)(::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::size_type , ::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::value_type const &) = &::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::assign;
    void  (::std::vector< ::Eigen::SparseVector< double, 0, int >, ::std::allocator< ::Eigen::SparseVector< double, 0, int > > >::*method_pointer_efd8a2b6844059cdb605efe6361b964f)(class ::std::initializer_list< class ::Eigen::SparseVector< double, 0, int > > ) = &::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::assign;
    ::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::reverse_iterator  (::std::vector< ::Eigen::SparseVector< double, 0, int >, ::std::allocator< ::Eigen::SparseVector< double, 0, int > > >::*method_pointer_e3613f0bfd04580cba1a022dab22ce54)() = &::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::rbegin;
    ::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::const_reverse_iterator  (::std::vector< ::Eigen::SparseVector< double, 0, int >, ::std::allocator< ::Eigen::SparseVector< double, 0, int > > >::*method_pointer_d42c82824276546994f03460a2c0f16e)() const = &::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::rbegin;
    ::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::reverse_iterator  (::std::vector< ::Eigen::SparseVector< double, 0, int >, ::std::allocator< ::Eigen::SparseVector< double, 0, int > > >::*method_pointer_f529755e82775bb2ad4833d4ab452422)() = &::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::rend;
    ::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::const_reverse_iterator  (::std::vector< ::Eigen::SparseVector< double, 0, int >, ::std::allocator< ::Eigen::SparseVector< double, 0, int > > >::*method_pointer_49afac8389515e58aa12e55785375748)() const = &::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::rend;
    ::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::const_reverse_iterator  (::std::vector< ::Eigen::SparseVector< double, 0, int >, ::std::allocator< ::Eigen::SparseVector< double, 0, int > > >::*method_pointer_6b61b7008a3258ac90e3291492c24bff)() const = &::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::crbegin;
    ::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::const_reverse_iterator  (::std::vector< ::Eigen::SparseVector< double, 0, int >, ::std::allocator< ::Eigen::SparseVector< double, 0, int > > >::*method_pointer_18f64a4a0a415d55a40bffd6e83f44ae)() const = &::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::crend;
    ::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::size_type  (::std::vector< ::Eigen::SparseVector< double, 0, int >, ::std::allocator< ::Eigen::SparseVector< double, 0, int > > >::*method_pointer_6c568ec482765e5189b05b03df38e662)() const = &::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::size;
    ::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::size_type  (::std::vector< ::Eigen::SparseVector< double, 0, int >, ::std::allocator< ::Eigen::SparseVector< double, 0, int > > >::*method_pointer_b6331a4639c55e50a4532e46cc20c7a8)() const = &::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::max_size;
    void  (::std::vector< ::Eigen::SparseVector< double, 0, int >, ::std::allocator< ::Eigen::SparseVector< double, 0, int > > >::*method_pointer_658115da363c5a8bb69db0b8443394d1)(::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::size_type ) = &::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::resize;
    void  (::std::vector< ::Eigen::SparseVector< double, 0, int >, ::std::allocator< ::Eigen::SparseVector< double, 0, int > > >::*method_pointer_659285c700b75d02bfce2faf25d2771e)(::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::size_type , ::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::value_type const &) = &::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::resize;
    void  (::std::vector< ::Eigen::SparseVector< double, 0, int >, ::std::allocator< ::Eigen::SparseVector< double, 0, int > > >::*method_pointer_3c8d4ff4b7365d55babe0bde13d9b2c9)() = &::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::shrink_to_fit;
    ::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::size_type  (::std::vector< ::Eigen::SparseVector< double, 0, int >, ::std::allocator< ::Eigen::SparseVector< double, 0, int > > >::*method_pointer_c67330ab1d735bdbb6697ec36aebf33e)() const = &::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::capacity;
    bool  (::std::vector< ::Eigen::SparseVector< double, 0, int >, ::std::allocator< ::Eigen::SparseVector< double, 0, int > > >::*method_pointer_af6381f22fbc572fa33d4ab52d8d7620)() const = &::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::empty;
    void  (::std::vector< ::Eigen::SparseVector< double, 0, int >, ::std::allocator< ::Eigen::SparseVector< double, 0, int > > >::*method_pointer_0ce45ad803c7558b9d90f01caeca1025)(::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::size_type ) = &::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::reserve;
    ::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::reference  (::std::vector< ::Eigen::SparseVector< double, 0, int >, ::std::allocator< ::Eigen::SparseVector< double, 0, int > > >::*method_pointer_5fb0a7b96d44589abc874fddc24e5493)(::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::size_type ) = &::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::at;
    ::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::const_reference  (::std::vector< ::Eigen::SparseVector< double, 0, int >, ::std::allocator< ::Eigen::SparseVector< double, 0, int > > >::*method_pointer_49cf7081af005f1cace0f980e9e01ae9)(::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::size_type ) const = &::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::at;
    ::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::reference  (::std::vector< ::Eigen::SparseVector< double, 0, int >, ::std::allocator< ::Eigen::SparseVector< double, 0, int > > >::*method_pointer_0944eca2d7335d0885a6ad5ea8476355)() = &::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::front;
    ::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::const_reference  (::std::vector< ::Eigen::SparseVector< double, 0, int >, ::std::allocator< ::Eigen::SparseVector< double, 0, int > > >::*method_pointer_7f1304005d6e5c4db44382ef41eb674a)() const = &::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::front;
    ::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::reference  (::std::vector< ::Eigen::SparseVector< double, 0, int >, ::std::allocator< ::Eigen::SparseVector< double, 0, int > > >::*method_pointer_c7df4bc3b7f55d67989cef594ee853d1)() = &::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::back;
    ::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::const_reference  (::std::vector< ::Eigen::SparseVector< double, 0, int >, ::std::allocator< ::Eigen::SparseVector< double, 0, int > > >::*method_pointer_303f75cac2195ba9b2503fd146d481a6)() const = &::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::back;
    class ::Eigen::SparseVector< double, 0, int > * (::std::vector< ::Eigen::SparseVector< double, 0, int >, ::std::allocator< ::Eigen::SparseVector< double, 0, int > > >::*method_pointer_28d1586a750d5ff59e0cf8f41196c7e3)() = &::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::data;
    class ::Eigen::SparseVector< double, 0, int > const * (::std::vector< ::Eigen::SparseVector< double, 0, int >, ::std::allocator< ::Eigen::SparseVector< double, 0, int > > >::*method_pointer_a8c93ddcfd975137b68cda5d4c94a8d7)() const = &::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::data;
    void  (::std::vector< ::Eigen::SparseVector< double, 0, int >, ::std::allocator< ::Eigen::SparseVector< double, 0, int > > >::*method_pointer_ae96b37a6ef85100a7e23ec9586e9c58)(::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::value_type const &) = &::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::push_back;
    void  (::std::vector< ::Eigen::SparseVector< double, 0, int >, ::std::allocator< ::Eigen::SparseVector< double, 0, int > > >::*method_pointer_43c5dee934065c318efbfe10c68da083)() = &::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::pop_back;
    void  (::std::vector< ::Eigen::SparseVector< double, 0, int >, ::std::allocator< ::Eigen::SparseVector< double, 0, int > > >::*method_pointer_22742ac432df5a44bd4c233b4461c0d6)(class ::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > > &) = &::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::swap;
    void  (::std::vector< ::Eigen::SparseVector< double, 0, int >, ::std::allocator< ::Eigen::SparseVector< double, 0, int > > >::*method_pointer_03407ebb51f154e7a1f2ea52c70e44fb)() = &::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >::clear;
    boost::python::class_< class ::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >, autowig::Held< class ::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > > >::Type > class_5e2acfe6c26a535782c2d4f020c56308("_Vector_5e2acfe6c26a535782c2d4f020c56308", "", boost::python::no_init);
    class_5e2acfe6c26a535782c2d4f020c56308.def(boost::python::init<  >(""));
    class_5e2acfe6c26a535782c2d4f020c56308.def("assign", method_pointer_f3d0acacec19560bab3ce2d960271de8, "");
    class_5e2acfe6c26a535782c2d4f020c56308.def("assign", method_pointer_efd8a2b6844059cdb605efe6361b964f, "");
    class_5e2acfe6c26a535782c2d4f020c56308.def("rbegin", method_pointer_e3613f0bfd04580cba1a022dab22ce54, "");
    class_5e2acfe6c26a535782c2d4f020c56308.def("rbegin", method_pointer_d42c82824276546994f03460a2c0f16e, "");
    class_5e2acfe6c26a535782c2d4f020c56308.def("rend", method_pointer_f529755e82775bb2ad4833d4ab452422, "");
    class_5e2acfe6c26a535782c2d4f020c56308.def("rend", method_pointer_49afac8389515e58aa12e55785375748, "");
    class_5e2acfe6c26a535782c2d4f020c56308.def("crbegin", method_pointer_6b61b7008a3258ac90e3291492c24bff, "");
    class_5e2acfe6c26a535782c2d4f020c56308.def("crend", method_pointer_18f64a4a0a415d55a40bffd6e83f44ae, "");
    class_5e2acfe6c26a535782c2d4f020c56308.def("__len__", method_pointer_6c568ec482765e5189b05b03df38e662, "");
    class_5e2acfe6c26a535782c2d4f020c56308.def("max_size", method_pointer_b6331a4639c55e50a4532e46cc20c7a8, "");
    class_5e2acfe6c26a535782c2d4f020c56308.def("resize", method_pointer_658115da363c5a8bb69db0b8443394d1, "");
    class_5e2acfe6c26a535782c2d4f020c56308.def("resize", method_pointer_659285c700b75d02bfce2faf25d2771e, "");
    class_5e2acfe6c26a535782c2d4f020c56308.def("shrink_to_fit", method_pointer_3c8d4ff4b7365d55babe0bde13d9b2c9, "");
    class_5e2acfe6c26a535782c2d4f020c56308.def("capacity", method_pointer_c67330ab1d735bdbb6697ec36aebf33e, "");
    class_5e2acfe6c26a535782c2d4f020c56308.def("empty", method_pointer_af6381f22fbc572fa33d4ab52d8d7620, "");
    class_5e2acfe6c26a535782c2d4f020c56308.def("reserve", method_pointer_0ce45ad803c7558b9d90f01caeca1025, "");
    class_5e2acfe6c26a535782c2d4f020c56308.def("at", method_pointer_5fb0a7b96d44589abc874fddc24e5493, boost::python::return_internal_reference<>(), "");
    class_5e2acfe6c26a535782c2d4f020c56308.def("at", autowig::method_decorator_5fb0a7b96d44589abc874fddc24e5493);
    class_5e2acfe6c26a535782c2d4f020c56308.def("at", method_pointer_49cf7081af005f1cace0f980e9e01ae9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5e2acfe6c26a535782c2d4f020c56308.def("front", method_pointer_0944eca2d7335d0885a6ad5ea8476355, boost::python::return_internal_reference<>(), "");
    class_5e2acfe6c26a535782c2d4f020c56308.def("front", autowig::method_decorator_0944eca2d7335d0885a6ad5ea8476355);
    class_5e2acfe6c26a535782c2d4f020c56308.def("front", method_pointer_7f1304005d6e5c4db44382ef41eb674a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5e2acfe6c26a535782c2d4f020c56308.def("back", method_pointer_c7df4bc3b7f55d67989cef594ee853d1, boost::python::return_internal_reference<>(), "");
    class_5e2acfe6c26a535782c2d4f020c56308.def("back", autowig::method_decorator_c7df4bc3b7f55d67989cef594ee853d1);
    class_5e2acfe6c26a535782c2d4f020c56308.def("back", method_pointer_303f75cac2195ba9b2503fd146d481a6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5e2acfe6c26a535782c2d4f020c56308.def("data", method_pointer_28d1586a750d5ff59e0cf8f41196c7e3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_5e2acfe6c26a535782c2d4f020c56308.def("data", method_pointer_a8c93ddcfd975137b68cda5d4c94a8d7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_5e2acfe6c26a535782c2d4f020c56308.def("push_back", method_pointer_ae96b37a6ef85100a7e23ec9586e9c58, "");
    class_5e2acfe6c26a535782c2d4f020c56308.def("pop_back", method_pointer_43c5dee934065c318efbfe10c68da083, "");
    class_5e2acfe6c26a535782c2d4f020c56308.def("swap", method_pointer_22742ac432df5a44bd4c233b4461c0d6, "");
    class_5e2acfe6c26a535782c2d4f020c56308.def("clear", method_pointer_03407ebb51f154e7a1f2ea52c70e44fb, "");

    struct vector_5e2acfe6c26a535782c2d4f020c56308_from_python
    {
        vector_5e2acfe6c26a535782c2d4f020c56308_from_python()
        {
            boost::python::converter::registry::push_back(
                &convertible,
                &construct,
                boost::python::type_id< class ::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > > >());
        }

        static void* convertible(PyObject* obj_ptr)
        { return obj_ptr; }

        static void construct(PyObject* obj_ptr, boost::python::converter::rvalue_from_python_stage1_data* data)
        {
            boost::python::handle<> obj_iter(PyObject_GetIter(obj_ptr));
            void* storage = ((boost::python::converter::rvalue_from_python_storage< class ::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > > >*)data)->storage.bytes;
            new (storage) class ::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >();
            data->convertible = storage;
            class ::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >& result = *((class ::std::vector< class ::Eigen::SparseVector< double, 0, int >, class ::std::allocator< class ::Eigen::SparseVector< double, 0, int > > >*)storage);
            unsigned int i = 0;
            for(;; i++)
            {
                boost::python::handle<> py_elem_hdl(boost::python::allow_null(PyIter_Next(obj_iter.get())));
                if(PyErr_Occurred())
                { boost::python::throw_error_already_set(); }
                if(!py_elem_hdl.get())
                { break; }
                boost::python::object py_elem_obj(py_elem_hdl);
                result.push_back(boost::python::extract< class ::Eigen::SparseVector< double, 0, int >  >(py_elem_obj));
            }
        }
    };

    vector_5e2acfe6c26a535782c2d4f020c56308_from_python();
}