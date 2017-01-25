#include "_ieigen.h"


namespace autowig
{
}


void wrapper_733face4442b5751bf747e5caef5e2cb()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 0 >::*method_pointer_46c0f93335f25357ab0b07312c988383)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 0 >::*method_pointer_bcdbf8fe96065567b5bfea7898d843ee)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 0 >::colIndexByOuterInner;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 0 >::*method_pointer_c4ddea8b6d495508ab41d940860e8c1f)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 0 >::coeff;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 0 >::*method_pointer_8ca70cdf966f52d09b8ae27e128212ce)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 0 >::coeffByOuterInner;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 0 >::*method_pointer_5be07aa006b15221881b6bfb9629e613)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 0 >::operator();
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 0 >::*method_pointer_7d300e7f4c0150d581d118e9d9f9088a)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 0 >::coeff;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 0 >::*method_pointer_9f70539620f95c58b522b4bed9cdde56)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 0 >::operator[];
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 0 >::*method_pointer_6c1bc26d7f4f5b18b496b79c63ca0693)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 0 >::operator();
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 0 >::*method_pointer_1b496c85322d504093c27b2962089342)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 0 >::x;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 0 >::*method_pointer_9628041931055682a1a9e2175172c566)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 0 >::y;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 0 >::*method_pointer_c77d5d4133db51729bcfdd917b65c75c)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 0 >::z;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 0 >::*method_pointer_1f42d62033805c32a53695cbfbb2d233)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 0 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > > > class_733face4442b5751bf747e5caef5e2cb("_DenseCoeffsBase_733face4442b5751bf747e5caef5e2cb", "", boost::python::no_init);
    class_733face4442b5751bf747e5caef5e2cb.def("row_index_by_outer_inner", method_pointer_46c0f93335f25357ab0b07312c988383, "");
    class_733face4442b5751bf747e5caef5e2cb.def("col_index_by_outer_inner", method_pointer_bcdbf8fe96065567b5bfea7898d843ee, "");
    class_733face4442b5751bf747e5caef5e2cb.def("coeff", method_pointer_c4ddea8b6d495508ab41d940860e8c1f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_733face4442b5751bf747e5caef5e2cb.def("coeff_by_outer_inner", method_pointer_8ca70cdf966f52d09b8ae27e128212ce, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_733face4442b5751bf747e5caef5e2cb.def("__call__", method_pointer_5be07aa006b15221881b6bfb9629e613, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_733face4442b5751bf747e5caef5e2cb.def("coeff", method_pointer_7d300e7f4c0150d581d118e9d9f9088a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_733face4442b5751bf747e5caef5e2cb.def("__getitem__", method_pointer_9f70539620f95c58b522b4bed9cdde56, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_733face4442b5751bf747e5caef5e2cb.def("__call__", method_pointer_6c1bc26d7f4f5b18b496b79c63ca0693, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_733face4442b5751bf747e5caef5e2cb.def("x", method_pointer_1b496c85322d504093c27b2962089342, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_733face4442b5751bf747e5caef5e2cb.def("y", method_pointer_9628041931055682a1a9e2175172c566, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_733face4442b5751bf747e5caef5e2cb.def("z", method_pointer_c77d5d4133db51729bcfdd917b65c75c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_733face4442b5751bf747e5caef5e2cb.def("w", method_pointer_1f42d62033805c32a53695cbfbb2d233, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > > >();
    }

}