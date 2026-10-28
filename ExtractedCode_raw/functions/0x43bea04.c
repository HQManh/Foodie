// rea decompile_all
// name: ChocDino.UIFX.FilterStackTextMeshPro$$SaveToPNG
// address: 0x43bea04
// body: available
// range: 0x43bea04-0x43bec03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43bebe4 to 0x43a6374 ChocDino.UIFX.TextureUtils$$WriteToPNG (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43bec00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 ChocDino_UIFX_FilterStackTextMeshPro__SaveToPNG(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  
  if ((DAT_09517b6a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d4ed0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918bc08);
    DAT_09517b6a = 1;
  }
  uVar5 = ChocDino_UIFX_FilterStackTextMeshPro__CanApplyFilter(param_1);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  plVar6 = (long *)ChocDino_UIFX_FilterStackTextMeshPro__ResolveToTexture(param_1);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar5 = UnityEngine_Object__op_Implicit(plVar6,0);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  plVar9 = (long *)(param_1 + 0xe0);
  lVar10 = *plVar9;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = UnityEngine_Object__op_Implicit(lVar10,0);
  if ((uVar5 & 1) != 0) {
    plVar7 = (long *)*plVar9;
    if ((plVar7 == (long *)0x0) ||
       (iVar1 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400)),
       plVar6 == (long *)0x0)) goto LAB_043bec00;
    iVar2 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
    if (iVar1 == iVar2) {
      plVar7 = (long *)*plVar9;
      if (plVar7 == (long *)0x0) goto LAB_043bec00;
      iVar1 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
      iVar2 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
      if (iVar1 == iVar2) goto LAB_043beb34;
    }
    FUN_04c37370(plVar9,DAT_091d4ed0);
  }
LAB_043beb34:
  lVar10 = *plVar9;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = UnityEngine_Object__op_Implicit(lVar10,0);
  if ((uVar5 & 1) == 0) {
    if (plVar6 == (long *)0x0) {
LAB_043bec00:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
    uVar4 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
    lVar10 = thunk_FUN_03f9944c(DAT_0918bc08);
    UnityEngine_Texture2D___ctor(lVar10,uVar3,uVar4,4,0,0);
    *plVar9 = lVar10;
    thunk_FUN_03f5d7b8(plVar9,lVar10);
  }
  uVar8 = ChocDino_UIFX_TextureUtils__WriteToPNG(plVar6,*plVar9,param_2,0);
  return uVar8;
}

