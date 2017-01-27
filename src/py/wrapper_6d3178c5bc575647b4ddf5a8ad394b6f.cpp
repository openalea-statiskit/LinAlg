#include "_ieigen.h"


namespace autowig
{
    void method_decorator_58f3ec8473ea5b94b477f5e4c72b3b46(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 > > & instance, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_981c3b290a7a5069ae31f9ce76744c77(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 > > & instance, double  const & param_in_0, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_b7aee185e2a953f6a3f0f48b1a1efc4d(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_6d3178c5bc575647b4ddf5a8ad394b6f()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 >  & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_58f3ec8473ea5b94b477f5e4c72b3b46)() = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 > >::derived;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_05c98388751f50a5b1c1b08af0597817)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 > >::derived;
    class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_3c365fcfbc2d571993bb7d6829208111)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 > >::matrixU;
    class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_023249ec244851c68ef3055e70e8cd26)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 > >::matrixV;
    class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_dce90909031859b4a47388fb1abe7ffc)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 > >::singularValues;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_9bf3394c56e25d4e9d3dd5eca751e65a)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 > >::nonzeroSingularValues;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_29b8b4f552d65b049b9efcb78f2afb26)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 > >::rank;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 >  & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_981c3b290a7a5069ae31f9ce76744c77)(double  const &) = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 > >::setThreshold;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 >  & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_b7aee185e2a953f6a3f0f48b1a1efc4d)(enum ::Eigen::Default_t ) = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 > >::setThreshold;
    double  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_f5ec31a3fd9955af94cac4456c5f4f2a)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 > >::threshold;
    bool  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_dac2fd0771f35fbf9e5c029f17531a00)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 > >::computeU;
    bool  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_a8740ffdf7125b5eb2ee7288dc888644)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 > >::computeV;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_c9eb8d6ceff453c5bf85e20cd03b959b)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 > >::rows;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_e348efa7a05e5901bb6fe259c5373aa3)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 > >::cols;
    boost::python::class_< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 > >, autowig::HeldType< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 > > > > class_6d3178c5bc575647b4ddf5a8ad394b6f("_SVDBase_6d3178c5bc575647b4ddf5a8ad394b6f", "", boost::python::no_init);
    class_6d3178c5bc575647b4ddf5a8ad394b6f.def(boost::python::init< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 > >  const & >(""));
    class_6d3178c5bc575647b4ddf5a8ad394b6f.def("derived", method_pointer_58f3ec8473ea5b94b477f5e4c72b3b46, boost::python::return_internal_reference<>(), "");
    class_6d3178c5bc575647b4ddf5a8ad394b6f.def("derived", autowig::method_decorator_58f3ec8473ea5b94b477f5e4c72b3b46);
    class_6d3178c5bc575647b4ddf5a8ad394b6f.def("derived", method_pointer_05c98388751f50a5b1c1b08af0597817, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6d3178c5bc575647b4ddf5a8ad394b6f.def("matrix_u", method_pointer_3c365fcfbc2d571993bb7d6829208111, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6d3178c5bc575647b4ddf5a8ad394b6f.def("matrix_v", method_pointer_023249ec244851c68ef3055e70e8cd26, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6d3178c5bc575647b4ddf5a8ad394b6f.def("singular_values", method_pointer_dce90909031859b4a47388fb1abe7ffc, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6d3178c5bc575647b4ddf5a8ad394b6f.def("nonzero_singular_values", method_pointer_9bf3394c56e25d4e9d3dd5eca751e65a, "");
    class_6d3178c5bc575647b4ddf5a8ad394b6f.def("rank", method_pointer_29b8b4f552d65b049b9efcb78f2afb26, "");
    class_6d3178c5bc575647b4ddf5a8ad394b6f.def("set_threshold", method_pointer_981c3b290a7a5069ae31f9ce76744c77, boost::python::return_internal_reference<>(), "");
    class_6d3178c5bc575647b4ddf5a8ad394b6f.def("set_threshold", autowig::method_decorator_981c3b290a7a5069ae31f9ce76744c77);
    class_6d3178c5bc575647b4ddf5a8ad394b6f.def("set_threshold", method_pointer_b7aee185e2a953f6a3f0f48b1a1efc4d, boost::python::return_internal_reference<>(), "");
    class_6d3178c5bc575647b4ddf5a8ad394b6f.def("set_threshold", autowig::method_decorator_b7aee185e2a953f6a3f0f48b1a1efc4d);
    class_6d3178c5bc575647b4ddf5a8ad394b6f.def("threshold", method_pointer_f5ec31a3fd9955af94cac4456c5f4f2a, "");
    class_6d3178c5bc575647b4ddf5a8ad394b6f.def("compute_u", method_pointer_dac2fd0771f35fbf9e5c029f17531a00, "");
    class_6d3178c5bc575647b4ddf5a8ad394b6f.def("compute_v", method_pointer_a8740ffdf7125b5eb2ee7288dc888644, "");
    class_6d3178c5bc575647b4ddf5a8ad394b6f.def("rows", method_pointer_c9eb8d6ceff453c5bf85e20cd03b959b, "");
    class_6d3178c5bc575647b4ddf5a8ad394b6f.def("cols", method_pointer_e348efa7a05e5901bb6fe259c5373aa3, "");

}