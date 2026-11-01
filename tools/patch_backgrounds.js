// Rebuilds the stubbed InGameSingleBackground / InGameBackgroundsControl behaviour (weather change, tint, show/hide).
const fs = require('fs');
const base = 'D:/Unity/Foodie/UnityProject/Assets/Plugins/CakeOrder/CakeOrder.InGame/';
function edit(file, fn) {
  const p = base + file;
  let s = fs.readFileSync(p, 'utf8');
  const crlf = s.includes('\r\n');
  s = s.split('\r\n').join('\n');
  s = fn(s);
  fs.writeFileSync(p, crlf ? s.split('\n').join('\r\n') : s);
}
function between(s, startMarker, endMarker, replacement) {
  const a = s.indexOf(startMarker);
  if (a < 0) throw new Error('start not found: ' + startMarker.slice(0, 60));
  const b = s.indexOf(endMarker, a);
  if (b < 0) throw new Error('end not found: ' + endMarker.slice(0, 60));
  return s.slice(0, a) + replacement + s.slice(b);
}

edit('InGameSingleBackground.cs', s => {
  const methods = `	// Rebuilt: tint multiplies the original sprite colours; show/hide fade the sprites and toggle the object.
	private const float FadeDuration = 0.5f;

	private SpriteRenderer[] Renderers()
	{
		if (_spriteRenderers == null || _spriteRenderers.Length == 0)
		{
			_spriteRenderers = GetComponentsInChildren<SpriteRenderer>(true);
		}
		return _spriteRenderers;
	}

	private void CaptureOrigins()
	{
		SpriteRenderer[] renderers = Renderers();
		if (_originColorBackgroundSpriteRenderers != null && _originColorBackgroundSpriteRenderers.Length == renderers.Length) return;
		_originColorBackgroundSpriteRenderers = new Color[renderers.Length];
		for (int i = 0; i < renderers.Length; i++)
		{
			_originColorBackgroundSpriteRenderers[i] = renderers[i] != null ? renderers[i].color : Color.white;
		}
	}

	private void ApplyColors(Color tint, float alpha)
	{
		CaptureOrigins();
		SpriteRenderer[] renderers = Renderers();
		for (int i = 0; i < renderers.Length; i++)
		{
			if (renderers[i] == null) continue;
			Color origin = _originColorBackgroundSpriteRenderers[i];
			renderers[i].color = new Color(origin.r * tint.r, origin.g * tint.g, origin.b * tint.b, origin.a * alpha);
		}
	}

	public void Initialize(SharedData sharedData, Color initTintColor)
	{
		_sharedData = sharedData;
		_currentTint = initTintColor;
		CaptureOrigins();
		InternalSetTintImmediate();
	}

	public void SetIntensity(float value)
	{
		foreach (ParticleSystem particles in GetComponentsInChildren<ParticleSystem>(true))
		{
			ParticleSystem.EmissionModule emission = particles.emission;
			emission.rateOverTimeMultiplier = value;
		}
	}

	public void Show(TweenCallback onDoneAnim = null)
	{
		_isShowing = true;
		gameObject.SetActive(true);
		_tintColorTween?.Kill();
		float alpha = 0f;
		_tintColorTween = DOTween.To(() => alpha, v => { alpha = v; ApplyColors(_currentTint, alpha); }, 1f, FadeDuration).SetTarget(this).OnComplete(() => onDoneAnim?.Invoke());
		eventShow?.Invoke();
	}

	public void Hide(TweenCallback onDoneAnim = null)
	{
		_isShowing = false;
		_tintColorTween?.Kill();
		float alpha = 1f;
		_tintColorTween = DOTween.To(() => alpha, v => { alpha = v; ApplyColors(_currentTint, alpha); }, 0f, FadeDuration).SetTarget(this).OnComplete(() =>
		{
			if (!_isShowing) gameObject.SetActive(false);
			onDoneAnim?.Invoke();
		});
		eventHide?.Invoke();
	}

	public void HideImmediate()
	{
		_isShowing = false;
		_tintColorTween?.Kill();
		gameObject.SetActive(false);
		eventHide?.Invoke();
	}

	public void ShowImmediate()
	{
		_isShowing = true;
		_tintColorTween?.Kill();
		gameObject.SetActive(true);
		InternalSetTintImmediate();
		OnShow();
		eventShow?.Invoke();
	}

	private void OnShow()
	{
		ApplyColors(_currentTint, 1f);
	}

	public void ChangeTintColor(Color tint, float delay = 0f, float duration = -1f, TweenCallback onDoneAnim = null)
	{
		_currentTint = tint;
		InternalChangeTintColor(delay, duration, onDoneAnim);
	}

	public void SetTintColorImmediate(Color tint)
	{
		_currentTint = tint;
		InternalSetTintImmediate();
	}

	private void InternalChangeTintColor(float delay, float duration, TweenCallback onDoneAnim)
	{
		CaptureOrigins();
		if (!gameObject.activeInHierarchy)
		{
			InternalSetTintImmediate();
			onDoneAnim?.Invoke();
			return;
		}
		_tintColorTween?.Kill();
		SpriteRenderer[] renderers = Renderers();
		Color[] from = new Color[renderers.Length];
		for (int i = 0; i < renderers.Length; i++) from[i] = renderers[i] != null ? renderers[i].color : Color.white;
		float t = 0f;
		float length = duration < 0f ? (defaultDurationTweenTint > 0f ? defaultDurationTweenTint : 0.3f) : duration;
		Color target = _currentTint;
		_tintColorTween = DOTween.To(() => t, v =>
		{
			t = v;
			for (int i = 0; i < renderers.Length; i++)
			{
				if (renderers[i] == null) continue;
				Color origin = _originColorBackgroundSpriteRenderers[i];
				Color to = new Color(origin.r * target.r, origin.g * target.g, origin.b * target.b, origin.a);
				renderers[i].color = Color.Lerp(from[i], to, t);
			}
		}, 1f, length).SetDelay(delay).SetTarget(this).OnComplete(() => onDoneAnim?.Invoke());
	}

	private void InternalSetTintImmediate()
	{
		_tintColorTween?.Kill();
		ApplyColors(_currentTint, 1f);
	}

	private void OnDestroy()
	{
		_tintColorTween?.Kill();
		DOTween.Kill(this);
	}
}
}
`;
  const a = s.indexOf('\tpublic void Initialize(SharedData sharedData, Color initTintColor)');
  if (a < 0) throw new Error('Initialize not found');
  return s.slice(0, a) + methods;
});

