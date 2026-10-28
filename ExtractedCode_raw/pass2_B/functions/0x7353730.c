// rea decompile_all
// name: Lean.Touch.LeanFinger$$GetWorldDelta
// address: 0x7353730
// body: available
// range: 0x7353730-0x735387f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float Lean_Touch_LeanFinger__GetWorldDelta
                (undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  if ((DAT_09520791 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183140);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09202468);
    DAT_09520791 = 1;
  }
  if (*(int *)(DAT_09183140 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = CW_Common_CwHelper__GetCamera(param_4,0,0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar1,0,0);
  if ((uVar2 & 1) == 0) {
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogError(DAT_09202468,0);
    fVar3 = 0.0;
  }
  else {
    fVar3 = (float)Lean_Touch_LeanFinger__GetWorldPosition(param_2,param_3,uVar1);
    fVar4 = (float)Lean_Touch_LeanFinger__GetLastWorldPosition(param_1,param_3,uVar1);
    fVar3 = fVar3 - fVar4;
  }
  return fVar3;
}

