// rea decompile_all
// name: Utilities.ObjectPoolDictArray$$GetLines
// address: 0x45010f0
// body: available
// range: 0x45010f0-0x45012b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45012b0 to 0x45006dc Utilities.ObjectPoolDictArray$$GetGameObjectsIterate (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x45012b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Utilities_ObjectPoolDictArray__GetLines
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,long param_9,
          undefined4 param_10,undefined4 param_11,undefined8 param_12,undefined8 param_13)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((DAT_0951849c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091746e0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091eddb0);
    FUN_03f5c2a4(&DAT_09192e38);
    DAT_0951849c = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09192e38);
  Utilities_ObjectPoolDictArray_<>c__DisplayClass37_0___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = param_12;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x10),param_12);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Equality(param_9,0,0);
    if ((uVar2 & 1) != 0) {
      return 0;
    }
    if (param_9 != 0) {
      uVar3 = UnityEngine_Component__get_gameObject(param_9,0);
      uVar4 = thunk_FUN_03f9944c(DAT_091746e0);
      FUN_070a8c30(uVar4,lVar1,DAT_091eddb0,0);
      uVar3 = Utilities_ObjectPoolDictArray__GetGameObjectsIterate
                        (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar3,
                         param_10,param_11,uVar4,param_13);
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

