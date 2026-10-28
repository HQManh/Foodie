// rea decompile_all
// name: CookingGraph.CookingLevelGeneratorClient$$CreateAsync
// address: 0x442e6a4
// body: available
// range: 0x442e6a4-0x442e9bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x442e93c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x442e9b8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingLevelGeneratorClient__CreateAsync
               (undefined8 param_1,long param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_80 [16];
  
  if ((DAT_09517f93 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187220);
    FUN_03f5c2a4(&DAT_09187250);
    FUN_03f5c2a4(&DAT_091b6d60);
    FUN_03f5c2a4(&DAT_091b6d68);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09222180);
    FUN_03f5c2a4(&DAT_092235c8);
    FUN_03f5c2a4(&DAT_0921a918);
    FUN_03f5c2a4(&DAT_0921f168);
    FUN_03f5c2a4(&DAT_0921b8a8);
    FUN_03f5c2a4(&DAT_09219cf0);
    DAT_09517f93 = 1;
  }
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Equality(param_2,0,0);
  if ((uVar1 & 1) == 0) {
    if (param_2 != 0) {
      uVar1 = System_String__IsNullOrWhiteSpace(*(undefined8 *)(param_2 + 0x20),0);
      if ((uVar1 & 1) != 0) {
        thunk_FUN_03fc39d4(&DAT_091870e0);
        uVar3 = thunk_FUN_03f9944c();
        uVar4 = thunk_FUN_03fc39d4(&DAT_0920de98);
        System_InvalidOperationException___ctor(uVar3,uVar4,0);
        goto LAB_0442e9a4;
      }
      lVar2 = thunk_FUN_03f9944c(DAT_09187220);
      Newtonsoft_Json_Linq_JObject___ctor(lVar2,0);
      if (*(long *)(param_2 + 0x28) != 0) {
        uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x10);
        if (*(int *)(DAT_09187250 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = Newtonsoft_Json_Linq_JToken__op_Implicit(uVar4,0);
        if (lVar2 != 0) {
          Newtonsoft_Json_Linq_JObject__set_Item(lVar2,DAT_0921f168,uVar4,0);
          uVar4 = Newtonsoft_Json_Linq_JToken__op_Implicit(param_3,0);
          Newtonsoft_Json_Linq_JObject__set_Item(lVar2,DAT_09222180,uVar4,0);
          uVar4 = Newtonsoft_Json_Linq_JToken__op_Implicit(param_4,0);
          Newtonsoft_Json_Linq_JObject__set_Item(lVar2,DAT_092235c8,uVar4,0);
          uVar4 = Newtonsoft_Json_Linq_JObject__Parse(*(undefined8 *)(param_2 + 0x20),0);
          Newtonsoft_Json_Linq_JObject__set_Item(lVar2,DAT_0921a918,uVar4,0);
          local_80 = CookingGraph_CookingLevelGeneratorClient__ResolveFlightTravelSeconds(param_1);
          if ((local_80._0_8_ & 0xff) != 0) {
            uVar4 = FUN_05c2dd40(local_80,DAT_091b6d68);
            if (*(int *)(DAT_09187250 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar4 = Newtonsoft_Json_Linq_JToken__op_Implicit(uVar4,0);
            Newtonsoft_Json_Linq_JObject__set_Item(lVar2,DAT_0921b8a8,uVar4,0);
          }
          CookingGraph_CookingLevelGeneratorClient__CommandAsync(param_1,DAT_09219cf0,lVar2,param_5)
          ;
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  thunk_FUN_03fc39d4(&DAT_09181550);
  uVar3 = thunk_FUN_03f9944c();
  uVar4 = thunk_FUN_03fc39d4(&DAT_0921c7b8);
  System_ArgumentNullException___ctor(uVar3,uVar4,0);
LAB_0442e9a4:
  uVar4 = thunk_FUN_03fc39d4(&DAT_091c6648);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar4);
}

