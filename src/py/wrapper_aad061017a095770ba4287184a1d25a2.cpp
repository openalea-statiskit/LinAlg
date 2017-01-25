#include "_ieigen.h"


namespace autowig
{
}


void wrapper_aad061017a095770ba4287184a1d25a2()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 3 >::*method_pointer_92087f3bf838591cbc4a16d9e4a0303b)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 3 >::*method_pointer_9088f91617da571b8512015a1903531e)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 3 >::*method_pointer_aeb5b28d782b53e29185eff22a26aea3)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 3 >::*method_pointer_a29f27dbf8575c2eaba2f8cb8c90dcf4)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 3 >::*method_pointer_855cab9481585aeb83b777d8f9760c60)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 1 > > > class_aad061017a095770ba4287184a1d25a2("_DenseCoeffsBase_aad061017a095770ba4287184a1d25a2", "", boost::python::no_init);
    class_aad061017a095770ba4287184a1d25a2.def("inner_stride", method_pointer_92087f3bf838591cbc4a16d9e4a0303b, "");
    class_aad061017a095770ba4287184a1d25a2.def("outer_stride", method_pointer_9088f91617da571b8512015a1903531e, "");
    class_aad061017a095770ba4287184a1d25a2.def("stride", method_pointer_aeb5b28d782b53e29185eff22a26aea3, "");
    class_aad061017a095770ba4287184a1d25a2.def("row_stride", method_pointer_a29f27dbf8575c2eaba2f8cb8c90dcf4, "");
    class_aad061017a095770ba4287184a1d25a2.def("col_stride", method_pointer_855cab9481585aeb83b777d8f9760c60, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 1 > > >();
    }

}