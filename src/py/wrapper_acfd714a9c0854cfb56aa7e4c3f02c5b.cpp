#include "_linalg.h"


namespace autowig
{
}


void wrapper_acfd714a9c0854cfb56aa7e4c3f02c5b()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_abdb55eb7a7e58efa2c22856be348ad7)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_7f1df0d07d9655efad838e25045656fd)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::colIndexByOuterInner;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_a2e05f34c3d656a99e6287a07e490751)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::coeff;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_9d6293f6c2f350fb87fd83412732a6b5)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::coeffByOuterInner;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_1acc34b95eb356168dd5666356f113ca)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::operator();
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_cf9ae89f5c675695ab83a8b359e82a9a)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::coeff;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_935b01b838d7575e87036e75cbe2cf65)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::operator[];
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_276bb077805e5f53b2bbe230c514cd2d)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::operator();
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_7cf441bca0ec558d8d0ca273ae4d2335)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::x;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_a252e18613ce52f0af2dc157a0f3194b)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::y;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_4a25e7c718915ecaafc19b0ff6c56404)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::z;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_d504b4534126599aa72eeaffbe5d711b)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > > > class_acfd714a9c0854cfb56aa7e4c3f02c5b("_DenseCoeffsBase_acfd714a9c0854cfb56aa7e4c3f02c5b", "", boost::python::no_init);
    class_acfd714a9c0854cfb56aa7e4c3f02c5b.def("row_index_by_outer_inner", method_pointer_abdb55eb7a7e58efa2c22856be348ad7, "");
    class_acfd714a9c0854cfb56aa7e4c3f02c5b.def("col_index_by_outer_inner", method_pointer_7f1df0d07d9655efad838e25045656fd, "");
    class_acfd714a9c0854cfb56aa7e4c3f02c5b.def("coeff", method_pointer_a2e05f34c3d656a99e6287a07e490751, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_acfd714a9c0854cfb56aa7e4c3f02c5b.def("coeff_by_outer_inner", method_pointer_9d6293f6c2f350fb87fd83412732a6b5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_acfd714a9c0854cfb56aa7e4c3f02c5b.def("__call__", method_pointer_1acc34b95eb356168dd5666356f113ca, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_acfd714a9c0854cfb56aa7e4c3f02c5b.def("coeff", method_pointer_cf9ae89f5c675695ab83a8b359e82a9a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_acfd714a9c0854cfb56aa7e4c3f02c5b.def("__getitem__", method_pointer_935b01b838d7575e87036e75cbe2cf65, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_acfd714a9c0854cfb56aa7e4c3f02c5b.def("__call__", method_pointer_276bb077805e5f53b2bbe230c514cd2d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_acfd714a9c0854cfb56aa7e4c3f02c5b.def("x", method_pointer_7cf441bca0ec558d8d0ca273ae4d2335, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_acfd714a9c0854cfb56aa7e4c3f02c5b.def("y", method_pointer_a252e18613ce52f0af2dc157a0f3194b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_acfd714a9c0854cfb56aa7e4c3f02c5b.def("z", method_pointer_4a25e7c718915ecaafc19b0ff6c56404, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_acfd714a9c0854cfb56aa7e4c3f02c5b.def("w", method_pointer_d504b4534126599aa72eeaffbe5d711b, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > > >();
    }

}