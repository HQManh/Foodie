// rea decompile_all
// name: AnhPD.FoodOrder.GroupViewTeapot$$SetPaused
// address: 0x4168c84
// body: available
// range: 0x4168c84-0x4168ddf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4168ddc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_GroupViewTeapot__SetPaused(long param_1,byte param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  
  if ((DAT_0951658b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dbc80);
    FUN_03f5c2a4(&DAT_091dbcc8);
    DAT_0951658b = 1;
  }
  if (*(byte *)(param_1 + 0xf2) == (param_2 & 1)) {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  *(byte *)(param_1 + 0xf2) = param_2 & 1;
  if ((*(long *)(param_1 + 0xf8) == 0) ||
     (uVar1 = DG_Tweening_TweenExtensions__IsActive(*(long *)(param_1 + 0xf8),0), (uVar1 & 1) == 0))
  {
    if ((param_2 & 1) != 0) goto LAB_04168d44;
LAB_04168d74:
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_04168ddc;
    fVar4 = *(float *)(param_1 + 0xf4);
    if (fVar4 <= 0.0) {
      fVar4 = 1.0;
    }
    *(float *)(*(long *)(param_1 + 0x20) + 0x15c) = fVar4;
  }
  else {
    if ((param_2 & 1) == 0) {
      FUN_04d8dd74(*(undefined8 *)(param_1 + 0xf8),DAT_091dbcc8);
      goto LAB_04168d74;
    }
    FUN_04d8dc1c(*(undefined8 *)(param_1 + 0xf8),DAT_091dbc80);
LAB_04168d44:
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 == 0) goto LAB_04168ddc;
    if (0.0 < *(float *)(lVar2 + 0x15c)) {
      *(float *)(param_1 + 0xf4) = *(float *)(lVar2 + 0x15c);
    }
    *(undefined4 *)(lVar2 + 0x15c) = 0;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
  if ((uVar1 & 1) != 0) {
    if ((*(long *)(param_1 + 0x20) == 0) || (*(long *)(param_1 + 0x40) == 0)) {
LAB_04168ddc:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x15c) =
         *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x15c);
  }
  return;
}

