#include "_ieigen.h"


namespace autowig
{
    void method_decorator_9aecc64ba1215c6c9e74edfb17713936(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 > > & instance, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_8e174ac90307511e9f585f0718cd81e5(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 > > & instance, float  const & param_in_0, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_8a3c09c6b0a750b584038097b04cee8a(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_b30a8b6226fb5f34a363e04672e9b737()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 >  & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_9aecc64ba1215c6c9e74edfb17713936)() = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 > >::derived;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_e3e091059f1a52eb990e87e5678253af)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 > >::derived;
    class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_d2dbf21721495198ab2c76079ceceb49)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 > >::matrixU;
    class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_05c4d56fb7bf5660b0ed58d695d12420)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 > >::matrixV;
    class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_50a3dd7ff2215d47b5609f3852ecee8b)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 > >::singularValues;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_083f4bb11f1f5aa289f64d236c45fdd3)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 > >::nonzeroSingularValues;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_9bcbf1818b3454769b9a6a914cf4e146)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 > >::rank;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 >  & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_8e174ac90307511e9f585f0718cd81e5)(float  const &) = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 > >::setThreshold;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 >  & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_8a3c09c6b0a750b584038097b04cee8a)(enum ::Eigen::Default_t ) = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 > >::setThreshold;
    float  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_a347cf33186b5c12841efdd0712d0c06)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 > >::threshold;
    bool  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_02b2cc49b48a5de3bc0752741aadcd96)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 > >::computeU;
    bool  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_bbc9e23657af5661ab937c56a5dccc40)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 > >::computeV;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_a665e7a4514d5ecf99068f61bc4d53ec)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 > >::rows;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_046cdf48683a5b29895d1902cfea49ec)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 > >::cols;
    boost::python::class_< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 > >, autowig::HeldType< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 > > > > class_b30a8b6226fb5f34a363e04672e9b737("_SVDBase_b30a8b6226fb5f34a363e04672e9b737", "", boost::python::no_init);
    class_b30a8b6226fb5f34a363e04672e9b737.def(boost::python::init< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 > >  const & >(""));
    class_b30a8b6226fb5f34a363e04672e9b737.def("derived", method_pointer_9aecc64ba1215c6c9e74edfb17713936, boost::python::return_internal_reference<>(), "");
    class_b30a8b6226fb5f34a363e04672e9b737.def("derived", autowig::method_decorator_9aecc64ba1215c6c9e74edfb17713936);
    class_b30a8b6226fb5f34a363e04672e9b737.def("derived", method_pointer_e3e091059f1a52eb990e87e5678253af, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b30a8b6226fb5f34a363e04672e9b737.def("matrix_u", method_pointer_d2dbf21721495198ab2c76079ceceb49, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b30a8b6226fb5f34a363e04672e9b737.def("matrix_v", method_pointer_05c4d56fb7bf5660b0ed58d695d12420, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b30a8b6226fb5f34a363e04672e9b737.def("singular_values", method_pointer_50a3dd7ff2215d47b5609f3852ecee8b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b30a8b6226fb5f34a363e04672e9b737.def("nonzero_singular_values", method_pointer_083f4bb11f1f5aa289f64d236c45fdd3, "");
    class_b30a8b6226fb5f34a363e04672e9b737.def("rank", method_pointer_9bcbf1818b3454769b9a6a914cf4e146, "");
    class_b30a8b6226fb5f34a363e04672e9b737.def("set_threshold", method_pointer_8e174ac90307511e9f585f0718cd81e5, boost::python::return_internal_reference<>(), "");
    class_b30a8b6226fb5f34a363e04672e9b737.def("set_threshold", autowig::method_decorator_8e174ac90307511e9f585f0718cd81e5);
    class_b30a8b6226fb5f34a363e04672e9b737.def("set_threshold", method_pointer_8a3c09c6b0a750b584038097b04cee8a, boost::python::return_internal_reference<>(), "");
    class_b30a8b6226fb5f34a363e04672e9b737.def("set_threshold", autowig::method_decorator_8a3c09c6b0a750b584038097b04cee8a);
    class_b30a8b6226fb5f34a363e04672e9b737.def("threshold", method_pointer_a347cf33186b5c12841efdd0712d0c06, "");
    class_b30a8b6226fb5f34a363e04672e9b737.def("compute_u", method_pointer_02b2cc49b48a5de3bc0752741aadcd96, "");
    class_b30a8b6226fb5f34a363e04672e9b737.def("compute_v", method_pointer_bbc9e23657af5661ab937c56a5dccc40, "");
    class_b30a8b6226fb5f34a363e04672e9b737.def("rows", method_pointer_a665e7a4514d5ecf99068f61bc4d53ec, "");
    class_b30a8b6226fb5f34a363e04672e9b737.def("cols", method_pointer_046cdf48683a5b29895d1902cfea49ec, "");

}