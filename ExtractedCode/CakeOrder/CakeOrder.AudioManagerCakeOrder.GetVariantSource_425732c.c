// rea decompile_all
// name: CakeOrder.AudioManagerCakeOrder$$GetVariantSource
// address: 0x425732c
// body: available
// range: 0x425732c-0x425751b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4257518 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_AudioManagerCakeOrder__GetVariantSource(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined4 uVar7;
  
  if ((DAT_09516f23 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cd5c8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516f23 = 1;
  }
  lVar2 = CakeOrder_AudioManagerCakeOrder__GetBus(param_1,param_2);
  lVar4 = 0;
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)(lVar2 + 0x18);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Equality(uVar5,0,0);
    lVar4 = 0;
    if ((uVar3 & 1) == 0) {
      plVar6 = (long *)(lVar2 + 0x20);
      lVar4 = *plVar6;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Equality(lVar4,0,0);
      if ((uVar3 & 1) != 0) {
        if ((*(long *)(lVar2 + 0x18) == 0) ||
           (lVar4 = UnityEngine_Component__get_gameObject(*(long *)(lVar2 + 0x18),0), lVar4 == 0)) {
LAB_04257518:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar5 = FUN_04b7c294(lVar4,DAT_091cd5c8);
        *(undefined8 *)(lVar2 + 0x20) = uVar5;
        thunk_FUN_03f5d7b8(plVar6,uVar5);
        if (*(long *)(lVar2 + 0x18) == 0) goto LAB_04257518;
        lVar4 = *(long *)(lVar2 + 0x20);
        uVar5 = UnityEngine_AudioSource__get_outputAudioMixerGroup(*(long *)(lVar2 + 0x18),0);
        if (lVar4 == 0) goto LAB_04257518;
        UnityEngine_AudioSource__set_outputAudioMixerGroup(lVar4,uVar5,0);
        if (*plVar6 == 0) goto LAB_04257518;
        UnityEngine_AudioSource__set_playOnAwake(*plVar6,0,0);
        if (*plVar6 == 0) goto LAB_04257518;
        UnityEngine_AudioSource__set_loop(*plVar6,0,0);
        if (*(long *)(lVar2 + 0x18) == 0) goto LAB_04257518;
        lVar4 = *(long *)(lVar2 + 0x20);
        UnityEngine_AudioSource__get_spatialBlend(*(long *)(lVar2 + 0x18),0);
        if (lVar4 == 0) goto LAB_04257518;
        UnityEngine_AudioSource__set_spatialBlend(lVar4,0);
        uVar7 = 0x3f800000;
        if (param_2 < 5) {
          if ((param_2 == 2) || (param_2 == 4)) {
            uVar7 = *(undefined4 *)(param_1 + 0xa0);
          }
        }
        else if (param_2 == 6) {
          uVar7 = *(undefined4 *)(param_1 + 0xa8);
        }
        else if (param_2 == 5) {
          uVar7 = *(undefined4 *)(param_1 + 0xa4);
        }
        if (*plVar6 == 0) goto LAB_04257518;
        UnityEngine_AudioSource__SetPitch(uVar7,*plVar6,0);
        if (*(long *)(lVar2 + 0x18) == 0) goto LAB_04257518;
        lVar4 = *(long *)(lVar2 + 0x20);
        uVar1 = UnityEngine_AudioSource__get_bypassListenerEffects(*(long *)(lVar2 + 0x18),0);
        if (lVar4 == 0) goto LAB_04257518;
        UnityEngine_AudioSource__set_bypassListenerEffects(lVar4,uVar1 & 1,0);
      }
      lVar4 = *plVar6;
    }
  }
  return lVar4;
}

