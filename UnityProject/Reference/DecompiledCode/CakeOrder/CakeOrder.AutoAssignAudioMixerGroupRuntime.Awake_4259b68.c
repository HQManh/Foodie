// rea decompile_all
// name: CakeOrder.AutoAssignAudioMixerGroupRuntime$$Awake
// address: 0x4259b68
// body: available
// range: 0x4259b68-0x4259cf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4259cec to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4259cf0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_AutoAssignAudioMixerGroupRuntime__Awake(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  
  if ((DAT_09516f3a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5800);
    FUN_03f5c2a4(&DAT_091b48d0);
    FUN_03f5c2a4(&DAT_091b48d8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516f3a = 1;
  }
  plVar6 = (long *)(param_1 + 0x20);
  lVar4 = *plVar6;
  if ((lVar4 == 0) || (*(long *)(lVar4 + 0x18) == 0)) {
    uVar1 = FUN_04a6ac70(param_1,1,DAT_091c5800);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    thunk_FUN_03f5d7b8(plVar6,uVar1);
    lVar4 = *(long *)(param_1 + 0x20);
    if (lVar4 == 0) {
      return;
    }
  }
  if ((*(long *)(lVar4 + 0x18) != 0) && (uVar2 = FUN_05a8eda4(DAT_091b48d8), (uVar2 & 1) != 0)) {
    lVar4 = *plVar6;
    if (lVar4 == 0) {
LAB_04259cf0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
      uVar2 = 0;
      uVar5 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
      do {
        if (uVar5 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        uVar1 = *(undefined8 *)(lVar4 + 0x20 + uVar2 * 8);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = UnityEngine_Object__op_Equality(uVar1,0,0);
        if ((uVar5 & 1) == 0) {
          lVar3 = *(long *)(DAT_091b48d0 + 0x20);
          if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_03f95a6c();
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_03f95a6c();
          }
          if (**(long **)(lVar3 + 0xb8) == 0) goto LAB_04259cf0;
          CakeOrder_AudioManagerCakeOrder__RegisterAudioSource
                    (**(long **)(lVar3 + 0xb8),uVar1,*(undefined4 *)(param_1 + 0x28));
        }
        uVar5 = (ulong)*(uint *)(lVar4 + 0x18);
        uVar2 = uVar2 + 1;
      } while ((long)uVar2 < (long)(int)*(uint *)(lVar4 + 0x18));
    }
  }
  return;
}