edit('InGameBackgroundsControl.cs', s => {
  // BackgroundConfigByWeather: show/hide
  s = between(s, '\t\t[AsyncStateMachine(typeof(_003CShowEffectsAsync_003Ed__8))]\n\t\tpublic UniTask ShowEffectsAsync', '\t}\n\n\t[StructLayout(LayoutKind.Auto)]', `\t\t// Rebuilt: loads the weather prefab through Addressables (once), parents it under the container and fades it in.
\t\tpublic async UniTask ShowEffectsAsync(InGameSingleBackground.SharedData sharedData, Transform container, Color initialTint, CancellationToken token)
\t\t{
\t\t\tif (spawnedBackgroundControl == null)
\t\t\t{
\t\t\t\tif (assetBackgroundControl == null || !assetBackgroundControl.RuntimeKeyIsValid()) return;
\t\t\t\topLoad = assetBackgroundControl.LoadAssetAsync<GameObject>();
\t\t\t\tawait opLoad.Task;
\t\t\t\tif (token.IsCancellationRequested || opLoad.Result == null) return;
\t\t\t\tGameObject instance = UnityEngine.Object.Instantiate(opLoad.Result, container);
\t\t\t\tspawnedBackgroundControl = instance.GetComponent<InGameSingleBackground>();
\t\t\t\tif (spawnedBackgroundControl == null) return;
\t\t\t\tspawnedBackgroundControl.Initialize(sharedData, initialTint);
\t\t\t}
\t\t\tisShowing = true;
\t\t\tspawnedBackgroundControl.ChangeTintColor(initialTint, 0f, 0f);
\t\t\tspawnedBackgroundControl.Show();
\t\t}

\t\tpublic void HideEffects()
\t\t{
\t\t\tisShowing = false;
\t\t\tif (spawnedBackgroundControl != null) spawnedBackgroundControl.Hide();
\t\t}

\t\tpublic void HideEffectsImmediate()
\t\t{
\t\t\tisShowing = false;
\t\t\tif (spawnedBackgroundControl != null) spawnedBackgroundControl.HideImmediate();
\t\t}
`);
  // SetUp / ChangeWeather / tint / OnDestroy
  const a = s.indexOf('\t// Rebuilt: loads the prefab configured for the weather');
  if (a < 0) throw new Error('SetUp marker not found');
  return s.slice(0, a) + `\t// Rebuilt: the background of the level's weather is shown under the background container; weather changes cross-fade to another prefab.
\tprivate BackgroundConfigByWeather ConfigFor(WeatherEffect weather)
\t{
\t\tif (_configByWeathers == null) return null;
\t\tforeach (BackgroundConfigByWeather c in _configByWeathers)
\t\t{
\t\t\tif (c != null && c.weatherType == weather) return c;
\t\t}
\t\treturn _configByWeathers.Length > 0 ? _configByWeathers[0] : null;
\t}

\tprivate Transform BackgroundParent()
\t{
\t\treturn _sharedData != null && _sharedData.backgroundContainer != null ? _sharedData.backgroundContainer : transform;
\t}

\tpublic async UniTask SetUp(WeatherEffect initWeatherEffect)
\t{
\t\tCurrentWeather = initWeatherEffect;
\t\t_weatherLoadCts?.Cancel();
\t\t_weatherLoadCts = new CancellationTokenSource();
\t\t_currentTintBg = Color.white;
\t\t_currentTintTool = Color.white;
\t\tBackgroundConfigByWeather config = ConfigFor(initWeatherEffect);
\t\tif (config == null) return;
\t\t_currentWeatherTintSharedBgr = config.tintSharedBgr;
\t\t_currentWeatherTintTool = config.tintTool;
\t\tawait config.ShowEffectsAsync(_sharedData, BackgroundParent(), config.tintSharedBgr * _currentTintBg, _weatherLoadCts.Token);
\t\tApplySharedTints(0f);
\t}

\tprivate void ApplySharedTints(float duration)
\t{
\t\tif (_sharedBackground != null) _sharedBackground.ChangeTintColor(_currentWeatherTintSharedBgr * _currentTintBg, 0f, duration);
\t\tif (_toolSprites != null) _toolSprites.ChangeTintColor(_currentWeatherTintTool * _currentTintTool, 0f, duration);
\t}

\tprivate void OnDestroy()
\t{
\t\t_weatherLoadCts?.Cancel();
\t\t_weatherLoadCts?.Dispose();
\t\tif (_configByWeathers == null) return;
\t\tforeach (BackgroundConfigByWeather c in _configByWeathers)
\t\t{
\t\t\tif (c != null && c.opLoad.IsValid()) Addressables.Release(c.opLoad);
\t\t}
\t}

\tpublic async UniTask ChangeWeather(WeatherEffect weatherEffect)
\t{
\t\tif (weatherEffect == CurrentWeather) return;
\t\tBackgroundConfigByWeather next = ConfigFor(weatherEffect);
\t\tBackgroundConfigByWeather previous = ConfigFor(CurrentWeather);
\t\tCurrentWeather = weatherEffect;
\t\tif (next == null) return;
\t\t_weatherLoadCts?.Cancel();
\t\t_weatherLoadCts = new CancellationTokenSource();
\t\tif (previous != null && previous != next) previous.HideEffects();
\t\t_currentWeatherTintSharedBgr = next.tintSharedBgr;
\t\t_currentWeatherTintTool = next.tintTool;
\t\tawait next.ShowEffectsAsync(_sharedData, BackgroundParent(), next.tintSharedBgr * _currentTintBg, _weatherLoadCts.Token);
\t\tApplySharedTints(0.5f);
\t}

\tprivate void ApplyBackgroundTint(float duration)
\t{
\t\tBackgroundConfigByWeather config = ConfigFor(CurrentWeather);
\t\tif (config != null && config.spawnedBackgroundControl != null)
\t\t{
\t\t\tconfig.spawnedBackgroundControl.ChangeTintColor(config.tintSharedBgr * _currentTintBg, 0f, duration);
\t\t}
\t\tif (_sharedBackground != null) _sharedBackground.ChangeTintColor(_currentWeatherTintSharedBgr * _currentTintBg, 0f, duration);
\t}

\tpublic void ChangeTintColorAll(Color tint)
\t{
\t\t_currentTintBg = tint;
\t\t_currentTintTool = tint;
\t\tApplyBackgroundTint(-1f);
\t\tif (_toolSprites != null) _toolSprites.ChangeTintColor(_currentWeatherTintTool * _currentTintTool, 0f, -1f);
\t}

\tpublic void ChangeTintColorBg(Color tint)
\t{
\t\t_currentTintBg = tint;
\t\tApplyBackgroundTint(-1f);
\t}

\tpublic void ChangeTintColorTool(Color tint)
\t{
\t\t_currentTintTool = tint;
\t\tif (_toolSprites != null) _toolSprites.ChangeTintColor(_currentWeatherTintTool * _currentTintTool, 0f, -1f);
\t}
}
}
`;
});
