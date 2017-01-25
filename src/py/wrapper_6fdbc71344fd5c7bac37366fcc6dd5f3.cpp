#include "_ieigen.h"


namespace autowig
{
}


void wrapper_6fdbc71344fd5c7bac37366fcc6dd5f3()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_bcdf127e753e5402a1c6e87eb55d2af3)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_0966d13f0e1f53099b32201adef7cefe)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 0 >::colIndexByOuterInner;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_30b8957328d8591c902c26821ff6ad45)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 0 >::coeff;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_c667db3a30395e41acc2742f55977940)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 0 >::coeffByOuterInner;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_c3402b41010253c1a5a9e22691a8c374)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 0 >::operator();
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_1510f318f1dd5191b6a19bd7696de146)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 0 >::coeff;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_05c422ec6d9f565cabff9d105727f13e)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 0 >::operator[];
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_bce15a91a74552d0b0a69d2a8d8471fb)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 0 >::operator();
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_94c8a6d2ef1a5331a2689cc567c17a1a)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 0 >::x;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_f3f377ddc0a1500e927b9a38cb99fa5f)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 0 >::y;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_ee675005fbe15cf890c69f98a74e4caa)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 0 >::z;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_39231529db2c5656a55d47e243eac604)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 0 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > > > > class_6fdbc71344fd5c7bac37366fcc6dd5f3("_DenseCoeffsBase_6fdbc71344fd5c7bac37366fcc6dd5f3", "", boost::python::no_init);
    class_6fdbc71344fd5c7bac37366fcc6dd5f3.def("row_index_by_outer_inner", method_pointer_bcdf127e753e5402a1c6e87eb55d2af3, "");
    class_6fdbc71344fd5c7bac37366fcc6dd5f3.def("col_index_by_outer_inner", method_pointer_0966d13f0e1f53099b32201adef7cefe, "");
    class_6fdbc71344fd5c7bac37366fcc6dd5f3.def("coeff", method_pointer_30b8957328d8591c902c26821ff6ad45, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6fdbc71344fd5c7bac37366fcc6dd5f3.def("coeff_by_outer_inner", method_pointer_c667db3a30395e41acc2742f55977940, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6fdbc71344fd5c7bac37366fcc6dd5f3.def("__call__", method_pointer_c3402b41010253c1a5a9e22691a8c374, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6fdbc71344fd5c7bac37366fcc6dd5f3.def("coeff", method_pointer_1510f318f1dd5191b6a19bd7696de146, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6fdbc71344fd5c7bac37366fcc6dd5f3.def("__getitem__", method_pointer_05c422ec6d9f565cabff9d105727f13e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6fdbc71344fd5c7bac37366fcc6dd5f3.def("__call__", method_pointer_bce15a91a74552d0b0a69d2a8d8471fb, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6fdbc71344fd5c7bac37366fcc6dd5f3.def("x", method_pointer_94c8a6d2ef1a5331a2689cc567c17a1a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6fdbc71344fd5c7bac37366fcc6dd5f3.def("y", method_pointer_f3f377ddc0a1500e927b9a38cb99fa5f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6fdbc71344fd5c7bac37366fcc6dd5f3.def("z", method_pointer_ee675005fbe15cf890c69f98a74e4caa, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6fdbc71344fd5c7bac37366fcc6dd5f3.def("w", method_pointer_39231529db2c5656a55d47e243eac604, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > > > >();
    }

}