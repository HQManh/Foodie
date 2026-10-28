// rea decompile_all
// name: CookingGraph.CookingLevelGeneratorClient$$Revision
// address: 0x442ec90
// body: available
// range: 0x442ec90-0x442ee3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x442ee38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CookingGraph_CookingLevelGeneratorClient__Revision(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((DAT_09517f99 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187220);
    FUN_03f5c2a4(&DAT_091d13b0);
    FUN_03f5c2a4(&DAT_091d13b8);
    FUN_03f5c2a4(&DAT_09187250);
    FUN_03f5c2a4(&DAT_0921d180);
    FUN_03f5c2a4(&DAT_09222390);
    FUN_03f5c2a4(&DAT_0921b318);
    FUN_03f5c2a4(&DAT_09221af8);
    DAT_09517f99 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09187220);
  Newtonsoft_Json_Linq_JObject___ctor(lVar1,0);
  uVar3 = DAT_0921d180;
  if (param_1 != (long *)0x0) {
    lVar2 = FUN_03f5c420(*(undefined8 *)
                          (*param_1 + (ulong)*(ushort *)(DAT_091d13b8 + 0x50) * 0x10 + 0x140));
    uVar3 = (**(code **)(lVar2 + 8))(param_1,uVar3,lVar2);
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09187250);
    }
    uVar3 = Newtonsoft_Json_Linq_JToken__op_Implicit(uVar3,0);
    if (lVar1 != 0) {
      Newtonsoft_Json_Linq_JObject__set_Item(lVar1,DAT_09222390,uVar3,0);
      uVar3 = DAT_09221af8;
      lVar2 = FUN_03f5c420(*(undefined8 *)
                            (*param_1 + (ulong)*(ushort *)(DAT_091d13b0 + 0x50) * 0x10 + 0x140));
      uVar3 = (**(code **)(lVar2 + 8))(param_1,uVar3,lVar2);
      uVar3 = Newtonsoft_Json_Linq_JToken__op_Implicit(uVar3,0);
      Newtonsoft_Json_Linq_JObject__set_Item(lVar1,DAT_0921b318,uVar3,0);
      return lVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

