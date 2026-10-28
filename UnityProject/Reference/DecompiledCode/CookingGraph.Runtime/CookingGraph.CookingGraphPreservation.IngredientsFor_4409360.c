// rea decompile_all
// name: CookingGraph.CookingGraphPreservation$$IngredientsFor
// address: 0x4409360
// body: available
// range: 0x4409360-0x44095bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44095b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44095b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CookingGraph_CookingGraphPreservation__IngredientsFor(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  if ((DAT_09517ec0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a3d88);
    FUN_03f5c2a4(&DAT_091a3d90);
    FUN_03f5c2a4(&DAT_091a3d98);
    FUN_03f5c2a4(&DAT_091a8018);
    FUN_03f5c2a4(&DAT_091a8258);
    FUN_03f5c2a4(&DAT_09179d90);
    FUN_03f5c2a4(&DAT_09179e10);
    FUN_03f5c2a4(&DAT_091af238);
    FUN_03f5c2a4(&DAT_091ad9e8);
    FUN_03f5c2a4(&DAT_0917c4a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517ec0 = 1;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uVar2 = thunk_FUN_03f9944c(DAT_0917c4a0);
  FUN_057e0400(uVar2,DAT_091ad9e8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Equality(param_1,0,0);
  if ((uVar3 & 1) == 0) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Equality(param_2,0,0);
    if ((uVar3 & 1) == 0) {
      uVar4 = thunk_FUN_03f9944c(DAT_09179e10);
      FUN_053eb530(uVar4,DAT_091a8258);
      if ((param_1 == 0) || (*(long *)(param_1 + 0x98) == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_057e185c(&local_78,*(long *)(param_1 + 0x98),DAT_091af238);
      while (uVar3 = FUN_071bd28c(&local_78,DAT_091a3d90), lVar1 = local_68, (uVar3 & 1) != 0) {
        if (local_68 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined8 *)(local_68 + 0x10);
        }
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = UnityEngine_Object__op_Inequality(uVar5,param_2,0);
        if ((uVar3 & 1) == 0) {
          if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar6 = *(undefined8 *)(lVar1 + 0x18);
          uVar5 = thunk_FUN_03f9944c(DAT_09179d90);
          FUN_053eb530(uVar5,DAT_091a8018);
          CookingGraph_CookingGraphPreservation__Collect(param_1,uVar6,uVar2,uVar4,uVar5);
        }
      }
      FUN_071bd288(&local_78,DAT_091a3d88);
    }
  }
  return uVar2;
}

