// rea decompile_all
// name: CakeOrder.AudioManagerCakeOrder$$ApplyDeviceTierSnapshot
// address: 0x4256174
// body: available
// range: 0x4256174-0x42563e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42563ac to 0x85f7650 UnityEngine.Debug$$LogWarning (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42563dc to 0x85e07ec UnityEngine.Audio.AudioMixerSnapshot$$TransitionTo (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42563e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42563e4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_AudioManagerCakeOrder__ApplyDeviceTierSnapshot(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((DAT_09516f27 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_09213b18);
    FUN_03f5c2a4(&DAT_091f75f8);
    FUN_03f5c2a4(&DAT_0920d438);
    FUN_03f5c2a4(&DAT_091f7b58);
    FUN_03f5c2a4(&DAT_0920d440);
    DAT_09516f27 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar5,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  uVar2 = Utilities_DeviceTier__get_IsHighEnd(0);
  puVar1 = &DAT_0920d438;
  if ((uVar2 & 1) == 0) {
    puVar1 = &DAT_0920d440;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar5 = *puVar1;
    lVar3 = UnityEngine_Audio_AudioMixer__FindSnapshot(*(long *)(param_1 + 0x20),uVar5,0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar2 = UnityEngine_Object__op_Equality(lVar3,0,0);
    if ((uVar2 & 1) == 0) {
      if (lVar3 != 0) {
        UnityEngine_Audio_AudioMixerSnapshot__TransitionTo(0,lVar3,0);
        return;
      }
    }
    else {
      lVar3 = FUN_03f5c394(DAT_091805f8,5);
      if (lVar3 != 0) {
        if (*(int *)(lVar3 + 0x18) != 0) {
          *(undefined8 *)(lVar3 + 0x20) = DAT_09213b18;
          thunk_FUN_03f5d7b8();
          if (*(long *)(param_1 + 0x20) == 0) goto LAB_042563e0;
          uVar4 = UnityEngine_Object__GetName(*(long *)(param_1 + 0x20),0);
          if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
            *(undefined8 *)(lVar3 + 0x28) = uVar4;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x28),uVar4);
            if (2 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x30) = DAT_091f75f8;
              thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x30));
              if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
                *(undefined8 *)(lVar3 + 0x38) = uVar5;
                thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x38),uVar5);
                if (4 < *(uint *)(lVar3 + 0x18)) {
                  *(undefined8 *)(lVar3 + 0x40) = DAT_091f7b58;
                  thunk_FUN_03f5d7b8();
                  uVar5 = System_String__Concat(lVar3,0);
                  uVar4 = *(undefined8 *)(param_1 + 0x20);
                  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                    FUN_03f5c424(DAT_091835d0);
                  }
                  UnityEngine_Debug__LogWarning(uVar5,uVar4,0);
                  return;
                }
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
    }
  }
LAB_042563e0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

