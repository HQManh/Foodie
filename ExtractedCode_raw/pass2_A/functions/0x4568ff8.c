// rea decompile_all
// name: DG.Tweening.Plugins.Vector4Plugin$$SetChangeValue
// address: 0x4568ff8
// body: available
// range: 0x4568ff8-0x45690a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45690a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_Vector4Plugin__SetChangeValue(undefined8 param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar1 = *(int *)(param_2 + 0x154);
  if (iVar1 < 5) {
    if (iVar1 == 2) {
      uVar3 = 0;
      uVar2 = (ulong)(uint)(*(float *)(param_2 + 0x134) - *(float *)(param_2 + 0x124));
      goto LAB_04569094;
    }
    if (iVar1 == 4) {
      uVar3 = 0;
      uVar2 = (ulong)(uint)(*(float *)(param_2 + 0x138) - *(float *)(param_2 + 0x128)) << 0x20;
      goto LAB_04569094;
    }
  }
  else {
    if (iVar1 == 8) {
      uVar2 = 0;
      uVar3 = (ulong)(uint)(*(float *)(param_2 + 0x13c) - *(float *)(param_2 + 300));
      goto LAB_04569094;
    }
    if (iVar1 == 0x10) {
      uVar2 = 0;
      uVar3 = (ulong)(uint)(*(float *)(param_2 + 0x140) - *(float *)(param_2 + 0x130)) << 0x20;
      goto LAB_04569094;
    }
  }
  uVar2 = CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x134) >> 0x20) -
                   (float)((ulong)*(undefined8 *)(param_2 + 0x124) >> 0x20),
                   (float)*(undefined8 *)(param_2 + 0x134) - (float)*(undefined8 *)(param_2 + 0x124)
                  );
  uVar3 = CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x13c) >> 0x20) -
                   (float)((ulong)*(undefined8 *)(param_2 + 300) >> 0x20),
                   (float)*(undefined8 *)(param_2 + 0x13c) - (float)*(undefined8 *)(param_2 + 300));
LAB_04569094:
  *(ulong *)(param_2 + 0x14c) = uVar3;
  *(ulong *)(param_2 + 0x144) = uVar2;
  return;
}

