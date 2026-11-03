using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CakeOrder;
using UnityEngine;
using Utilities;

namespace TrungKienPack
{
	public class TKAudioManager : MonoSingleton<TKAudioManager>
	{
		private Transform tf;

		[SerializeField]
		private AudioManagerCakeOrder.AudioTrack audioTrack = (AudioManagerCakeOrder.AudioTrack)4;

		private Queue<AudioSource> queueInActive = new Queue<AudioSource>();

		private HashSet<AudioSource> hstActive = new HashSet<AudioSource>();

		public Transform TF
		{
			get
			{
				if (tf == null)
				{
					tf = transform;
				}
				return tf;
			}
		}

		public AudioSource Play(AudioClip sfx, float volume = 1f, bool loop = false)
		{
			if (sfx == null)
			{
				return null;
			}
			AudioSource source = null;
			while (source == null && queueInActive.Count > 0)
			{
				source = queueInActive.Dequeue();
			}
			if (source == null)
			{
				GameObject host = new GameObject("TKAudioSource");
				host.transform.SetParent(TF, false);
				source = host.AddComponent<AudioSource>();
				source.playOnAwake = false;
				if (MonoSingleton<AudioManagerCakeOrder>.HasInstance)
				{
					MonoSingleton<AudioManagerCakeOrder>.Instance.RegisterAudioSource(source, audioTrack);
				}
			}
			source.clip = sfx;
			source.volume = volume;
			source.loop = loop;
			source.Play();
			hstActive.Add(source);
			if (!loop)
			{
				StartCoroutine(IEDespawn(source));
			}
			return source;
		}

		private IEnumerator IEDespawn(AudioSource element)
		{
			if (element == null || element.clip == null)
			{
				yield break;
			}
			yield return new WaitForSeconds(element.clip.length);
			if (element == null)
			{
				yield break;
			}
			DeSpawn(element);
		}

		public void DeSpawn(AudioSource element)
		{
			if (element == null)
			{
				return;
			}
			if (hstActive == null || queueInActive == null)
			{
				return;
			}
			hstActive.Remove(element);
			queueInActive.Enqueue(element);
		}
	}
}
