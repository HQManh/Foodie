// rea decompile_all
// name: Newtonsoft.Json.Linq.JToken$$Annotation
// address: 0x76f0868
// body: available
// range: 0x76f0868-0x76f09cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76f0980 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f0984 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f09cc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Newtonsoft_Json_Linq_JToken__Annotation(long param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  if ((DAT_095228a5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180318);
    DAT_095228a5 = 1;
  }
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Type__op_Equality(param_2,0,0);
  if ((uVar2 & 1) != 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar4 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_09224510);
    System_ArgumentNullException___ctor(uVar4,uVar5,0);
    uVar5 = thunk_FUN_03fc39d4(&DAT_091d13d8);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar5);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar3 = thunk_FUN_03f99350(*(long *)(param_1 + 0x28),DAT_09180318);
    if (lVar3 == 0) {
      if (param_2 == (long *)0x0) {
LAB_076f0980:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar2 = (**(code **)(*param_2 + 0x8d8))
                        (param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(*param_2 + 0x8e0));
      if ((uVar2 & 1) != 0) {
        return *(long *)(param_1 + 0x28);
      }
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (0 < (int)uVar1) {
        lVar7 = 0;
        do {
          if (uVar1 <= (uint)lVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar6 = *(long *)(lVar3 + 0x20 + lVar7 * 8);
          if (lVar6 == 0) {
            return 0;
          }
          if (param_2 == (long *)0x0) goto LAB_076f0980;
          uVar2 = (**(code **)(*param_2 + 0x8d8))(param_2,lVar6,*(undefined8 *)(*param_2 + 0x8e0));
          if ((uVar2 & 1) != 0) {
            return lVar6;
          }
          uVar1 = *(uint *)(lVar3 + 0x18);
          lVar7 = lVar7 + 1;
        } while ((int)lVar7 < (int)uVar1);
      }
    }
  }
  return 0;
}

