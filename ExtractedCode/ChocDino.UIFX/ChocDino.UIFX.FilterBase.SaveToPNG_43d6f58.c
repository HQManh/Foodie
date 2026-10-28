// rea decompile_all
// name: ChocDino.UIFX.FilterBase$$SaveToPNG
// address: 0x43d6f58
// body: available
// range: 0x43d6f58-0x43d7163 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43d7144 to 0x43a6374 ChocDino.UIFX.TextureUtils$$WriteToPNG (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43d7160 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 ChocDino_UIFX_FilterBase__SaveToPNG(long *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  
  if ((DAT_09517c93 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d4ed0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918bc08);
    DAT_09517c93 = 1;
  }
  uVar5 = (**(code **)(*param_1 + 0x2d8))(param_1,*(undefined8 *)(*param_1 + 0x2e0));
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  plVar6 = (long *)ChocDino_UIFX_FilterBase__ResolveToTexture(param_1);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar5 = UnityEngine_Object__op_Implicit(plVar6,0);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  param_1 = param_1 + 0x1a;
  lVar9 = *param_1;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = UnityEngine_Object__op_Implicit(lVar9,0);
  if ((uVar5 & 1) != 0) {
    plVar7 = (long *)*param_1;
    if ((plVar7 == (long *)0x0) ||
       (iVar1 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400)),
       plVar6 == (long *)0x0)) goto LAB_043d7160;
    iVar2 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
    if (iVar1 == iVar2) {
      plVar7 = (long *)*param_1;
      if (plVar7 == (long *)0x0) goto LAB_043d7160;
      iVar1 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
      iVar2 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
      if (iVar1 == iVar2) goto LAB_043d7094;
    }
    FUN_04c37370(param_1,DAT_091d4ed0);
  }
LAB_043d7094:
  lVar9 = *param_1;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = UnityEngine_Object__op_Implicit(lVar9,0);
  if ((uVar5 & 1) == 0) {
    if (plVar6 == (long *)0x0) {
LAB_043d7160:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
    uVar4 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
    lVar9 = thunk_FUN_03f9944c(DAT_0918bc08);
    UnityEngine_Texture2D___ctor(lVar9,uVar3,uVar4,4,0,0);
    *param_1 = lVar9;
    thunk_FUN_03f5d7b8(param_1,lVar9);
  }
  uVar8 = ChocDino_UIFX_TextureUtils__WriteToPNG(plVar6,*param_1,param_2,0);
  return uVar8;
}

