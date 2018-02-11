#include "_linalg.h"



namespace autowig
{

    void method_decorator_9c05445121fa564eb5b38a171cfd5fd1(class ::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > & instance, ::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::size_type  param_in_0, const ::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::reference  param_out) { instance.at(param_in_0) = param_out; }
    void method_decorator_ef07a123f023550cab62f1f327664a58(class ::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > & instance, const ::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::reference  param_out) { instance.front() = param_out; }
    void method_decorator_f64089d3503a554da7c2f4583930e9ea(class ::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > & instance, const ::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::reference  param_out) { instance.back() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > const volatile * get_pointer<class ::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > const volatile >(class ::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_c30b007bcb745e899f2480e64dacc68e()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    void  (::std::vector< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, ::std::allocator< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::*method_pointer_4727507ad58c5099be2e811daf34ebc6)(::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::size_type , ::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::value_type const &) = &::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::assign;
    ::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::size_type  (::std::vector< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, ::std::allocator< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::*method_pointer_bad19b9290d75776899eee1e65796e1c)() const = &::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::size;
    ::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::size_type  (::std::vector< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, ::std::allocator< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::*method_pointer_cf72f90de78355b09e903624d14db8ed)() const = &::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::max_size;
    ::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::size_type  (::std::vector< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, ::std::allocator< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::*method_pointer_10a39d93fb7e59c69005df7c4553ba90)() const = &::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::capacity;
    bool  (::std::vector< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, ::std::allocator< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::*method_pointer_032830a5bab65bada093ea924d34b1dc)() const = &::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::empty;
    void  (::std::vector< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, ::std::allocator< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::*method_pointer_51b5a6b6770f58dda9eabf31c6115300)(::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::size_type ) = &::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::reserve;
    ::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::reference  (::std::vector< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, ::std::allocator< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::*method_pointer_9c05445121fa564eb5b38a171cfd5fd1)(::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::size_type ) = &::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::at;
    ::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::const_reference  (::std::vector< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, ::std::allocator< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::*method_pointer_f0eb70d57058540389a41a9ed284a233)(::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::size_type ) const = &::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::at;
    ::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::reference  (::std::vector< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, ::std::allocator< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::*method_pointer_ef07a123f023550cab62f1f327664a58)() = &::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::front;
    ::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::const_reference  (::std::vector< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, ::std::allocator< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::*method_pointer_0d96fe41d21c5d9284a6a4c9f246d9dd)() const = &::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::front;
    ::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::reference  (::std::vector< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, ::std::allocator< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::*method_pointer_f64089d3503a554da7c2f4583930e9ea)() = &::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::back;
    ::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::const_reference  (::std::vector< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, ::std::allocator< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::*method_pointer_308d4dc14c3c5227aebca27aa63a52c7)() const = &::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::back;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > * (::std::vector< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, ::std::allocator< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::*method_pointer_35a5358aab02563189b06bf2970c3052)() = &::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::data;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const * (::std::vector< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, ::std::allocator< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::*method_pointer_9e867d6ebb1158fa9631ea5b50a1bfd4)() const = &::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::data;
    void  (::std::vector< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, ::std::allocator< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::*method_pointer_6a7f0b083de3537e8c19f67505f319ac)(::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::value_type const &) = &::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::push_back;
    void  (::std::vector< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, ::std::allocator< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::*method_pointer_1a8280b3d4f15fba88a44ca5a5b574ec)() = &::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::pop_back;
    void  (::std::vector< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, ::std::allocator< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::*method_pointer_3bf7bc5a7e605a7ab0365c2a709b54e3)(class ::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > &) = &::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::swap;
    void  (::std::vector< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, ::std::allocator< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::*method_pointer_e69aa2bf3f1853b2bc4f39ea9baf59b7)() = &::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::clear;
    boost::python::class_< class ::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >, autowig::Held< class ::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > >::Type > class_c30b007bcb745e899f2480e64dacc68e("_Vector_c30b007bcb745e899f2480e64dacc68e", "", boost::python::no_init);
    class_c30b007bcb745e899f2480e64dacc68e.def(boost::python::init<  >(""));
    class_c30b007bcb745e899f2480e64dacc68e.def("assign", method_pointer_4727507ad58c5099be2e811daf34ebc6, "");
    class_c30b007bcb745e899f2480e64dacc68e.def("__len__", method_pointer_bad19b9290d75776899eee1e65796e1c, "");
    class_c30b007bcb745e899f2480e64dacc68e.def("max_size", method_pointer_cf72f90de78355b09e903624d14db8ed, "");
    class_c30b007bcb745e899f2480e64dacc68e.def("capacity", method_pointer_10a39d93fb7e59c69005df7c4553ba90, "");
    class_c30b007bcb745e899f2480e64dacc68e.def("empty", method_pointer_032830a5bab65bada093ea924d34b1dc, "");
    class_c30b007bcb745e899f2480e64dacc68e.def("reserve", method_pointer_51b5a6b6770f58dda9eabf31c6115300, "");
    class_c30b007bcb745e899f2480e64dacc68e.def("at", method_pointer_9c05445121fa564eb5b38a171cfd5fd1, boost::python::return_internal_reference<>(), "");
    class_c30b007bcb745e899f2480e64dacc68e.def("at", autowig::method_decorator_9c05445121fa564eb5b38a171cfd5fd1);
    class_c30b007bcb745e899f2480e64dacc68e.def("at", method_pointer_f0eb70d57058540389a41a9ed284a233, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c30b007bcb745e899f2480e64dacc68e.def("front", method_pointer_ef07a123f023550cab62f1f327664a58, boost::python::return_internal_reference<>(), "");
    class_c30b007bcb745e899f2480e64dacc68e.def("front", autowig::method_decorator_ef07a123f023550cab62f1f327664a58);
    class_c30b007bcb745e899f2480e64dacc68e.def("front", method_pointer_0d96fe41d21c5d9284a6a4c9f246d9dd, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c30b007bcb745e899f2480e64dacc68e.def("back", method_pointer_f64089d3503a554da7c2f4583930e9ea, boost::python::return_internal_reference<>(), "");
    class_c30b007bcb745e899f2480e64dacc68e.def("back", autowig::method_decorator_f64089d3503a554da7c2f4583930e9ea);
    class_c30b007bcb745e899f2480e64dacc68e.def("back", method_pointer_308d4dc14c3c5227aebca27aa63a52c7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c30b007bcb745e899f2480e64dacc68e.def("data", method_pointer_35a5358aab02563189b06bf2970c3052, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_c30b007bcb745e899f2480e64dacc68e.def("data", method_pointer_9e867d6ebb1158fa9631ea5b50a1bfd4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_c30b007bcb745e899f2480e64dacc68e.def("push_back", method_pointer_6a7f0b083de3537e8c19f67505f319ac, "");
    class_c30b007bcb745e899f2480e64dacc68e.def("pop_back", method_pointer_1a8280b3d4f15fba88a44ca5a5b574ec, "");
    class_c30b007bcb745e899f2480e64dacc68e.def("swap", method_pointer_3bf7bc5a7e605a7ab0365c2a709b54e3, "");
    class_c30b007bcb745e899f2480e64dacc68e.def("clear", method_pointer_e69aa2bf3f1853b2bc4f39ea9baf59b7, "");

    struct vector_c30b007bcb745e899f2480e64dacc68e_from_python
    {
        vector_c30b007bcb745e899f2480e64dacc68e_from_python()
        {
            boost::python::converter::registry::push_back(
                &convertible,
                &construct,
                boost::python::type_id< class ::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > >());
        }

        static void* convertible(PyObject* obj_ptr)
        { return obj_ptr; }

        static void construct(PyObject* obj_ptr, boost::python::converter::rvalue_from_python_stage1_data* data)
        {
            boost::python::handle<> obj_iter(PyObject_GetIter(obj_ptr));
            void* storage = ((boost::python::converter::rvalue_from_python_storage< class ::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > >*)data)->storage.bytes;
            new (storage) class ::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >();
            data->convertible = storage;
            class ::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >& result = *((class ::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >*)storage);
            unsigned int i = 0;
            for(;; i++)
            {
                boost::python::handle<> py_elem_hdl(boost::python::allow_null(PyIter_Next(obj_iter.get())));
                if(PyErr_Occurred())
                { boost::python::throw_error_already_set(); }
                if(!py_elem_hdl.get())
                { break; }
                boost::python::object py_elem_obj(py_elem_hdl);
                result.push_back(boost::python::extract< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  >(py_elem_obj));
            }
        }
    };

    vector_c30b007bcb745e899f2480e64dacc68e_from_python();
}