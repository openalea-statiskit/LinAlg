#include "_ieigen.h"


namespace autowig
{
}


void wrapper_d6e5446085615a8181b7d01c028df1b7()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_a74639024569590cae78685829f954ee)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_0bcc63c3aec95675a2219647d83ef553)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 0 >::colIndexByOuterInner;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_be7d5742f265583998447bcfc4d63cb1)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 0 >::coeff;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_21c622c3a54f5731be87083b566122f3)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 0 >::coeffByOuterInner;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_199757f0a7b05e7ea2f853c377aa1d7a)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 0 >::operator();
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_c2b1a9d9b70f58a9a142c240c157dece)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 0 >::coeff;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_6aa370aa4d2e53c7a967e564f4cce9d8)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 0 >::operator[];
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_e345a3cacaf45ece96d0d09e1f315d86)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 0 >::operator();
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_d7dae138f2495b8f8c11fe753fb0ea8a)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 0 >::x;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_1a1fc7879b735bee9a28547d08028bb1)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 0 >::y;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_92bde8d7aab35a9eb3a4779f04b0810d)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 0 >::z;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_0e857b2cf2205abda6a79911e580a413)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 0 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > > > > class_d6e5446085615a8181b7d01c028df1b7("_DenseCoeffsBase_d6e5446085615a8181b7d01c028df1b7", "", boost::python::no_init);
    class_d6e5446085615a8181b7d01c028df1b7.def("row_index_by_outer_inner", method_pointer_a74639024569590cae78685829f954ee, "");
    class_d6e5446085615a8181b7d01c028df1b7.def("col_index_by_outer_inner", method_pointer_0bcc63c3aec95675a2219647d83ef553, "");
    class_d6e5446085615a8181b7d01c028df1b7.def("coeff", method_pointer_be7d5742f265583998447bcfc4d63cb1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d6e5446085615a8181b7d01c028df1b7.def("coeff_by_outer_inner", method_pointer_21c622c3a54f5731be87083b566122f3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d6e5446085615a8181b7d01c028df1b7.def("__call__", method_pointer_199757f0a7b05e7ea2f853c377aa1d7a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d6e5446085615a8181b7d01c028df1b7.def("coeff", method_pointer_c2b1a9d9b70f58a9a142c240c157dece, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d6e5446085615a8181b7d01c028df1b7.def("__getitem__", method_pointer_6aa370aa4d2e53c7a967e564f4cce9d8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d6e5446085615a8181b7d01c028df1b7.def("__call__", method_pointer_e345a3cacaf45ece96d0d09e1f315d86, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d6e5446085615a8181b7d01c028df1b7.def("x", method_pointer_d7dae138f2495b8f8c11fe753fb0ea8a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d6e5446085615a8181b7d01c028df1b7.def("y", method_pointer_1a1fc7879b735bee9a28547d08028bb1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d6e5446085615a8181b7d01c028df1b7.def("z", method_pointer_92bde8d7aab35a9eb3a4779f04b0810d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d6e5446085615a8181b7d01c028df1b7.def("w", method_pointer_0e857b2cf2205abda6a79911e580a413, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > > > >();
    }

}