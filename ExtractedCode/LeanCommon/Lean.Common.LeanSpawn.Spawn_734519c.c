// rea decompile_all
// name: Lean.Common.LeanSpawn$$Spawn
// address: 0x734519c
// body: available
// range: 0x734519c-0x73452f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73452f0 to 0x865b360 UnityEngine.GameObject$$SetActive (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73452f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Lean_Common_LeanSpawn__Spawn
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar5 = param_2;
  uVar6 = param_3;
  if ((DAT_095206d9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d4da0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095206d9 = 1;
  }
  uVar3 = *(undefined8 *)(param_5 + 0x20);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(int *)(param_5 + 0x2c) == 1) {
      lVar2 = *(long *)(param_5 + 0x20);
    }
    else {
      lVar2 = UnityEngine_Component__get_transform(param_5,0);
    }
    if (lVar2 != 0) {
      uVar4 = UnityEngine_Transform__get_rotation(lVar2,0);
      uVar3 = *(undefined8 *)(param_5 + 0x20);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar2 = FUN_04c3546c(param_1,param_2,param_3,uVar4,uVar5,uVar6,param_4,uVar3,DAT_091d4da0);
      if ((lVar2 != 0) && (lVar2 = UnityEngine_Component__get_gameObject(lVar2,0), lVar2 != 0)) {
        UnityEngine_GameObject__SetActive(lVar2,1,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  return;
}

