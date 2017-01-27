#include "_ieigen.h"


namespace autowig
{
    void method_decorator_32a28e96e115563b9addec075f96ef08(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 > > & instance, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_2a626858702e5bf8b7f0d2d597d3acff(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 > > & instance, double  const & param_in_0, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_281bf1bdc84b5ccfa172a8046f3af46f(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_2a857fa331155892aa0cdf5ccb20f354()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 >  & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_32a28e96e115563b9addec075f96ef08)() = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 > >::derived;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_e33fba5467ca5f28930252b9165e37cd)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 > >::derived;
    class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_9407f0a2e1cd5f2895ff1c33006dc2e1)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 > >::matrixU;
    class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_a22019b59917552a8809b52fd3e04414)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 > >::matrixV;
    class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_bdea8d7f176756029354cf53acba09ed)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 > >::singularValues;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_402f06e4fc50593ea56b28e60c159dba)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 > >::nonzeroSingularValues;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_6ce3ef289ac055b5b727dc51f4427804)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 > >::rank;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 >  & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_2a626858702e5bf8b7f0d2d597d3acff)(double  const &) = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 > >::setThreshold;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 >  & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_281bf1bdc84b5ccfa172a8046f3af46f)(enum ::Eigen::Default_t ) = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 > >::setThreshold;
    double  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_052dca0ec7165177a0bf8489d3ae64f0)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 > >::threshold;
    bool  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_a8ec209a5be8504d9d840904c02cc2e3)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 > >::computeU;
    bool  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_7fa6032eb02357e3925b708cf1cb6b08)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 > >::computeV;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_4805fbea3f9a50098fb86e456407afa6)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 > >::rows;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_90764e93b21b5384a3445b5b19190ae0)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 > >::cols;
    boost::python::class_< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 > >, autowig::HeldType< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 > > > > class_2a857fa331155892aa0cdf5ccb20f354("_SVDBase_2a857fa331155892aa0cdf5ccb20f354", "", boost::python::no_init);
    class_2a857fa331155892aa0cdf5ccb20f354.def(boost::python::init< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 > >  const & >(""));
    class_2a857fa331155892aa0cdf5ccb20f354.def("derived", method_pointer_32a28e96e115563b9addec075f96ef08, boost::python::return_internal_reference<>(), "");
    class_2a857fa331155892aa0cdf5ccb20f354.def("derived", autowig::method_decorator_32a28e96e115563b9addec075f96ef08);
    class_2a857fa331155892aa0cdf5ccb20f354.def("derived", method_pointer_e33fba5467ca5f28930252b9165e37cd, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2a857fa331155892aa0cdf5ccb20f354.def("matrix_u", method_pointer_9407f0a2e1cd5f2895ff1c33006dc2e1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2a857fa331155892aa0cdf5ccb20f354.def("matrix_v", method_pointer_a22019b59917552a8809b52fd3e04414, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2a857fa331155892aa0cdf5ccb20f354.def("singular_values", method_pointer_bdea8d7f176756029354cf53acba09ed, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2a857fa331155892aa0cdf5ccb20f354.def("nonzero_singular_values", method_pointer_402f06e4fc50593ea56b28e60c159dba, "");
    class_2a857fa331155892aa0cdf5ccb20f354.def("rank", method_pointer_6ce3ef289ac055b5b727dc51f4427804, "");
    class_2a857fa331155892aa0cdf5ccb20f354.def("set_threshold", method_pointer_2a626858702e5bf8b7f0d2d597d3acff, boost::python::return_internal_reference<>(), "");
    class_2a857fa331155892aa0cdf5ccb20f354.def("set_threshold", autowig::method_decorator_2a626858702e5bf8b7f0d2d597d3acff);
    class_2a857fa331155892aa0cdf5ccb20f354.def("set_threshold", method_pointer_281bf1bdc84b5ccfa172a8046f3af46f, boost::python::return_internal_reference<>(), "");
    class_2a857fa331155892aa0cdf5ccb20f354.def("set_threshold", autowig::method_decorator_281bf1bdc84b5ccfa172a8046f3af46f);
    class_2a857fa331155892aa0cdf5ccb20f354.def("threshold", method_pointer_052dca0ec7165177a0bf8489d3ae64f0, "");
    class_2a857fa331155892aa0cdf5ccb20f354.def("compute_u", method_pointer_a8ec209a5be8504d9d840904c02cc2e3, "");
    class_2a857fa331155892aa0cdf5ccb20f354.def("compute_v", method_pointer_7fa6032eb02357e3925b708cf1cb6b08, "");
    class_2a857fa331155892aa0cdf5ccb20f354.def("rows", method_pointer_4805fbea3f9a50098fb86e456407afa6, "");
    class_2a857fa331155892aa0cdf5ccb20f354.def("cols", method_pointer_90764e93b21b5384a3445b5b19190ae0, "");

}