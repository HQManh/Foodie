// rea decompile_all
// name: _GAME.BaseGame.TimerManager$$IsCallbackTickDead
// address: 0x77dd5d4
// body: available
// range: 0x77dd5d4-0x77dd733 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77dd730 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint _GAME_BaseGame_TimerManager__IsCallbackTickDead(undefined4 param_1,long param_2)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_28;
  
  if ((DAT_09523034 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919daa8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918be20);
    DAT_09523034 = 1;
  }
  local_28 = 0;
  if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar4 = *(long *)(*(long *)(DAT_0918be20 + 0xb8) + 0x18);
  if (lVar4 != 0) {
    if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar4 = *(long *)(*(long *)(DAT_0918be20 + 0xb8) + 0x18);
      if (lVar4 == 0) goto LAB_077dd730;
    }
    uVar3 = FUN_06ef1fe8(lVar4,param_1,&local_28,DAT_0919daa8);
    uVar1 = local_28;
    if ((uVar3 & 1) != 0) {
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Equality(uVar1,0,0);
      if ((uVar3 & 1) != 0) {
        uVar2 = 1;
        goto LAB_077dd6fc;
      }
    }
  }
  if (param_2 == 0) {
LAB_077dd730:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar5 = *(long **)(param_2 + 0x20);
  if (plVar5 != (long *)0x0) {
    if ((*(byte *)(DAT_09188ad0 + 0x130) <= *(byte *)(*plVar5 + 0x130)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(DAT_09188ad0 + 0x130) * 8 + -8) ==
        DAT_09188ad0)) {
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Equality(plVar5,0,0);
      goto LAB_077dd6fc;
    }
  }
  uVar2 = 0;
LAB_077dd6fc:
  return uVar2 & 1;
}

