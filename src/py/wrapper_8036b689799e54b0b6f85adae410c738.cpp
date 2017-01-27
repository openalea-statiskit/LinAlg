#include "_ieigen.h"


namespace autowig
{
}


void wrapper_8036b689799e54b0b6f85adae410c738()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_8a43e19171db5d34be8b363489e9267d)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_703f71a4778d52eb90289cf04eb94ccc)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 0 >::colIndexByOuterInner;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_b7797d18ab3a5066926bd37c423d883b)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 0 >::coeff;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_4bcce3bd83a259ddbedfbe7745a100d7)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 0 >::coeffByOuterInner;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_49cde603715f597398bfa3545c518b5c)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 0 >::operator();
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_11f8b9e67b86595e8dd5330904d6e023)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 0 >::coeff;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_930f52c1af4b50d28903cc776cf64884)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 0 >::operator[];
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_be09ee01f83f5664adec0bcde83c551f)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 0 >::operator();
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_414aef27f3155d4ca63418eaea84629c)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 0 >::x;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_b46d775a78655a478b173af334fc79b3)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 0 >::y;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > > > > class_8036b689799e54b0b6f85adae410c738("_DenseCoeffsBase_8036b689799e54b0b6f85adae410c738", "", boost::python::no_init);
    class_8036b689799e54b0b6f85adae410c738.def("row_index_by_outer_inner", method_pointer_8a43e19171db5d34be8b363489e9267d, "");
    class_8036b689799e54b0b6f85adae410c738.def("col_index_by_outer_inner", method_pointer_703f71a4778d52eb90289cf04eb94ccc, "");
    class_8036b689799e54b0b6f85adae410c738.def("coeff", method_pointer_b7797d18ab3a5066926bd37c423d883b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8036b689799e54b0b6f85adae410c738.def("coeff_by_outer_inner", method_pointer_4bcce3bd83a259ddbedfbe7745a100d7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8036b689799e54b0b6f85adae410c738.def("__call__", method_pointer_49cde603715f597398bfa3545c518b5c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8036b689799e54b0b6f85adae410c738.def("coeff", method_pointer_11f8b9e67b86595e8dd5330904d6e023, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8036b689799e54b0b6f85adae410c738.def("__getitem__", method_pointer_930f52c1af4b50d28903cc776cf64884, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8036b689799e54b0b6f85adae410c738.def("__call__", method_pointer_be09ee01f83f5664adec0bcde83c551f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8036b689799e54b0b6f85adae410c738.def("x", method_pointer_414aef27f3155d4ca63418eaea84629c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8036b689799e54b0b6f85adae410c738.def("y", method_pointer_b46d775a78655a478b173af334fc79b3, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > > > >();
    }

}