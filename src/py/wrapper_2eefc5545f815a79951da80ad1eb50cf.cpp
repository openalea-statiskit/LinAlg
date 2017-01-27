#include "_ieigen.h"


namespace autowig
{
}


void wrapper_2eefc5545f815a79951da80ad1eb50cf()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_2c6122c168a656bf94504da0f445d0a0)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_c8382be39ba050989bbfd5255dd7104b)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 0 >::colIndexByOuterInner;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_ee013203e7a75976bcbd5a4a7a4011ff)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 0 >::coeff;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_d04afbe640fa51389f15ff530b78ac71)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 0 >::coeffByOuterInner;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_3aca38e61fb052eb855f6f190df423ad)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 0 >::operator();
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_0839c13c1db05a50ae2b12718d44e5a8)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 0 >::coeff;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_9e0a23aadb1d53f98827bec42a53d200)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 0 >::operator[];
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_abd769e5110a57efb9024de647311daa)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 0 >::operator();
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_65791f1628fb5d41a536cb0c69800e55)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 0 >::x;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_d115beced56755b5ba622eab016592a2)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 0 >::y;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_84db5f4d4ec55bcaa446334f674ffbff)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 0 >::z;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > > > > class_2eefc5545f815a79951da80ad1eb50cf("_DenseCoeffsBase_2eefc5545f815a79951da80ad1eb50cf", "", boost::python::no_init);
    class_2eefc5545f815a79951da80ad1eb50cf.def("row_index_by_outer_inner", method_pointer_2c6122c168a656bf94504da0f445d0a0, "");
    class_2eefc5545f815a79951da80ad1eb50cf.def("col_index_by_outer_inner", method_pointer_c8382be39ba050989bbfd5255dd7104b, "");
    class_2eefc5545f815a79951da80ad1eb50cf.def("coeff", method_pointer_ee013203e7a75976bcbd5a4a7a4011ff, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2eefc5545f815a79951da80ad1eb50cf.def("coeff_by_outer_inner", method_pointer_d04afbe640fa51389f15ff530b78ac71, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2eefc5545f815a79951da80ad1eb50cf.def("__call__", method_pointer_3aca38e61fb052eb855f6f190df423ad, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2eefc5545f815a79951da80ad1eb50cf.def("coeff", method_pointer_0839c13c1db05a50ae2b12718d44e5a8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2eefc5545f815a79951da80ad1eb50cf.def("__getitem__", method_pointer_9e0a23aadb1d53f98827bec42a53d200, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2eefc5545f815a79951da80ad1eb50cf.def("__call__", method_pointer_abd769e5110a57efb9024de647311daa, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2eefc5545f815a79951da80ad1eb50cf.def("x", method_pointer_65791f1628fb5d41a536cb0c69800e55, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2eefc5545f815a79951da80ad1eb50cf.def("y", method_pointer_d115beced56755b5ba622eab016592a2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2eefc5545f815a79951da80ad1eb50cf.def("z", method_pointer_84db5f4d4ec55bcaa446334f674ffbff, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > > > >();
    }

}