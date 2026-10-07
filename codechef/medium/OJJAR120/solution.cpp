
                                                                                                                                                                                                                                                                                                      <div className="tab-navigation">
                                                                                                                                                                                                                                                                                                              <button>Previous</button>
                                                                                                                                                                                                                                                                                                                      <button>Next</button>
                                                                                                                                                                                                                                                                                                                            </div>
                                                                                                                                                                                                                                                                                                                                </div>
                                                                                                                                                                                                                                                                                                                                  );
                                                                                                                                                                                                                                                                                                </div>
                                                                                                                                                                                                                                                                                  </div>
                                                                                                                                                                                                                                                                                          )}
                                                                                                                                                                                                                                                                        <p>Content for Review & Submit will go here.</p>
                                                                                                                                                                                                                                                            <h2>Review Your Application</h2>
                                                                                                                                                                                                                                                <div>
                                                                                                                                                                                                                                      {currentActiveTab === 2 && (

                                                                                                                                                                                                                              )}
                                                                                                                                                                                                                      </div>
                                                                                                                                                                                                <h2>Work Experience & Skills</h2>
                                                                                                                                                                                                            <p>Content for Experience will go here.</p>

                                                                                                                                                                          {currentActiveTab === 1 && (
                                                                                                                                                                                    <div>
                                                                                                </div>

                                                                                                      <div className="tab-content">
                                                                                                              {currentActiveTab === 0 && (
                                                                                                                        <div>
                                                                                                                                    <h2>Personal Information</h2>
                                                                                                                                                <p>Content for Personal Info will go here.</p>
                                                                                                                                                          </div>
                                                                                                                                                                  )}
                                                                                          </button>
                                                                                  3. Review & Submit
                    <button className={`tab-header ${currentActiveTab === 0 ? 'active' : ''}`}>
                              1. Personal Info
                                      </button>
                                              <button className={`tab-header ${currentActiveTab === 1 ? 'active' : ''}`}>
                                                        2. Experience
                                                                </button>
                                                                        <button className={`tab-header ${currentActiveTab === 2 ? 'active' : ''}`}>
function Tabs({ currentActiveTab }) {
  return (
      <div className="tabs-container">
            <div className="tab-headers">
// Receive currentActiveTab prop