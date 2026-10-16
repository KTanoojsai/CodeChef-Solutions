import Tab from './Tab.jsx';

const App = () => {
  // TODO: Step 1 - Create state to track active tab
    const [activeTab, setActiveTab] = useState('Frontend'); // default to Frontend

      const renderContent = () => {
          // TODO: Step 2 - Based on active tab, show appropriate content
              switch (activeTab) {
                    case 'Frontend':
                            return <p>This is the Frontend Project section.</p>;
                                  case 'Backend':
                                          return <p>This is the Backend Project section.</p>;
                                                case 'Full Stack':
                                                        return <p>This is the Full Stack Project section.</p>;
                                                              default:
                                                                      return null;
                                                                          }
                                                                            };

                                                                              return (
                                                                                  <div style={{ padding: '20px', fontFamily: 'Arial' }}>
                                                                                        <h1>React Challenge: Tab Switcher</h1>

                                                                                              <div style={{ display: 'flex', gap: '10px' }}>
                                                                                                      {/* TODO: Step 3 - Render tabs and handle click to change active tab */}
                                                                                                              <Tab label="Frontend" activeTab={activeTab} setActiveTab={setActiveTab} />
                                                                                                                      <Tab label="Backend" activeTab={activeTab} setActiveTab={setActiveTab} />
                                                                                                                              <Tab label="Full Stack" activeTab={activeTab} setActiveTab={setActiveTab} />
                                                                                                                                    </div>