// rea decompile_all
// name: Newtonsoft.Json.Serialization.DefaultContractResolver$$ShouldSerializeEntityMember
// address: 0x76a1eb0
// body: available
// range: 0x76a1eb0-0x76a1fb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76a1fb4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Serialization_DefaultContractResolver__ShouldSerializeEntityMember
          (undefined8 param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((DAT_0952261e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189788);
    FUN_03f5c2a4(&DAT_0920e080);
    DAT_0952261e = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar4 = *param_2;
    if ((*(byte *)(DAT_09189788 + 0x130) <= *(byte *)(lVar4 + 0x130)) &&
       (*(long *)(*(long *)(lVar4 + 200) + (ulong)*(byte *)(DAT_09189788 + 0x130) * 8 + -8) ==
        DAT_09189788)) {
      plVar1 = (long *)(**(code **)(lVar4 + 600))(param_2,*(undefined8 *)(lVar4 + 0x260));
      if (plVar1 == (long *)0x0) {
LAB_076a1fb4:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar2 = (**(code **)(*plVar1 + 0x3d8))(plVar1,*(undefined8 *)(*plVar1 + 0x3e0));
      if ((uVar2 & 1) != 0) {
        plVar1 = (long *)(**(code **)(*param_2 + 600))(param_2,*(undefined8 *)(*param_2 + 0x260));
        if ((plVar1 == (long *)0x0) ||
           (plVar1 = (long *)(**(code **)(*plVar1 + 0x468))(plVar1,*(undefined8 *)(*plVar1 + 0x470))
           , plVar1 == (long *)0x0)) goto LAB_076a1fb4;
        uVar3 = (**(code **)(*plVar1 + 0x2f8))(plVar1,*(undefined8 *)(*plVar1 + 0x300));
        uVar2 = System_String__op_Equality(uVar3,DAT_0920e080,0);
        if ((uVar2 & 1) != 0) {
          return 0;
        }
      }
    }
  }
  return 1;
}

