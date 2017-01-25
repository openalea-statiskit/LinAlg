#include "_ieigen.h"


namespace autowig
{
    void method_decorator_61d3a6d0c21c5eeeaea8467e2c4e16bc(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >  & param_out)
    { instance.base() = param_out; }
    void method_decorator_721bf44e13a359948367da0e43c5bb99(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, long int  param_in_1, const double  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_4c44247ab83a533bb6bcf8928edf0bc9(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, const double  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_2f9d3b5237e151d39e46add316aab3da(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, double  const & param_in_1, class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_e0caf7ccc8ff564da7a79f0862817313(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, long int  param_in_1, double  const & param_in_2, class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_22adae5433ad5daf8502f039871cdb22(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  & param_out)
    { instance.setZero(param_in_0) = param_out; }
    void method_decorator_6eaa3aff9d3456fc80a1f0aefd25bcfe(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  & param_out)
    { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_d5b93b6b740c5bc18a352cecc58c017d(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  & param_out)
    { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_5747b170f9775982ae273be2275d181a(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  & param_out)
    { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_6058e42e974d5a2b920d088c9fac9e85(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  & param_out)
    { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_2be84f096bde508cb41651e07c447ff3(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  & param_out)
    { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_464e65c75a675eeab0679973e0a8314d()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_61d3a6d0c21c5eeeaea8467e2c4e16bc)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_cfc2d8a867005609bac8952b62ff7403)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_2d69b5a7d72257e9bf9a627f1a93dc3a)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_6051b5efff805526a69bf329ef33c419)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::cols;
    double  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_d3e5260a8f47502cbc3a7491df7fff05)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::coeff;
    double  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_f0b4cdae964358748db0ecd604a5d989)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::coeff;
    double  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_721bf44e13a359948367da0e43c5bb99)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::coeffRef;
    double  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_4c44247ab83a533bb6bcf8928edf0bc9)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::coeffRef;
    double  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_6c2a960960cc56908efd383bb3996d43)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::coeffRef;
    double  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_18d5ab3609705e009fdac4b12aefd52f)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::coeffRef;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_747e45be0c545e4795767c5fdbbfd44c)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_cd03b2e933a45a4382a9a275919d9e81)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_1754331a2c29567387fb076f2f32e0fb)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_3d17c14f75665104934d17f25b165c1f)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_a70647c9aa8f5bb88d96aebf7eec77fd)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_2d5863da809255aa8d7dde8949f2b580)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_76674575c80554d0ba3854f533b39fd8)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_7acc2900965a59b1a2682342518e6706)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::conservativeResize;
    class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_2f9d3b5237e151d39e46add316aab3da)(long int , double  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::setConstant;
    class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_e0caf7ccc8ff564da7a79f0862817313)(long int , long int , double  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::setConstant;
    class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_22adae5433ad5daf8502f039871cdb22)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::setZero;
    class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_6eaa3aff9d3456fc80a1f0aefd25bcfe)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::setZero;
    class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_d5b93b6b740c5bc18a352cecc58c017d)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::setOnes;
    class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_5747b170f9775982ae273be2275d181a)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::setOnes;
    class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_6058e42e974d5a2b920d088c9fac9e85)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::setRandom;
    class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_2be84f096bde508cb41651e07c447ff3)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::setRandom;
    void  (*method_pointer_f1aeb20e63d25f21b7a544dbabd31a94)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > > > > class_464e65c75a675eeab0679973e0a8314d("_PlainObjectBase_464e65c75a675eeab0679973e0a8314d", "", boost::python::no_init);
    class_464e65c75a675eeab0679973e0a8314d.def("base", method_pointer_61d3a6d0c21c5eeeaea8467e2c4e16bc, boost::python::return_internal_reference<>(), "");
    class_464e65c75a675eeab0679973e0a8314d.def("base", autowig::method_decorator_61d3a6d0c21c5eeeaea8467e2c4e16bc);
    class_464e65c75a675eeab0679973e0a8314d.def("base", method_pointer_cfc2d8a867005609bac8952b62ff7403, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_464e65c75a675eeab0679973e0a8314d.def("rows", method_pointer_2d69b5a7d72257e9bf9a627f1a93dc3a, "");
    class_464e65c75a675eeab0679973e0a8314d.def("cols", method_pointer_6051b5efff805526a69bf329ef33c419, "");
    class_464e65c75a675eeab0679973e0a8314d.def("coeff", method_pointer_d3e5260a8f47502cbc3a7491df7fff05, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_464e65c75a675eeab0679973e0a8314d.def("coeff", method_pointer_f0b4cdae964358748db0ecd604a5d989, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_464e65c75a675eeab0679973e0a8314d.def("coeff_ref", method_pointer_721bf44e13a359948367da0e43c5bb99, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_464e65c75a675eeab0679973e0a8314d.def("coeff_ref", autowig::method_decorator_721bf44e13a359948367da0e43c5bb99);
    class_464e65c75a675eeab0679973e0a8314d.def("coeff_ref", method_pointer_4c44247ab83a533bb6bcf8928edf0bc9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_464e65c75a675eeab0679973e0a8314d.def("coeff_ref", autowig::method_decorator_4c44247ab83a533bb6bcf8928edf0bc9);
    class_464e65c75a675eeab0679973e0a8314d.def("coeff_ref", method_pointer_6c2a960960cc56908efd383bb3996d43, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_464e65c75a675eeab0679973e0a8314d.def("coeff_ref", method_pointer_18d5ab3609705e009fdac4b12aefd52f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_464e65c75a675eeab0679973e0a8314d.def("resize", method_pointer_747e45be0c545e4795767c5fdbbfd44c, "");
    class_464e65c75a675eeab0679973e0a8314d.def("resize", method_pointer_cd03b2e933a45a4382a9a275919d9e81, "");
    class_464e65c75a675eeab0679973e0a8314d.def("resize", method_pointer_1754331a2c29567387fb076f2f32e0fb, "");
    class_464e65c75a675eeab0679973e0a8314d.def("resize", method_pointer_3d17c14f75665104934d17f25b165c1f, "");
    class_464e65c75a675eeab0679973e0a8314d.def("conservative_resize", method_pointer_a70647c9aa8f5bb88d96aebf7eec77fd, "");
    class_464e65c75a675eeab0679973e0a8314d.def("conservative_resize", method_pointer_2d5863da809255aa8d7dde8949f2b580, "");
    class_464e65c75a675eeab0679973e0a8314d.def("conservative_resize", method_pointer_76674575c80554d0ba3854f533b39fd8, "");
    class_464e65c75a675eeab0679973e0a8314d.def("conservative_resize", method_pointer_7acc2900965a59b1a2682342518e6706, "");
    class_464e65c75a675eeab0679973e0a8314d.def("set_constant", method_pointer_2f9d3b5237e151d39e46add316aab3da, boost::python::return_internal_reference<>(), "");
    class_464e65c75a675eeab0679973e0a8314d.def("set_constant", autowig::method_decorator_2f9d3b5237e151d39e46add316aab3da);
    class_464e65c75a675eeab0679973e0a8314d.def("set_constant", method_pointer_e0caf7ccc8ff564da7a79f0862817313, boost::python::return_internal_reference<>(), "");
    class_464e65c75a675eeab0679973e0a8314d.def("set_constant", autowig::method_decorator_e0caf7ccc8ff564da7a79f0862817313);
    class_464e65c75a675eeab0679973e0a8314d.def("set_zero", method_pointer_22adae5433ad5daf8502f039871cdb22, boost::python::return_internal_reference<>(), "");
    class_464e65c75a675eeab0679973e0a8314d.def("set_zero", autowig::method_decorator_22adae5433ad5daf8502f039871cdb22);
    class_464e65c75a675eeab0679973e0a8314d.def("set_zero", method_pointer_6eaa3aff9d3456fc80a1f0aefd25bcfe, boost::python::return_internal_reference<>(), "");
    class_464e65c75a675eeab0679973e0a8314d.def("set_zero", autowig::method_decorator_6eaa3aff9d3456fc80a1f0aefd25bcfe);
    class_464e65c75a675eeab0679973e0a8314d.def("set_ones", method_pointer_d5b93b6b740c5bc18a352cecc58c017d, boost::python::return_internal_reference<>(), "");
    class_464e65c75a675eeab0679973e0a8314d.def("set_ones", autowig::method_decorator_d5b93b6b740c5bc18a352cecc58c017d);
    class_464e65c75a675eeab0679973e0a8314d.def("set_ones", method_pointer_5747b170f9775982ae273be2275d181a, boost::python::return_internal_reference<>(), "");
    class_464e65c75a675eeab0679973e0a8314d.def("set_ones", autowig::method_decorator_5747b170f9775982ae273be2275d181a);
    class_464e65c75a675eeab0679973e0a8314d.def("set_random", method_pointer_6058e42e974d5a2b920d088c9fac9e85, boost::python::return_internal_reference<>(), "");
    class_464e65c75a675eeab0679973e0a8314d.def("set_random", autowig::method_decorator_6058e42e974d5a2b920d088c9fac9e85);
    class_464e65c75a675eeab0679973e0a8314d.def("set_random", method_pointer_2be84f096bde508cb41651e07c447ff3, boost::python::return_internal_reference<>(), "");
    class_464e65c75a675eeab0679973e0a8314d.def("set_random", autowig::method_decorator_2be84f096bde508cb41651e07c447ff3);
    class_464e65c75a675eeab0679973e0a8314d.def("check_template_params", method_pointer_f1aeb20e63d25f21b7a544dbabd31a94, "");
    class_464e65c75a675eeab0679973e0a8314d.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > > > >();
    }

}