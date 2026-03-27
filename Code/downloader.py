import React, { useState, useEffect } from 'react';
import { Download, Music, Video, Sun, Moon, Sparkles } from 'lucide-react';

export default function YouTubeDownloader() {
  const [url, setUrl] = useState('');
  const [quality, setQuality] = useState('1080p');
  const [format, setFormat] = useState('video');
  const [theme, setTheme] = useState('dark');
  const [isProcessing, setIsProcessing] = useState(false);
  const [progress, setProgress] = useState(0);
  const [videoInfo, setVideoInfo] = useState(null);

  const qualities = ['144p', '240p', '360p', '480p', '720p', '1080p', '1440p', '4K'];
  const audioFormats = ['MP3 320kbps', 'MP3 256kbps', 'MP3 192kbps', 'MP3 128kbps', 'WAV', 'FLAC'];

  useEffect(() => {
    document.body.style.background = theme === 'dark' 
      ? 'linear-gradient(135deg, #0f0f1e 0%, #1a1a2e 50%, #16213e 100%)'
      : 'linear-gradient(135deg, #f5f7fa 0%, #c3cfe2 100%)';
  }, [theme]);

  const handleDownload = async () => {
    if (!url.trim()) return;
    
    setIsProcessing(true);
    setProgress(0);
    
    // Simulate video info fetch
    setTimeout(() => {
      setVideoInfo({
        title: 'Sample Video Title',
        duration: '5:32',
        thumbnail: 'https://via.placeholder.com/320x180/6366f1/ffffff?text=Video+Thumbnail'
      });
    }, 500);

    // Simulate download progress
    const interval = setInterval(() => {
      setProgress(prev => {
        if (prev >= 100) {
          clearInterval(interval);
          setIsProcessing(false);
          return 100;
        }
        return prev + 10;
      });
    }, 300);
  };

  const toggleTheme = () => {
    setTheme(prev => prev === 'dark' ? 'light' : 'dark');
  };

  const glassStyle = theme === 'dark' ? {
    background: 'rgba(255, 255, 255, 0.05)',
    backdropFilter: 'blur(20px) saturate(180%)',
    WebkitBackdropFilter: 'blur(20px) saturate(180%)',
    border: '1px solid rgba(255, 255, 255, 0.1)',
    boxShadow: '0 8px 32px 0 rgba(0, 0, 0, 0.37)'
  } : {
    background: 'rgba(255, 255, 255, 0.7)',
    backdropFilter: 'blur(20px) saturate(180%)',
    WebkitBackdropFilter: 'blur(20px) saturate(180%)',
    border: '1px solid rgba(255, 255, 255, 0.3)',
    boxShadow: '0 8px 32px 0 rgba(31, 38, 135, 0.15)'
  };

  const textColor = theme === 'dark' ? 'text-white' : 'text-gray-900';
  const mutedColor = theme === 'dark' ? 'text-gray-400' : 'text-gray-600';

  return (
    <div className="min-h-screen flex items-center justify-center p-4">
      <div className="w-full max-w-4xl">
        {/* Header */}
        <div className="text-center mb-8 animate-fade-in">
          <div className="flex items-center justify-center gap-3 mb-4">
            <div className="relative">
              <Video className={`w-12 h-12 ${theme === 'dark' ? 'text-indigo-400' : 'text-indigo-600'}`} />
              <Sparkles className="w-5 h-5 text-yellow-400 absolute -top-1 -right-1 animate-pulse" />
            </div>
            <h1 className={`text-5xl font-bold ${textColor}`}>
              <span className="bg-gradient-to-r from-indigo-500 via-purple-500 to-pink-500 bg-clip-text text-transparent">
                VidFlow
              </span>
            </h1>
          </div>
          <p className={`${mutedColor} text-lg`}>Premium video & audio downloader</p>
        </div>

        {/* Main Card */}
        <div style={glassStyle} className="rounded-3xl p-8 transition-all duration-300">
          {/* Theme Toggle */}
          <div className="flex justify-end mb-6">
            <button
              onClick={toggleTheme}
              className={`p-3 rounded-full transition-all duration-300 ${
                theme === 'dark' 
                  ? 'bg-yellow-400/20 hover:bg-yellow-400/30' 
                  : 'bg-indigo-500/20 hover:bg-indigo-500/30'
              }`}
            >
              {theme === 'dark' ? (
                <Sun className="w-5 h-5 text-yellow-400" />
              ) : (
                <Moon className="w-5 h-5 text-indigo-600" />
              )}
            </button>
          </div>

          {/* Format Selection */}
          <div className="flex gap-4 mb-6">
            <button
              onClick={() => setFormat('video')}
              className={`flex-1 py-4 rounded-2xl font-semibold transition-all duration-300 ${
                format === 'video'
                  ? 'bg-gradient-to-r from-indigo-500 to-purple-500 text-white shadow-lg'
                  : theme === 'dark'
                  ? 'bg-white/5 text-gray-300 hover:bg-white/10'
                  : 'bg-gray-200 text-gray-700 hover:bg-gray-300'
              }`}
            >
              <Video className="w-5 h-5 inline mr-2" />
              Video
            </button>
            <button
              onClick={() => setFormat('audio')}
              className={`flex-1 py-4 rounded-2xl font-semibold transition-all duration-300 ${
                format === 'audio'
                  ? 'bg-gradient-to-r from-pink-500 to-rose-500 text-white shadow-lg'
                  : theme === 'dark'
                  ? 'bg-white/5 text-gray-300 hover:bg-white/10'
                  : 'bg-gray-200 text-gray-700 hover:bg-gray-300'
              }`}
            >
              <Music className="w-5 h-5 inline mr-2" />
              Audio
            </button>
          </div>

          {/* URL Input */}
          <div className="mb-6">
            <input
              type="text"
              value={url}
              onChange={(e) => setUrl(e.target.value)}
              placeholder="Paste YouTube URL here..."
              className={`w-full px-6 py-4 rounded-2xl transition-all duration-300 outline-none ${
                theme === 'dark'
                  ? 'bg-white/10 text-white placeholder-gray-400 focus:bg-white/15 border border-white/10 focus:border-indigo-400'
                  : 'bg-white text-gray-900 placeholder-gray-500 focus:bg-gray-50 border border-gray-300 focus:border-indigo-500'
              }`}
            />
          </div>

          {/* Quality Selection */}
          <div className="mb-6">
            <label className={`block mb-3 font-semibold ${textColor}`}>
              {format === 'video' ? 'Video Quality' : 'Audio Format'}
            </label>
            <div className="grid grid-cols-4 gap-3">
              {(format === 'video' ? qualities : audioFormats).map((q) => (
                <button
                  key={q}
                  onClick={() => setQuality(q)}
                  className={`py-3 rounded-xl font-medium transition-all duration-300 ${
                    quality === q
                      ? format === 'video'
                        ? 'bg-gradient-to-r from-indigo-500 to-purple-500 text-white shadow-lg scale-105'
                        : 'bg-gradient-to-r from-pink-500 to-rose-500 text-white shadow-lg scale-105'
                      : theme === 'dark'
                      ? 'bg-white/5 text-gray-300 hover:bg-white/10'
                      : 'bg-gray-200 text-gray-700 hover:bg-gray-300'
                  }`}
                >
                  {q}
                </button>
              ))}
            </div>
          </div>

          {/* Video Info */}
          {videoInfo && (
            <div className={`mb-6 p-4 rounded-2xl ${
              theme === 'dark' ? 'bg-white/5' : 'bg-gray-100'
            }`}>
              <div className="flex items-center gap-4">
                <img 
                  src={videoInfo.thumbnail} 
                  alt="Thumbnail" 
                  className="w-32 h-18 rounded-lg object-cover"
                />
                <div className="flex-1">
                  <h3 className={`font-semibold ${textColor}`}>{videoInfo.title}</h3>
                  <p className={`text-sm ${mutedColor}`}>Duration: {videoInfo.duration}</p>
                </div>
              </div>
            </div>
          )}

          {/* Progress Bar */}
          {isProcessing && (
            <div className="mb-6">
              <div className={`h-3 rounded-full overflow-hidden ${
                theme === 'dark' ? 'bg-white/10' : 'bg-gray-200'
              }`}>
                <div
                  className="h-full bg-gradient-to-r from-indigo-500 via-purple-500 to-pink-500 transition-all duration-300 relative overflow-hidden"
                  style={{ width: `${progress}%` }}
                >
                  <div className="absolute inset-0 bg-gradient-to-r from-transparent via-white/30 to-transparent animate-shimmer" />
                </div>
              </div>
              <p className={`text-center mt-2 ${mutedColor}`}>{progress}% Complete</p>
            </div>
          )}

          {/* Download Button */}
          <button
            onClick={handleDownload}
            disabled={isProcessing || !url.trim()}
            className={`w-full py-5 rounded-2xl font-bold text-lg transition-all duration-300 ${
              isProcessing || !url.trim()
                ? theme === 'dark'
                  ? 'bg-white/10 text-gray-500 cursor-not-allowed'
                  : 'bg-gray-300 text-gray-500 cursor-not-allowed'
                : 'bg-gradient-to-r from-indigo-500 via-purple-500 to-pink-500 text-white shadow-xl hover:shadow-2xl hover:scale-105 transform'
            }`}
          >
            <Download className="w-6 h-6 inline mr-2" />
            {isProcessing ? 'Processing...' : `Download ${format === 'video' ? 'Video' : 'Audio'}`}
          </button>

          {/* Ad Space Placeholder */}
          <div className={`mt-6 p-4 rounded-2xl text-center ${
            theme === 'dark' ? 'bg-white/5' : 'bg-gray-100'
          }`}>
            <p className={`text-sm ${mutedColor}`}>Advertisement Space</p>
          </div>
        </div>

        {/* Footer */}
        <div className={`text-center mt-8 ${mutedColor}`}>
          <p className="text-sm">Supports all major video platforms • Lightning fast downloads</p>
        </div>
      </div>

      <style>{`
        @keyframes shimmer {
          0% { transform: translateX(-100%); }
          100% { transform: translateX(100%); }
        }
        @keyframes fade-in {
          from { opacity: 0; transform: translateY(-20px); }
          to { opacity: 1; transform: translateY(0); }
        }
        .animate-shimmer {
          animation: shimmer 2s infinite;
        }
        .animate-fade-in {
          animation: fade-in 0.6s ease-out;
        }
      `}</style>
    </div>
  );
}