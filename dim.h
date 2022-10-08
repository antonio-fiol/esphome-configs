void dim(light::LightState* light, float x, float nte) {
          auto rv = light->remote_values;
          // If it is off, assume zero starting brightness
          float tmpb = (rv.is_on()?rv.get_brightness():0)+x;
          // Clip brightness to 0-1
          float bri = tmpb<0.0?0.0:(tmpb>1.0?1.0:tmpb);
          if(bri>0.005) {
            // Vary brightness only if below not to exceed threshold
            if(bri<=nte) {
              auto call = light->make_call();
              call.set_brightness(bri);
              call.set_state(true);
              call.perform();
            }
          } else if (rv.is_on()) {
            auto call = light->make_call();
            // Set default brightness for next time it switches on
            call.set_brightness(0.3);
            // Switch off
            call.set_state(false);
            call.perform();
          }
}
