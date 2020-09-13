########
# Nick Bild
# nick.bild@gmail.com
#
# Simple web api to set/get a timestamp.
#
# Required libraries:
#   flask
#   flask-restful
#
# Developed on Python 3.7.0.
#
# Starting the server:
# python3 api.py
#
# Accessing an endpoint:
# curl http://[SERVER_IP]:5000/[ENDPOINT_NAME]
########

from flask import Flask
from flask_restful import Resource, Api
import datetime


app = Flask(__name__)
api = Api(app)

last_open_dt = None


###
# Define endpoint actions.
###

class SetTime(Resource):
    def get(self):
        global last_open_dt
        last_open_dt = datetime.datetime.now()
        return None


class GetTime(Resource):
    def get(self):
        global last_open_dt

        if last_open_dt is not None:
            return last_open_dt.strftime("%m/%d/%Y, %H:%M")

        return None


###
# Attach endpoints.
###

api.add_resource(SetTime, '/set_time')
api.add_resource(GetTime, '/get_time')

###
# Start server.
###

if __name__ == '__main__':
    app.run(debug=True, host='0.0.0.0')
