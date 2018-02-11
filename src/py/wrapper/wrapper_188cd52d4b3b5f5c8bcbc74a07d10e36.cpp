#include "_linalg.h"



namespace autowig
{

    void method_decorator_c3915c92d0665651a16ed2a762ec5a6b(class ::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > > & instance, ::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > >::size_type  param_in_0, const ::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > >::reference  param_out) { instance.at(param_in_0) = param_out; }
    void method_decorator_6f2a3ca73d705e2aa77d38d981e8cebe(class ::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > > & instance, const ::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > >::reference  param_out) { instance.front() = param_out; }
    void method_decorator_4d73b2bf2dbc5c73913dfe117d4dffe2(class ::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > > & instance, const ::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > >::reference  param_out) { instance.back() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > > const volatile * get_pointer<class ::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > > const volatile >(class ::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_188cd52d4b3b5f5c8bcbc74a07d10e36()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    void  (::std::vector< ::Eigen::SparseMatrix< double, 0, int >, ::std::allocator< ::Eigen::SparseMatrix< double, 0, int > > >::*method_pointer_03a4e4c428fe5414b6acf8c3ff8aee9b)(::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > >::size_type , ::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > >::value_type const &) = &::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > >::assign;
    ::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > >::size_type  (::std::vector< ::Eigen::SparseMatrix< double, 0, int >, ::std::allocator< ::Eigen::SparseMatrix< double, 0, int > > >::*method_pointer_d81a1f34b9685691b549905c022a85b4)() const = &::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > >::size;
    ::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > >::size_type  (::std::vector< ::Eigen::SparseMatrix< double, 0, int >, ::std::allocator< ::Eigen::SparseMatrix< double, 0, int > > >::*method_pointer_eb8c45f587575192ad59670e6315d126)() const = &::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > >::max_size;
    ::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > >::size_type  (::std::vector< ::Eigen::SparseMatrix< double, 0, int >, ::std::allocator< ::Eigen::SparseMatrix< double, 0, int > > >::*method_pointer_c79b6f57a6db500b993190e687c1c510)() const = &::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > >::capacity;
    bool  (::std::vector< ::Eigen::SparseMatrix< double, 0, int >, ::std::allocator< ::Eigen::SparseMatrix< double, 0, int > > >::*method_pointer_340e1d04df0e51a29e46ea7f40b7205a)() const = &::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > >::empty;
    void  (::std::vector< ::Eigen::SparseMatrix< double, 0, int >, ::std::allocator< ::Eigen::SparseMatrix< double, 0, int > > >::*method_pointer_28e01515c462540baca3a900bca615d2)(::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > >::size_type ) = &::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > >::reserve;
    ::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > >::reference  (::std::vector< ::Eigen::SparseMatrix< double, 0, int >, ::std::allocator< ::Eigen::SparseMatrix< double, 0, int > > >::*method_pointer_c3915c92d0665651a16ed2a762ec5a6b)(::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > >::size_type ) = &::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > >::at;
    ::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > >::const_reference  (::std::vector< ::Eigen::SparseMatrix< double, 0, int >, ::std::allocator< ::Eigen::SparseMatrix< double, 0, int > > >::*method_pointer_1432fd1bef065b309e906b85467d9551)(::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > >::size_type ) const = &::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > >::at;
    ::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > >::reference  (::std::vector< ::Eigen::SparseMatrix< double, 0, int >, ::std::allocator< ::Eigen::SparseMatrix< double, 0, int > > >::*method_pointer_6f2a3ca73d705e2aa77d38d981e8cebe)() = &::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > >::front;
    ::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > >::const_reference  (::std::vector< ::Eigen::SparseMatrix< double, 0, int >, ::std::allocator< ::Eigen::SparseMatrix< double, 0, int > > >::*method_pointer_d2be1dd99bda5a75a4a40b124db8ce2c)() const = &::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > >::front;
    ::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > >::reference  (::std::vector< ::Eigen::SparseMatrix< double, 0, int >, ::std::allocator< ::Eigen::SparseMatrix< double, 0, int > > >::*method_pointer_4d73b2bf2dbc5c73913dfe117d4dffe2)() = &::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > >::back;
    ::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > >::const_reference  (::std::vector< ::Eigen::SparseMatrix< double, 0, int >, ::std::allocator< ::Eigen::SparseMatrix< double, 0, int > > >::*method_pointer_62f1fbc941af5ca7a32d7c9e8d6319fa)() const = &::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > >::back;
    class ::Eigen::SparseMatrix< double, 0, int > * (::std::vector< ::Eigen::SparseMatrix< double, 0, int >, ::std::allocator< ::Eigen::SparseMatrix< double, 0, int > > >::*method_pointer_503deb0bec905b38bdc22d59c89b9b4b)() = &::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > >::data;
    class ::Eigen::SparseMatrix< double, 0, int > const * (::std::vector< ::Eigen::SparseMatrix< double, 0, int >, ::std::allocator< ::Eigen::SparseMatrix< double, 0, int > > >::*method_pointer_c27118fb88025a34b02dd53bbc24e302)() const = &::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > >::data;
    void  (::std::vector< ::Eigen::SparseMatrix< double, 0, int >, ::std::allocator< ::Eigen::SparseMatrix< double, 0, int > > >::*method_pointer_8da35e5735735a5990e42f7be4ea2871)(::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > >::value_type const &) = &::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > >::push_back;
    void  (::std::vector< ::Eigen::SparseMatrix< double, 0, int >, ::std::allocator< ::Eigen::SparseMatrix< double, 0, int > > >::*method_pointer_403482bd0bb3599896b27012e646a35c)() = &::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > >::pop_back;
    void  (::std::vector< ::Eigen::SparseMatrix< double, 0, int >, ::std::allocator< ::Eigen::SparseMatrix< double, 0, int > > >::*method_pointer_8e7331809800556eb4a495564fd50f60)(class ::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > > &) = &::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > >::swap;
    void  (::std::vector< ::Eigen::SparseMatrix< double, 0, int >, ::std::allocator< ::Eigen::SparseMatrix< double, 0, int > > >::*method_pointer_4373ef766e825216867429ea9f6830aa)() = &::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > >::clear;
    boost::python::class_< class ::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > >, autowig::Held< class ::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > > >::Type > class_188cd52d4b3b5f5c8bcbc74a07d10e36("_Vector_188cd52d4b3b5f5c8bcbc74a07d10e36", "", boost::python::no_init);
    class_188cd52d4b3b5f5c8bcbc74a07d10e36.def(boost::python::init<  >(""));
    class_188cd52d4b3b5f5c8bcbc74a07d10e36.def(boost::python::init< class ::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > > const & >(""));
    class_188cd52d4b3b5f5c8bcbc74a07d10e36.def("assign", method_pointer_03a4e4c428fe5414b6acf8c3ff8aee9b, "");
    class_188cd52d4b3b5f5c8bcbc74a07d10e36.def("__len__", method_pointer_d81a1f34b9685691b549905c022a85b4, "");
    class_188cd52d4b3b5f5c8bcbc74a07d10e36.def("max_size", method_pointer_eb8c45f587575192ad59670e6315d126, "");
    class_188cd52d4b3b5f5c8bcbc74a07d10e36.def("capacity", method_pointer_c79b6f57a6db500b993190e687c1c510, "");
    class_188cd52d4b3b5f5c8bcbc74a07d10e36.def("empty", method_pointer_340e1d04df0e51a29e46ea7f40b7205a, "");
    class_188cd52d4b3b5f5c8bcbc74a07d10e36.def("reserve", method_pointer_28e01515c462540baca3a900bca615d2, "");
    class_188cd52d4b3b5f5c8bcbc74a07d10e36.def("at", method_pointer_c3915c92d0665651a16ed2a762ec5a6b, boost::python::return_internal_reference<>(), "");
    class_188cd52d4b3b5f5c8bcbc74a07d10e36.def("at", autowig::method_decorator_c3915c92d0665651a16ed2a762ec5a6b);
    class_188cd52d4b3b5f5c8bcbc74a07d10e36.def("at", method_pointer_1432fd1bef065b309e906b85467d9551, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_188cd52d4b3b5f5c8bcbc74a07d10e36.def("front", method_pointer_6f2a3ca73d705e2aa77d38d981e8cebe, boost::python::return_internal_reference<>(), "");
    class_188cd52d4b3b5f5c8bcbc74a07d10e36.def("front", autowig::method_decorator_6f2a3ca73d705e2aa77d38d981e8cebe);
    class_188cd52d4b3b5f5c8bcbc74a07d10e36.def("front", method_pointer_d2be1dd99bda5a75a4a40b124db8ce2c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_188cd52d4b3b5f5c8bcbc74a07d10e36.def("back", method_pointer_4d73b2bf2dbc5c73913dfe117d4dffe2, boost::python::return_internal_reference<>(), "");
    class_188cd52d4b3b5f5c8bcbc74a07d10e36.def("back", autowig::method_decorator_4d73b2bf2dbc5c73913dfe117d4dffe2);
    class_188cd52d4b3b5f5c8bcbc74a07d10e36.def("back", method_pointer_62f1fbc941af5ca7a32d7c9e8d6319fa, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_188cd52d4b3b5f5c8bcbc74a07d10e36.def("data", method_pointer_503deb0bec905b38bdc22d59c89b9b4b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_188cd52d4b3b5f5c8bcbc74a07d10e36.def("data", method_pointer_c27118fb88025a34b02dd53bbc24e302, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_188cd52d4b3b5f5c8bcbc74a07d10e36.def("push_back", method_pointer_8da35e5735735a5990e42f7be4ea2871, "");
    class_188cd52d4b3b5f5c8bcbc74a07d10e36.def("pop_back", method_pointer_403482bd0bb3599896b27012e646a35c, "");
    class_188cd52d4b3b5f5c8bcbc74a07d10e36.def("swap", method_pointer_8e7331809800556eb4a495564fd50f60, "");
    class_188cd52d4b3b5f5c8bcbc74a07d10e36.def("clear", method_pointer_4373ef766e825216867429ea9f6830aa, "");

    struct vector_188cd52d4b3b5f5c8bcbc74a07d10e36_from_python
    {
        vector_188cd52d4b3b5f5c8bcbc74a07d10e36_from_python()
        {
            boost::python::converter::registry::push_back(
                &convertible,
                &construct,
                boost::python::type_id< class ::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > > >());
        }

        static void* convertible(PyObject* obj_ptr)
        { return obj_ptr; }

        static void construct(PyObject* obj_ptr, boost::python::converter::rvalue_from_python_stage1_data* data)
        {
            boost::python::handle<> obj_iter(PyObject_GetIter(obj_ptr));
            void* storage = ((boost::python::converter::rvalue_from_python_storage< class ::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > > >*)data)->storage.bytes;
            new (storage) class ::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > >();
            data->convertible = storage;
            class ::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > >& result = *((class ::std::vector< class ::Eigen::SparseMatrix< double, 0, int >, class ::std::allocator< class ::Eigen::SparseMatrix< double, 0, int > > >*)storage);
            unsigned int i = 0;
            for(;; i++)
            {
                boost::python::handle<> py_elem_hdl(boost::python::allow_null(PyIter_Next(obj_iter.get())));
                if(PyErr_Occurred())
                { boost::python::throw_error_already_set(); }
                if(!py_elem_hdl.get())
                { break; }
                boost::python::object py_elem_obj(py_elem_hdl);
                result.push_back(boost::python::extract< class ::Eigen::SparseMatrix< double, 0, int >  >(py_elem_obj));
            }
        }
    };

    vector_188cd52d4b3b5f5c8bcbc74a07d10e36_from_python();
}