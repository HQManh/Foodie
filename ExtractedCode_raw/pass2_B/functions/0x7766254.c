// rea decompile_all
// name: _GAME.Bridge.R1RewardMap$$R1ItemSprite
// address: 0x7766254
// body: available
// range: 0x7766254-0x7766467 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7766464 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _GAME_Bridge_R1RewardMap__R1ItemSprite(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if ((DAT_09522c6b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cdaf8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918a4d8);
    FUN_03f5c2a4(&DAT_091ba5d0);
    DAT_09522c6b = 1;
  }
  lVar3 = *(long *)(DAT_091ba5d0 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  uVar5 = **(undefined8 **)(lVar3 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar4 = UnityEngine_Object__op_Equality(uVar5,0,0);
  if ((uVar4 & 1) != 0) {
    return 0;
  }
  if (param_1 == 0) goto LAB_07766464;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0x34) {
    uVar2 = *(undefined4 *)(param_1 + 0x14);
    if (*(int *)(DAT_0918a4d8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar3 = _GAME_Profile_SOProfileConfig__GetNameFx(uVar2,0);
    if (lVar3 == 0) {
LAB_077663d0:
      lVar3 = 0;
    }
    else {
      lVar3 = UnityEngine_Component__get_gameObject(lVar3,0);
    }
  }
  else if (iVar1 == 0x33) {
    uVar2 = *(undefined4 *)(param_1 + 0x14);
    if (*(int *)(DAT_0918a4d8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar3 = _GAME_Profile_SOProfileConfig__GetFrame(uVar2,0);
  }
  else {
    if (iVar1 != 0x32) goto LAB_077663d0;
    uVar2 = *(undefined4 *)(param_1 + 0x14);
    if (*(int *)(DAT_0918a4d8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar3 = _GAME_Profile_SOProfileConfig__GetAvatar(uVar2,0);
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Equality(lVar3,0,0);
  uVar5 = 0;
  if ((uVar4 & 1) == 0) {
    if (lVar3 == 0) {
LAB_07766464:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550(0);
    }
    lVar3 = FUN_04b7c6fc(lVar3,1,DAT_091cdaf8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar4 = UnityEngine_Object__op_Inequality(lVar3,0,0);
    uVar5 = 0;
    if ((uVar4 & 1) != 0) {
      if (lVar3 == 0) goto LAB_07766464;
      uVar5 = *(undefined8 *)(lVar3 + 0xd8);
    }
  }
  return uVar5;
}

