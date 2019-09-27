void ATestRun_eljob (const std::string& submitDir)
{
    // Set up the job for xAOD access:
    xAOD::Init().ignore();

    // create a new sample handler to describe the data files we use
    SH::SampleHandler sh;

    const char* inputFilePath = gSystem->ExpandPathName ("/eos/user/i/iaizenbe/QualificationTask/data15_13TeV.00278912.physics_Main.deriv.DAOD_STDM7.r9264_p3083_p3713");

    SH::ScanDir().filePattern("DAOD_STDM7.16391411._000001.pool.root.1").scan(sh,inputFilePath);
    sh.setMetaString ("nc_tree", "CollectionTree");
    sh.print ();

    // this is the basic description of our job
    EL::Job job;
    job.sampleHandler (sh); // use SampleHandler in this job
    job.options()->setDouble (EL::Job::optMaxEvents, 500); // for testing purposes, limit to run over the first 500 events only!

    // add our algorithm to the job
    EL::AnaAlgorithmConfig alg;
    alg.setType ("MyxAODAnalysis");

    // set the name of the algorithm (this is the name use with
    // messages)
    alg.setName ("AnalysisAlg");

    // later on we'll add some configuration options for our algorithm that go here

    job.algsAdd (alg);

    // make the driver we want to use:
    // this one works by running the algorithm directly:
    EL::DirectDriver driver;
    // we can use other drivers to run things on the Grid, with PROOF, etc.

    // process the job using the driver
    driver.submit (job, submitDir);
}
