#include "_linalg.h"



namespace autowig
{

    void method_decorator_f3172c81108752b9b23bcbfcab6639b9(class ::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > > & instance, ::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::size_type  param_in_0, ::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::reference  param_out)     { instance.at(param_in_0) = param_out; }
    void method_decorator_ed10ab7ff0a25fa1ad6d0f552580238f(class ::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > > & instance, ::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::reference  param_out)     { instance.front() = param_out; }
    void method_decorator_a64aa85710975a0789e9d7fe784c482c(class ::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > > & instance, ::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::reference  param_out)     { instance.back() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > > const volatile * get_pointer<class ::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > > const volatile >(class ::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_f220d0a539fe53a68f377d42b9badcdc()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    void  (::std::vector< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, ::std::allocator< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::*method_pointer_7f6979e72a785b6d993c49b1fd3ff471)(::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::size_type , ::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::value_type const &) = &::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::assign;
    ::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::size_type  (::std::vector< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, ::std::allocator< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::*method_pointer_245b1d5abf6d56d988361ccf7657362b)() const = &::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::size;
    ::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::size_type  (::std::vector< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, ::std::allocator< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::*method_pointer_a41b6b9823e958a2971a2bdceb8aec97)() const = &::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::max_size;
    void  (::std::vector< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, ::std::allocator< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::*method_pointer_0d4b0085669c560cbb119e1494b0add3)(::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::size_type ) = &::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::resize;
    void  (::std::vector< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, ::std::allocator< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::*method_pointer_3c7aca94fa715f6ba68d54a7859c214e)(::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::size_type , ::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::value_type const &) = &::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::resize;
    void  (::std::vector< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, ::std::allocator< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::*method_pointer_cd33a124c9dd5b9ea3c8863ab8f7aef0)() = &::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::shrink_to_fit;
    ::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::size_type  (::std::vector< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, ::std::allocator< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::*method_pointer_ad3e240590485e068d099d76eebaf813)() const = &::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::capacity;
    bool  (::std::vector< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, ::std::allocator< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::*method_pointer_db7e71650eae5a8d810b107e0728bcfc)() const = &::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::empty;
    void  (::std::vector< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, ::std::allocator< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::*method_pointer_17095ef7ab9b5b0ba26127ac4fcea551)(::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::size_type ) = &::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::reserve;
    ::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::reference  (::std::vector< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, ::std::allocator< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::*method_pointer_f3172c81108752b9b23bcbfcab6639b9)(::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::size_type ) = &::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::at;
    ::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::const_reference  (::std::vector< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, ::std::allocator< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::*method_pointer_4c32a6695284583ea52ed627fe89d5d7)(::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::size_type ) const = &::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::at;
    ::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::reference  (::std::vector< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, ::std::allocator< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::*method_pointer_ed10ab7ff0a25fa1ad6d0f552580238f)() = &::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::front;
    ::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::const_reference  (::std::vector< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, ::std::allocator< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::*method_pointer_5a1fa2ead848521bbfc3f086e3d55575)() const = &::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::front;
    ::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::reference  (::std::vector< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, ::std::allocator< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::*method_pointer_a64aa85710975a0789e9d7fe784c482c)() = &::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::back;
    ::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::const_reference  (::std::vector< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, ::std::allocator< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::*method_pointer_422ee48b71555324a45e225b3c91e164)() const = &::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::back;
    class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > * (::std::vector< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, ::std::allocator< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::*method_pointer_112ce48c845c5f53900bbc851f77e357)() = &::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::data;
    class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > const * (::std::vector< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, ::std::allocator< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::*method_pointer_7a8b445f22065958bf4aa0f79d47d165)() const = &::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::data;
    void  (::std::vector< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, ::std::allocator< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::*method_pointer_a12a3024737a556ca89f44a0fe409a85)(::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::value_type const &) = &::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::push_back;
    void  (::std::vector< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, ::std::allocator< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::*method_pointer_a86d116051f45922852599680989edcb)() = &::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::pop_back;
    void  (::std::vector< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, ::std::allocator< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::*method_pointer_a6b1d5d6acc25d8985c6dc5f44c55c29)(class ::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > > &) = &::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::swap;
    void  (::std::vector< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, ::std::allocator< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::*method_pointer_877b73ca4e565eb494a2cff817fd76c7)() = &::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::clear;
    boost::python::class_< class ::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >, autowig::Held< class ::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > > >::Type > class_f220d0a539fe53a68f377d42b9badcdc("_Vector_f220d0a539fe53a68f377d42b9badcdc", "", boost::python::no_init);
    class_f220d0a539fe53a68f377d42b9badcdc.def(boost::python::init<  >(""));
    class_f220d0a539fe53a68f377d42b9badcdc.def(boost::python::init< ::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::allocator_type const & >(""));
    class_f220d0a539fe53a68f377d42b9badcdc.def(boost::python::init< ::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::size_type , ::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::allocator_type const & >(""));
    class_f220d0a539fe53a68f377d42b9badcdc.def(boost::python::init< ::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::size_type , ::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::value_type const &, ::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::allocator_type const & >(""));
    class_f220d0a539fe53a68f377d42b9badcdc.def(boost::python::init< class ::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > > const & >(""));
    class_f220d0a539fe53a68f377d42b9badcdc.def(boost::python::init< class ::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > > const &, ::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::allocator_type const & >(""));
    class_f220d0a539fe53a68f377d42b9badcdc.def("assign", method_pointer_7f6979e72a785b6d993c49b1fd3ff471, "");
    class_f220d0a539fe53a68f377d42b9badcdc.def("__len__", method_pointer_245b1d5abf6d56d988361ccf7657362b, "");
    class_f220d0a539fe53a68f377d42b9badcdc.def("max_size", method_pointer_a41b6b9823e958a2971a2bdceb8aec97, "");
    class_f220d0a539fe53a68f377d42b9badcdc.def("resize", method_pointer_0d4b0085669c560cbb119e1494b0add3, "");
    class_f220d0a539fe53a68f377d42b9badcdc.def("resize", method_pointer_3c7aca94fa715f6ba68d54a7859c214e, "");
    class_f220d0a539fe53a68f377d42b9badcdc.def("shrink_to_fit", method_pointer_cd33a124c9dd5b9ea3c8863ab8f7aef0, "");
    class_f220d0a539fe53a68f377d42b9badcdc.def("capacity", method_pointer_ad3e240590485e068d099d76eebaf813, "");
    class_f220d0a539fe53a68f377d42b9badcdc.def("empty", method_pointer_db7e71650eae5a8d810b107e0728bcfc, "");
    class_f220d0a539fe53a68f377d42b9badcdc.def("reserve", method_pointer_17095ef7ab9b5b0ba26127ac4fcea551, "");
    class_f220d0a539fe53a68f377d42b9badcdc.def("at", method_pointer_f3172c81108752b9b23bcbfcab6639b9, boost::python::return_internal_reference<>(), "");
    class_f220d0a539fe53a68f377d42b9badcdc.def("at", autowig::method_decorator_f3172c81108752b9b23bcbfcab6639b9);
    class_f220d0a539fe53a68f377d42b9badcdc.def("at", method_pointer_4c32a6695284583ea52ed627fe89d5d7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f220d0a539fe53a68f377d42b9badcdc.def("front", method_pointer_ed10ab7ff0a25fa1ad6d0f552580238f, boost::python::return_internal_reference<>(), "");
    class_f220d0a539fe53a68f377d42b9badcdc.def("front", autowig::method_decorator_ed10ab7ff0a25fa1ad6d0f552580238f);
    class_f220d0a539fe53a68f377d42b9badcdc.def("front", method_pointer_5a1fa2ead848521bbfc3f086e3d55575, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f220d0a539fe53a68f377d42b9badcdc.def("back", method_pointer_a64aa85710975a0789e9d7fe784c482c, boost::python::return_internal_reference<>(), "");
    class_f220d0a539fe53a68f377d42b9badcdc.def("back", autowig::method_decorator_a64aa85710975a0789e9d7fe784c482c);
    class_f220d0a539fe53a68f377d42b9badcdc.def("back", method_pointer_422ee48b71555324a45e225b3c91e164, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f220d0a539fe53a68f377d42b9badcdc.def("data", method_pointer_112ce48c845c5f53900bbc851f77e357, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f220d0a539fe53a68f377d42b9badcdc.def("data", method_pointer_7a8b445f22065958bf4aa0f79d47d165, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f220d0a539fe53a68f377d42b9badcdc.def("push_back", method_pointer_a12a3024737a556ca89f44a0fe409a85, "");
    class_f220d0a539fe53a68f377d42b9badcdc.def("pop_back", method_pointer_a86d116051f45922852599680989edcb, "");
    class_f220d0a539fe53a68f377d42b9badcdc.def("swap", method_pointer_a6b1d5d6acc25d8985c6dc5f44c55c29, "");
    class_f220d0a539fe53a68f377d42b9badcdc.def("clear", method_pointer_877b73ca4e565eb494a2cff817fd76c7, "");

    struct vector_f220d0a539fe53a68f377d42b9badcdc_from_python
    {
        vector_f220d0a539fe53a68f377d42b9badcdc_from_python()
        {
            boost::python::converter::registry::push_back(
                &convertible,
                &construct,
                boost::python::type_id< class ::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > > >());
        }

        static void* convertible(PyObject* obj_ptr)
        { return obj_ptr; }

        static void construct(PyObject* obj_ptr, boost::python::converter::rvalue_from_python_stage1_data* data)
        {
            boost::python::handle<> obj_iter(PyObject_GetIter(obj_ptr));
            void* storage = ((boost::python::converter::rvalue_from_python_storage< class ::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > > >*)data)->storage.bytes;
            new (storage) class ::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >();
            data->convertible = storage;
            class ::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >& result = *((class ::std::vector< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >*)storage);
            unsigned int i = 0;
            for(;; i++)
            {
                boost::python::handle<> py_elem_hdl(boost::python::allow_null(PyIter_Next(obj_iter.get())));
                if(PyErr_Occurred())
                { boost::python::throw_error_already_set(); }
                if(!py_elem_hdl.get())
                { break; }
                boost::python::object py_elem_obj(py_elem_hdl);
                result.push_back(boost::python::extract< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >  >(py_elem_obj));
            }
        }
    };

    vector_f220d0a539fe53a68f377d42b9badcdc_from_python();
}