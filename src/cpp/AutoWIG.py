import autowig
import itertools

def controller(asg):
    autowig.controller.plugin = 'default'
    asg = autowig.controller(asg)
    # import ipdb
    # ipdb.set_trace()
    # for cls in ['class ::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >',
    #             'class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >',
    #             'class ::Eigen::DenseBase< class ::Eigen::Array< int, 1, -1, 1, 1, -1 > >',
    #             'class ::Eigen::DenseBase< class ::Eigen::Map< class ::Eigen::Array< int, 1, -1, 1, 1, -1 >, 0, class ::Eigen::Stride< 0, 0 > > >',
    #             'class ::Eigen::DenseBase< class ::Eigen::Matrix< long int, -1, 1, 0, -1, 1 > >',
    #             'class ::Eigen::DenseBase< class ::Eigen::Matrix< long int, 1, -1, 1, 1, -1 > >',
    #             'class ::Eigen::DenseBase< class ::Eigen::Array< long int, 1, -1, 1, 1, -1 > >',
    #             'class ::Eigen::DenseBase< class ::Eigen::Map< class ::Eigen::Array< long int, 1, -1, 1, 1, -1 >, 0, class ::Eigen::Stride< 0, 0 > > >']:
    #     asg[cls].boost_python_export = False
    for cls in ['class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >',
                'class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >',
                'class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >']:
        for mtd in asg[cls].methods(access='public'):
            if mtd.localname == 'trace':
                mtd.boost_python_export = False
    for fct in asg.functions():
        if fct.localname in ['_check_template_params', 'operator()', 'operator[]']:
            fct.boost_python_export = False
    for cls in ['Vectors', 'RowVectors', 'Matrices']:
        cls = asg['::statiskit::linalg::' + cls].qualified_type.unqualified_type
        for ctr in cls.constructors():
            if ctr.nb_parameters > 0:
                ctr.boost_python_export = False
    return asg

def generator(asg, module, decorator):
    autowig.generator.plugin = 'boost_python'
    nodes = [typedef.qualified_type.unqualified_type for typedef in asg['::statiskit::linalg'].typedefs()]
    nodes = list(itertools.chain(*[node.bases(inherited=True) for node in nodes])) + nodes + asg['::statiskit::linalg'].declarations()
    wrappers = autowig.generator(asg, nodes, module=module,
                                             decorator=decorator,
                                             closure=False,
                                             helder='std::shared_ptr')
    return wrappers