#include "_ieigen.h"


namespace autowig
{
}


void wrapper_b036397122165e73844d0603f6968fb1()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_a471bf37dc9c5fcab46a5544831feb8a)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_f5ad4ecd5f1a5238a4164e9dd33dfeab)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::colIndexByOuterInner;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_dcc0493a7f7d5f418abed3729e6b66de)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::coeff;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_7585aa6d1b8b5b7c9c81d5af26282daa)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::coeffByOuterInner;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_0827f3362c6b5300b70c91f73eb04085)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::operator();
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_57152b156e4c53f39a1d21cebd0d9fd1)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::coeff;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_b529859b8b6a5e71838b7dae5fab06b8)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::operator[];
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_ba8fbbdbabf95801b58a613dd475a7d3)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::operator();
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_442ac24560f55d5dbc7678fb4a31d012)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::x;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_785c9f5390fb5ce2bf0741a90f97f7e9)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::y;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_02bd335c2c28545da006d338dd46d390)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::z;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_34726919fa0b5e2cbc1e53fbfa73783b)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > > class_b036397122165e73844d0603f6968fb1("_DenseCoeffsBase_b036397122165e73844d0603f6968fb1", "", boost::python::no_init);
    class_b036397122165e73844d0603f6968fb1.def("row_index_by_outer_inner", method_pointer_a471bf37dc9c5fcab46a5544831feb8a, "");
    class_b036397122165e73844d0603f6968fb1.def("col_index_by_outer_inner", method_pointer_f5ad4ecd5f1a5238a4164e9dd33dfeab, "");
    class_b036397122165e73844d0603f6968fb1.def("coeff", method_pointer_dcc0493a7f7d5f418abed3729e6b66de, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b036397122165e73844d0603f6968fb1.def("coeff_by_outer_inner", method_pointer_7585aa6d1b8b5b7c9c81d5af26282daa, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b036397122165e73844d0603f6968fb1.def("__call__", method_pointer_0827f3362c6b5300b70c91f73eb04085, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b036397122165e73844d0603f6968fb1.def("coeff", method_pointer_57152b156e4c53f39a1d21cebd0d9fd1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b036397122165e73844d0603f6968fb1.def("__getitem__", method_pointer_b529859b8b6a5e71838b7dae5fab06b8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b036397122165e73844d0603f6968fb1.def("__call__", method_pointer_ba8fbbdbabf95801b58a613dd475a7d3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b036397122165e73844d0603f6968fb1.def("x", method_pointer_442ac24560f55d5dbc7678fb4a31d012, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b036397122165e73844d0603f6968fb1.def("y", method_pointer_785c9f5390fb5ce2bf0741a90f97f7e9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b036397122165e73844d0603f6968fb1.def("z", method_pointer_02bd335c2c28545da006d338dd46d390, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b036397122165e73844d0603f6968fb1.def("w", method_pointer_34726919fa0b5e2cbc1e53fbfa73783b, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > >();
    }

}