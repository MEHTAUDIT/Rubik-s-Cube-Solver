import React from 'react';
import ReactDOM from 'react-dom/client';
import './index.css';
import App from './App';
import CubeProvider from "./cotext/cube-provider"

const root = ReactDOM.createRoot(document.getElementById('root'));
root.render(
  <React.StrictMode>
    <CubeProvider>
      <App />
    </CubeProvider>
  </React.StrictMode>
);

