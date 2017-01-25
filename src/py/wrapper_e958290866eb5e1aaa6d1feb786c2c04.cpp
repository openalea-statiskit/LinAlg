#include "_ieigen.h"


namespace autowig
{
}


void wrapper_e958290866eb5e1aaa6d1feb786c2c04()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 0 >::*method_pointer_fe849837293c5077aad005da50e9c06d)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 0 >::*method_pointer_a278d746be0257deb903183f3408f12d)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 0 >::colIndexByOuterInner;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 0 >::*method_pointer_282ee3d07c785e1980734eadedb77887)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 0 >::coeff;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 0 >::*method_pointer_7fe2eaab11b05ecfad65f8c8419faa92)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 0 >::coeffByOuterInner;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 0 >::*method_pointer_107b909777995e2ea1d259cf628f2ebe)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 0 >::operator();
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 0 >::*method_pointer_91341cc940a058e0b29c3c416e61ba61)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 0 >::coeff;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 0 >::*method_pointer_44af066dd1a4501abdcad9955a1329a4)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 0 >::operator[];
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 0 >::*method_pointer_31c8496670db5e4f8dcc3fef6f7002b8)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 0 >::operator();
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 0 >::*method_pointer_184fea0835bd525fbd3ecaef8e1dce8e)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 0 >::x;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 0 >::*method_pointer_3b42d59207bb5a9ca8cebb0bc7357fc4)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 0 >::y;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 0 >::*method_pointer_dec07073430c5b9baa38ded7f421fed0)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 0 >::z;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 0 >::*method_pointer_bf48242bbd4759638e68517cc06b2fa0)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 0 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > > > class_e958290866eb5e1aaa6d1feb786c2c04("_DenseCoeffsBase_e958290866eb5e1aaa6d1feb786c2c04", "", boost::python::no_init);
    class_e958290866eb5e1aaa6d1feb786c2c04.def("row_index_by_outer_inner", method_pointer_fe849837293c5077aad005da50e9c06d, "");
    class_e958290866eb5e1aaa6d1feb786c2c04.def("col_index_by_outer_inner", method_pointer_a278d746be0257deb903183f3408f12d, "");
    class_e958290866eb5e1aaa6d1feb786c2c04.def("coeff", method_pointer_282ee3d07c785e1980734eadedb77887, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e958290866eb5e1aaa6d1feb786c2c04.def("coeff_by_outer_inner", method_pointer_7fe2eaab11b05ecfad65f8c8419faa92, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e958290866eb5e1aaa6d1feb786c2c04.def("__call__", method_pointer_107b909777995e2ea1d259cf628f2ebe, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e958290866eb5e1aaa6d1feb786c2c04.def("coeff", method_pointer_91341cc940a058e0b29c3c416e61ba61, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e958290866eb5e1aaa6d1feb786c2c04.def("__getitem__", method_pointer_44af066dd1a4501abdcad9955a1329a4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e958290866eb5e1aaa6d1feb786c2c04.def("__call__", method_pointer_31c8496670db5e4f8dcc3fef6f7002b8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e958290866eb5e1aaa6d1feb786c2c04.def("x", method_pointer_184fea0835bd525fbd3ecaef8e1dce8e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e958290866eb5e1aaa6d1feb786c2c04.def("y", method_pointer_3b42d59207bb5a9ca8cebb0bc7357fc4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e958290866eb5e1aaa6d1feb786c2c04.def("z", method_pointer_dec07073430c5b9baa38ded7f421fed0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e958290866eb5e1aaa6d1feb786c2c04.def("w", method_pointer_bf48242bbd4759638e68517cc06b2fa0, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > > >();
    }

}