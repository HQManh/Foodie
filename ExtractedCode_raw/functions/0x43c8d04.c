// rea decompile_all
// name: ChocDino.UIFX.TentBlurReference$$SetupResources
// address: 0x43c8d04
// body: available
// range: 0x43c8d04-0x43c8e7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43c8e64 to 0x43c91a8 ChocDino.UIFX.TentBlurReference$$CreateShaders (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43c8e7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_TentBlurReference__SetupResources(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 uVar8;
  
  if ((DAT_09517bcd & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517bcd = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = UnityEngine_Object__op_Inequality(param_2,0,0);
  if ((uVar6 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar2 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
    iVar3 = ChocDino_UIFX_TentBlurReference__GetDownsampleFactor(param_1);
    iVar4 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
    iVar5 = ChocDino_UIFX_TentBlurReference__GetDownsampleFactor(param_1);
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = iVar2 / iVar3;
    }
    uVar7 = 0;
    if (iVar5 != 0) {
      uVar7 = iVar4 / iVar5;
    }
    uVar7 = uVar7 | iVar1 << 0xd;
  }
  ChocDino_UIFX_TentBlurReference__RecreateTexture(param_1,param_1 + 0x30,uVar7,param_2);
  ChocDino_UIFX_TentBlurReference__RecreateTexture(param_1,param_1 + 0x38,uVar7,param_2);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar8,param_2,0);
  if ((uVar6 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x44) = 1;
    *(long **)(param_1 + 0x28) = param_2;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x28),param_2);
  }
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = UnityEngine_Object__op_Equality(uVar8,0,0);
  if ((uVar6 & 1) != 0) {
    ChocDino_UIFX_TentBlurReference__CreateShaders(param_1);
    return;
  }
  return;
}

