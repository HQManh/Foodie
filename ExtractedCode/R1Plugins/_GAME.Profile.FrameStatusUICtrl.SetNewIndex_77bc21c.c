// rea decompile_all
// name: _GAME.Profile.FrameStatusUICtrl$$SetNewIndex
// address: 0x77bc21c
// body: available
// range: 0x77bc21c-0x77bc59b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77bc570 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Profile_FrameStatusUICtrl__SetNewIndex(long param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  long local_48;
  
  if ((DAT_09522ef1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d7c8);
    FUN_03f5c2a4(&DAT_0919d7d8);
    FUN_03f5c2a4(&DAT_0919d7e0);
    FUN_03f5c2a4(&DAT_091d4bc0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918a4d8);
    DAT_09522ef1 = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  local_48 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Equality(uVar7,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  plVar8 = (long *)(param_1 + 0x48);
  lVar10 = *plVar8;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Inequality(lVar10,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(long *)(param_1 + 0x50) == 0) goto LAB_077bc570;
    uVar4 = FUN_06ef0700(*(long *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x20),DAT_0919d7c8);
    if ((uVar4 & 1) == 0) {
      if (*(long *)(param_1 + 0x50) == 0) goto LAB_077bc570;
      FUN_06ef04f8(*(long *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x20),
                   *(undefined8 *)(param_1 + 0x48),DAT_0919d7e0);
    }
  }
  *(undefined4 *)(param_1 + 0x20) = param_2;
  if (*(long *)(param_1 + 0x50) == 0) goto LAB_077bc570;
  uVar4 = FUN_06ef1fe8(*(long *)(param_1 + 0x50),param_2,&local_48,DAT_0919d7d8);
  lVar10 = local_48;
  if ((uVar4 & 1) == 0) {
LAB_077bc384:
    if (*(int *)(DAT_0918a4d8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = _GAME_Profile_SOProfileConfig__GetFrame(param_2);
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    local_48 = FUN_04c35338(uVar7,uVar11,DAT_091d4bc0);
    if (local_48 == 0) goto LAB_077bc570;
    lVar10 = UnityEngine_GameObject__get_transform(local_48,0);
    if (DAT_09515ce6 == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      DAT_09515ce6 = '\x01';
    }
    if (lVar10 == 0) goto LAB_077bc570;
    puVar5 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
    UnityEngine_Transform__set_localPosition(*puVar5,puVar5[1],puVar5[2],lVar10,0);
    if (local_48 == 0) goto LAB_077bc570;
    lVar10 = UnityEngine_GameObject__get_transform(local_48,0);
    if (DAT_09515cf3 == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      DAT_09515cf3 = '\x01';
    }
    if (lVar10 == 0) goto LAB_077bc570;
    lVar6 = *(long *)(DAT_0918cbd0 + 0xb8);
    UnityEngine_Transform__set_localScale
              (*(undefined4 *)(lVar6 + 0xc),*(undefined4 *)(lVar6 + 0x10),
               *(undefined4 *)(lVar6 + 0x14),lVar10,0);
    if (*(long *)(param_1 + 0x50) == 0) goto LAB_077bc570;
    FUN_06ef04f8(*(long *)(param_1 + 0x50),param_2,local_48,DAT_0919d7e0);
  }
  else {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Equality(lVar10,0,0);
    if ((uVar4 & 1) != 0) goto LAB_077bc384;
  }
  lVar10 = *(long *)(param_1 + 0x28);
  if (lVar10 != 0) {
    iVar9 = 0;
    do {
      iVar1 = UnityEngine_Transform__get_childCount(lVar10,0);
      if (iVar1 <= iVar9) {
        *plVar8 = local_48;
        thunk_FUN_03f5d7b8(plVar8);
        return;
      }
      if (((*(long *)(param_1 + 0x28) == 0) ||
          (lVar10 = UnityEngine_Transform__GetChild(*(long *)(param_1 + 0x28),iVar9,0), lVar10 == 0)
          ) || (lVar10 = UnityEngine_Component__get_gameObject(lVar10,0), lVar10 == 0)) break;
      uVar2 = UnityEngine_GameObject__get_activeSelf(lVar10,0);
      lVar6 = local_48;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar3 = UnityEngine_Object__op_Equality(lVar10,lVar6,0);
      lVar6 = local_48;
      if ((uVar2 & 1) != (uVar3 & 1)) {
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Equality(lVar10,lVar6,0);
        UnityEngine_GameObject__SetActive(lVar10,uVar2 & 1,0);
      }
      lVar10 = *(long *)(param_1 + 0x28);
      iVar9 = iVar9 + 1;
    } while (lVar10 != 0);
  }
LAB_077bc570:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

