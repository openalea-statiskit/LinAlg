#include "_ieigen.h"


namespace autowig
{
}


void wrapper_d81791f038845ebba4c3c4192a9e0fcd()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_517be530c4d35aabb3f5a98afced5178)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_1f4293e2cb8f5a25a897516e934dd959)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 0 >::colIndexByOuterInner;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_d0e90e77d32a5f84854589317f81beea)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 0 >::coeff;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_d5f57c86dddc5f6599288ca36ae5562d)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 0 >::coeffByOuterInner;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_8107400ee01257aeb5f4e051f70b5b03)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 0 >::operator();
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_49af50ff5711584d9192c12a858b573d)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 0 >::coeff;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_13a23635404f54baa16bc8cd49444179)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 0 >::operator[];
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_01a97b65e62e51bc9798b0612fd5f496)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 0 >::operator();
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_ea0b98817837593086c1c311a9ab0258)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 0 >::x;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_79a8163a029455afbc084b081c6f6ba3)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 0 >::y;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_9414c35f65b859eea937861f46bcd059)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 0 >::z;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_c7dc45055c5e542390728684b9233df3)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 0 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > > > > class_d81791f038845ebba4c3c4192a9e0fcd("_DenseCoeffsBase_d81791f038845ebba4c3c4192a9e0fcd", "", boost::python::no_init);
    class_d81791f038845ebba4c3c4192a9e0fcd.def("row_index_by_outer_inner", method_pointer_517be530c4d35aabb3f5a98afced5178, "");
    class_d81791f038845ebba4c3c4192a9e0fcd.def("col_index_by_outer_inner", method_pointer_1f4293e2cb8f5a25a897516e934dd959, "");
    class_d81791f038845ebba4c3c4192a9e0fcd.def("coeff", method_pointer_d0e90e77d32a5f84854589317f81beea, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d81791f038845ebba4c3c4192a9e0fcd.def("coeff_by_outer_inner", method_pointer_d5f57c86dddc5f6599288ca36ae5562d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d81791f038845ebba4c3c4192a9e0fcd.def("__call__", method_pointer_8107400ee01257aeb5f4e051f70b5b03, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d81791f038845ebba4c3c4192a9e0fcd.def("coeff", method_pointer_49af50ff5711584d9192c12a858b573d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d81791f038845ebba4c3c4192a9e0fcd.def("__getitem__", method_pointer_13a23635404f54baa16bc8cd49444179, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d81791f038845ebba4c3c4192a9e0fcd.def("__call__", method_pointer_01a97b65e62e51bc9798b0612fd5f496, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d81791f038845ebba4c3c4192a9e0fcd.def("x", method_pointer_ea0b98817837593086c1c311a9ab0258, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d81791f038845ebba4c3c4192a9e0fcd.def("y", method_pointer_79a8163a029455afbc084b081c6f6ba3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d81791f038845ebba4c3c4192a9e0fcd.def("z", method_pointer_9414c35f65b859eea937861f46bcd059, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d81791f038845ebba4c3c4192a9e0fcd.def("w", method_pointer_c7dc45055c5e542390728684b9233df3, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > > > >();
    }

}