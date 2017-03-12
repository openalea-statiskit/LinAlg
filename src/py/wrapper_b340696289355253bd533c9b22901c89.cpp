#include "_linalg.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 > const volatile * get_pointer<class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 > const volatile >(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_b340696289355253bd533c9b22901c89()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    ::Eigen::Index  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_a38377aa7f245f74abef2d50b81d4057)(::Eigen::Index , ::Eigen::Index ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::rowIndexByOuterInner;
    ::Eigen::Index  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_059a5dcbdd0d57a2b038a83ab0b9c0b4)(::Eigen::Index , ::Eigen::Index ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::colIndexByOuterInner;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::CoeffReturnType  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_8d4765d23dc95fdda23248d5e270b510)(::Eigen::Index , ::Eigen::Index ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::coeff;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::CoeffReturnType  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_0c56783cde425ca48c23a16c50687d61)(::Eigen::Index , ::Eigen::Index ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::coeffByOuterInner;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::CoeffReturnType  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_84fb251bb1dc5737a716fde04ed8a277)(::Eigen::Index ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::coeff;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::CoeffReturnType  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_ac43834562905d6e84eb805fae092e43)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::x;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::CoeffReturnType  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_bcff0a73ee455bec97b7a375d9d86beb)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::y;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::CoeffReturnType  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_566ad7e052a05dbd89d9dde78860cd4f)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::z;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::CoeffReturnType  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_e7f387015dc75349aef774026def402a)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >, autowig::Held< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 > >::Type, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > > > class_b340696289355253bd533c9b22901c89("_DenseCoeffsBase_b340696289355253bd533c9b22901c89", "", boost::python::no_init);
    class_b340696289355253bd533c9b22901c89.def("row_index_by_outer_inner", method_pointer_a38377aa7f245f74abef2d50b81d4057, "");
    class_b340696289355253bd533c9b22901c89.def("col_index_by_outer_inner", method_pointer_059a5dcbdd0d57a2b038a83ab0b9c0b4, "");
    class_b340696289355253bd533c9b22901c89.def("coeff", method_pointer_8d4765d23dc95fdda23248d5e270b510, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b340696289355253bd533c9b22901c89.def("coeff_by_outer_inner", method_pointer_0c56783cde425ca48c23a16c50687d61, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b340696289355253bd533c9b22901c89.def("coeff", method_pointer_84fb251bb1dc5737a716fde04ed8a277, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b340696289355253bd533c9b22901c89.def("x", method_pointer_ac43834562905d6e84eb805fae092e43, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b340696289355253bd533c9b22901c89.def("y", method_pointer_bcff0a73ee455bec97b7a375d9d86beb, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b340696289355253bd533c9b22901c89.def("z", method_pointer_566ad7e052a05dbd89d9dde78860cd4f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b340696289355253bd533c9b22901c89.def("w", method_pointer_e7f387015dc75349aef774026def402a, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(autowig::Held< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 > >::Type, autowig::Held< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 > >::Type, boost::python::objects::make_ptr_instance< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >, boost::python::objects::pointer_holder< autowig::Held< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 > >::Type, class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 > > > >();
    }

}