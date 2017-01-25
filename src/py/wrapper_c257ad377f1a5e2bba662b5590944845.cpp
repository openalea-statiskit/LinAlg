#include "_ieigen.h"


namespace autowig
{
}


void wrapper_c257ad377f1a5e2bba662b5590944845()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_b9547e66fce75d3aafa76e91861ec157)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_c6fa300582c05eaa82091e84d1b887aa)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 0 >::colIndexByOuterInner;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_627fa77a06815989a74ee330055ba4a4)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 0 >::coeff;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_62b0ad120cd35f9ba64cdda1a3f13d0e)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 0 >::coeffByOuterInner;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_5e23d4627cb95f9fafbed96242128598)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 0 >::operator();
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_88735e33ef955b9fba4d046518d23ca3)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 0 >::coeff;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_96c2cc6b015357d28ad0d928a8525710)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 0 >::operator[];
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_e8d6070aee8259eaa51048afa1a9d244)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 0 >::operator();
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_938b6937e92c5887adcc3038efdbe989)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 0 >::x;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_9fcb6155d85454be85b3e5ee8d7ebf1d)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 0 >::y;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_d21cf99d19ae57f3b8c676d8f2954bd6)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 0 >::z;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_1cf0e5da53ad50618ac67a3bebe820f8)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 0 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > > > > class_c257ad377f1a5e2bba662b5590944845("_DenseCoeffsBase_c257ad377f1a5e2bba662b5590944845", "", boost::python::no_init);
    class_c257ad377f1a5e2bba662b5590944845.def("row_index_by_outer_inner", method_pointer_b9547e66fce75d3aafa76e91861ec157, "");
    class_c257ad377f1a5e2bba662b5590944845.def("col_index_by_outer_inner", method_pointer_c6fa300582c05eaa82091e84d1b887aa, "");
    class_c257ad377f1a5e2bba662b5590944845.def("coeff", method_pointer_627fa77a06815989a74ee330055ba4a4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c257ad377f1a5e2bba662b5590944845.def("coeff_by_outer_inner", method_pointer_62b0ad120cd35f9ba64cdda1a3f13d0e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c257ad377f1a5e2bba662b5590944845.def("__call__", method_pointer_5e23d4627cb95f9fafbed96242128598, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c257ad377f1a5e2bba662b5590944845.def("coeff", method_pointer_88735e33ef955b9fba4d046518d23ca3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c257ad377f1a5e2bba662b5590944845.def("__getitem__", method_pointer_96c2cc6b015357d28ad0d928a8525710, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c257ad377f1a5e2bba662b5590944845.def("__call__", method_pointer_e8d6070aee8259eaa51048afa1a9d244, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c257ad377f1a5e2bba662b5590944845.def("x", method_pointer_938b6937e92c5887adcc3038efdbe989, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c257ad377f1a5e2bba662b5590944845.def("y", method_pointer_9fcb6155d85454be85b3e5ee8d7ebf1d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c257ad377f1a5e2bba662b5590944845.def("z", method_pointer_d21cf99d19ae57f3b8c676d8f2954bd6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c257ad377f1a5e2bba662b5590944845.def("w", method_pointer_1cf0e5da53ad50618ac67a3bebe820f8, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > > > >();
    }

}