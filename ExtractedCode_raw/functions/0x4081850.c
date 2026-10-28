// rea decompile_all
// name: CakeOrder.InGame.Pasta.PastaSpineSfxPlayer$$StartAudio
// address: 0x4081850
// body: available
// range: 0x4081850-0x4081aa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4081a8c to 0x85db65c UnityEngine.AudioSource$$Pause (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4081aa4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_Pasta_PastaSpineSfxPlayer__StartAudio(float param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  if ((DAT_09515c6f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c52e8);
    FUN_03f5c2a4(&DAT_091b48d0);
    FUN_03f5c2a4(&DAT_091b48d8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09515c6f = 1;
  }
  *(undefined8 *)(param_2 + 0x28) = 0;
  thunk_FUN_03f5d7b8((undefined8 *)(param_2 + 0x28),0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(param_3,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (param_3 != 0) {
    fVar5 = (float)UnityEngine_AudioClip__get_length(param_3,0);
    if (fVar5 <= param_1) {
      return;
    }
    plVar3 = (long *)(param_2 + 0x20);
    lVar4 = *plVar3;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(lVar4,0);
    if ((uVar1 & 1) == 0) {
      uVar2 = FUN_04a6a14c(param_2,DAT_091c52e8);
      *(undefined8 *)(param_2 + 0x20) = uVar2;
      thunk_FUN_03f5d7b8(plVar3,uVar2);
    }
    uVar1 = FUN_05a8eda4(DAT_091b48d8);
    if ((uVar1 & 1) != 0) {
      lVar4 = *(long *)(DAT_091b48d0 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      if (**(long **)(lVar4 + 0xb8) == 0) goto LAB_04081aa4;
      CakeOrder_AudioManagerCakeOrder__RegisterAudioSource(**(long **)(lVar4 + 0xb8),*plVar3,5,0);
    }
    *(long *)(param_2 + 0x30) = param_3;
    thunk_FUN_03f5d7b8((long *)(param_2 + 0x30),param_3);
    if (*(long *)(param_2 + 0x20) != 0) {
      UnityEngine_AudioSource__Stop(*(long *)(param_2 + 0x20),0);
      if (*plVar3 != 0) {
        UnityEngine_AudioSource__set_generatorObject(*plVar3,param_3,0);
        lVar4 = *(long *)(param_2 + 0x20);
        CakeOrder_InGame_Pasta_PastaSpineSfxPlayer__GetAudioRate(param_2);
        if (lVar4 != 0) {
          UnityEngine_AudioSource__SetPitch(lVar4,0);
          lVar4 = *plVar3;
          fVar5 = (float)UnityEngine_AudioClip__get_length(param_3,0);
          if (lVar4 != 0) {
            fVar6 = 0.0;
            if (0.0 <= fVar5 + -0.001) {
              fVar6 = fVar5 + -0.001;
            }
            if (param_1 <= fVar6) {
              fVar6 = param_1;
            }
            fVar5 = 0.0;
            if (0.0 <= param_1) {
              fVar5 = fVar6;
            }
            UnityEngine_AudioSource__set_time(fVar5,lVar4,0);
            if (*plVar3 != 0) {
              UnityEngine_AudioSource__Play(*plVar3,0);
              if (*(char *)(param_2 + 0x3c) == '\0') {
                return;
              }
              *(undefined1 *)(param_2 + 0x3d) = 1;
              if (*(long *)(param_2 + 0x20) != 0) {
                UnityEngine_AudioSource__Pause(*(long *)(param_2 + 0x20),0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_04081aa4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

