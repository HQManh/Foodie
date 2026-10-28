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
			// TODO(unrecovered): the AudioSource is taken from queueInActive or created under TF through an unrecovered helper (FUN_04a6c0f4), then registered with CakeOrder.AudioManagerCakeOrder (not in the stubs).
			return null;
		}

		private IEnumerator IEDespawn(AudioSource element)
		{
			if (element == null || element.clip == null)
			{
				throw new NullReferenceException();
			}
			yield return new WaitForSeconds(element.clip.length);
			if (element == null)
			{
				throw new NullReferenceException();
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
