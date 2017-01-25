#include "_ieigen.h"


namespace autowig
{
}


void wrapper_b340696289355253bd533c9b22901c89()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_a38377aa7f245f74abef2d50b81d4057)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_059a5dcbdd0d57a2b038a83ab0b9c0b4)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::colIndexByOuterInner;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_8d4765d23dc95fdda23248d5e270b510)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::coeff;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_0c56783cde425ca48c23a16c50687d61)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::coeffByOuterInner;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_c1f47374ea825c58b79e0556cee6f228)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::operator();
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_84fb251bb1dc5737a716fde04ed8a277)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::coeff;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_848c3841fc3d5508804412a8daec3790)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::operator[];
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_b7ba169097db5d998ffc731ff6a7b9cc)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::operator();
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_ac43834562905d6e84eb805fae092e43)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::x;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_bcff0a73ee455bec97b7a375d9d86beb)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::y;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_566ad7e052a05dbd89d9dde78860cd4f)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::z;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_e7f387015dc75349aef774026def402a)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > > > class_b340696289355253bd533c9b22901c89("_DenseCoeffsBase_b340696289355253bd533c9b22901c89", "", boost::python::no_init);
    class_b340696289355253bd533c9b22901c89.def("row_index_by_outer_inner", method_pointer_a38377aa7f245f74abef2d50b81d4057, "");
    class_b340696289355253bd533c9b22901c89.def("col_index_by_outer_inner", method_pointer_059a5dcbdd0d57a2b038a83ab0b9c0b4, "");
    class_b340696289355253bd533c9b22901c89.def("coeff", method_pointer_8d4765d23dc95fdda23248d5e270b510, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b340696289355253bd533c9b22901c89.def("coeff_by_outer_inner", method_pointer_0c56783cde425ca48c23a16c50687d61, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b340696289355253bd533c9b22901c89.def("__call__", method_pointer_c1f47374ea825c58b79e0556cee6f228, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b340696289355253bd533c9b22901c89.def("coeff", method_pointer_84fb251bb1dc5737a716fde04ed8a277, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b340696289355253bd533c9b22901c89.def("__getitem__", method_pointer_848c3841fc3d5508804412a8daec3790, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b340696289355253bd533c9b22901c89.def("__call__", method_pointer_b7ba169097db5d998ffc731ff6a7b9cc, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b340696289355253bd533c9b22901c89.def("x", method_pointer_ac43834562905d6e84eb805fae092e43, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b340696289355253bd533c9b22901c89.def("y", method_pointer_bcff0a73ee455bec97b7a375d9d86beb, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b340696289355253bd533c9b22901c89.def("z", method_pointer_566ad7e052a05dbd89d9dde78860cd4f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b340696289355253bd533c9b22901c89.def("w", method_pointer_e7f387015dc75349aef774026def402a, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > > >();
    }

}