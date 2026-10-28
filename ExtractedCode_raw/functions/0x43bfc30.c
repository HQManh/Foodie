// rea decompile_all
// name: ChocDino.UIFX.FilterStackTextMeshPro$$UpdateClipParent
// address: 0x43bfc30
// body: available
// range: 0x43bfc30-0x43bfc33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_FilterStackTextMeshPro__UpdateClipParent(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if ((DAT_09517b72 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5520);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517b72 = 1;
  }
  plVar2 = param_1 + 6;
  lVar3 = *plVar2;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Equality(lVar3,0,0);
  if ((uVar1 & 1) != 0) {
    lVar3 = FUN_04a6a14c(param_1,DAT_091c5520);
    param_1[6] = lVar3;
    thunk_FUN_03f5d7b8(plVar2,lVar3);
  }
  plVar2 = (long *)*plVar2;
  if (plVar2 == (long *)0x0) goto LAB_043bb8e4;
  if ((char)plVar2[0x17] == '\0') {
LAB_043bb808:
    lVar3 = 0;
  }
  else {
    uVar1 = (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
    if ((uVar1 & 1) == 0) goto LAB_043bb808;
    uVar1 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
    if ((uVar1 & 1) == 0) goto LAB_043bb808;
    lVar3 = UnityEngine_UI_MaskUtilities__GetRectMaskForClippable(param_1,0);
  }
  lVar4 = param_1[0x2d];
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Inequality(lVar3,lVar4,0);
  if ((uVar1 & 1) != 0) {
    lVar4 = param_1[0x2d];
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Inequality(lVar4,0,0);
    if ((uVar1 & 1) != 0) {
      if (param_1[0x2d] == 0) goto LAB_043bb8e4;
      UnityEngine_UI_RectMask2D__RemoveClippable(param_1[0x2d],param_1,0);
      param_1[0x2d] = 0;
      thunk_FUN_03f5d7b8(param_1 + 0x2d,0);
    }
    param_1[0x2d] = lVar3;
    thunk_FUN_03f5d7b8(param_1 + 0x2d,lVar3);
    lVar3 = param_1[0x2d];
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Inequality(lVar3,0,0);
    if ((uVar1 & 1) != 0) {
      if (param_1[0x2d] == 0) {
LAB_043bb8e4:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      UnityEngine_UI_RectMask2D__AddClippable(param_1[0x2d],param_1,0);
    }
    *(undefined1 *)((long)param_1 + 0x181) = 1;
  }
  return;
}

