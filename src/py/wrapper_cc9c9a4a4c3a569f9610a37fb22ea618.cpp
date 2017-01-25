#include "_ieigen.h"


namespace autowig
{
}


void wrapper_cc9c9a4a4c3a569f9610a37fb22ea618()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_078a2cf803905cabaccc8820d2ad94ee)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_b402652c772f561e87e4e782046fc377)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 0 >::colIndexByOuterInner;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_4a84f59633825f27b63abd9a7b1ad9c0)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 0 >::coeff;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_7233ab7ac95f578f86daba962f710e83)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 0 >::coeffByOuterInner;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_6fff4a25ed0a59e197284613162467d4)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 0 >::operator();
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_93e557bbad73544283903144582b7bf9)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 0 >::coeff;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_1cf5eaac16eb51409078e9129bb610b9)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 0 >::operator[];
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_d1f8f7050fd052259c5e3f1de82bb315)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 0 >::operator();
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_a659b87996d159159b2512871cd457ca)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 0 >::x;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_dce7a9a0f91c529e8faaa64bbd2c58e3)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 0 >::y;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_5d48a4a482fa5cd1a7dc4197397cd2fd)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 0 >::z;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_27fc7c013e32555a8afc5ac5a3409044)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 0 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > > > > class_cc9c9a4a4c3a569f9610a37fb22ea618("_DenseCoeffsBase_cc9c9a4a4c3a569f9610a37fb22ea618", "", boost::python::no_init);
    class_cc9c9a4a4c3a569f9610a37fb22ea618.def("row_index_by_outer_inner", method_pointer_078a2cf803905cabaccc8820d2ad94ee, "");
    class_cc9c9a4a4c3a569f9610a37fb22ea618.def("col_index_by_outer_inner", method_pointer_b402652c772f561e87e4e782046fc377, "");
    class_cc9c9a4a4c3a569f9610a37fb22ea618.def("coeff", method_pointer_4a84f59633825f27b63abd9a7b1ad9c0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_cc9c9a4a4c3a569f9610a37fb22ea618.def("coeff_by_outer_inner", method_pointer_7233ab7ac95f578f86daba962f710e83, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_cc9c9a4a4c3a569f9610a37fb22ea618.def("__call__", method_pointer_6fff4a25ed0a59e197284613162467d4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_cc9c9a4a4c3a569f9610a37fb22ea618.def("coeff", method_pointer_93e557bbad73544283903144582b7bf9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_cc9c9a4a4c3a569f9610a37fb22ea618.def("__getitem__", method_pointer_1cf5eaac16eb51409078e9129bb610b9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_cc9c9a4a4c3a569f9610a37fb22ea618.def("__call__", method_pointer_d1f8f7050fd052259c5e3f1de82bb315, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_cc9c9a4a4c3a569f9610a37fb22ea618.def("x", method_pointer_a659b87996d159159b2512871cd457ca, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_cc9c9a4a4c3a569f9610a37fb22ea618.def("y", method_pointer_dce7a9a0f91c529e8faaa64bbd2c58e3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_cc9c9a4a4c3a569f9610a37fb22ea618.def("z", method_pointer_5d48a4a482fa5cd1a7dc4197397cd2fd, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_cc9c9a4a4c3a569f9610a37fb22ea618.def("w", method_pointer_27fc7c013e32555a8afc5ac5a3409044, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > > > >();
    }

}