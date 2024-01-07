function [mean ,standard_deviation] = computeStatistics (varargin)
            sum=0;
            dev=0;
            for i=1 : numel(varargin)
            sum = sum + varargin{i};
            end
            mean = sum/i;
            for i=1 : numel(varargin)
            dev = ((varargin{i}-mean)^2) + dev;
            end
            standard_deviation=sqrt(dev/numel(varargin));
            disp(mean);
            disp(standard_deviation);
            
end