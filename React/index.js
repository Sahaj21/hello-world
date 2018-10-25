import React from 'react';

class Profile extends React.Component {
  constructor(props) {
    super(props);
  }
  render() {
    const { propHello, propWorld } = this.props;
    return (
      <div>
        <h1>
          {propHello} {propWorld}
        </h1>

        <br />
     </div>
    )}
 }
// props

React.render(<Profile propHello="Hello" propWorld="World" />, document.getElementById('app'));

// You'll need an html file with <div id="app"></div> in it and Babel etc.
// See https://codepen.io/stewest/pen/bgbrxg?editors=1000
