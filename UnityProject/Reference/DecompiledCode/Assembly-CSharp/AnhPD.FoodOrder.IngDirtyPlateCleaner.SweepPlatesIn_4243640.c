// rea decompile_all
// name: AnhPD.FoodOrder.IngDirtyPlateCleaner$$SweepPlatesIn
// address: 0x4243640
// body: available
// range: 0x4243640-0x4243813 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x424380c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4243810 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int AnhPD_FoodOrder_IngDirtyPlateCleaner__SweepPlatesIn
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
              long param_5,int param_6)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  if ((DAT_09516e4d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2a50);
    FUN_03f5c2a4(&DAT_091a2a58);
    FUN_03f5c2a4(&DAT_091a2a60);
    FUN_03f5c2a4(&DAT_091ac6b0);
    FUN_03f5c2a4(&DAT_091ac688);
    FUN_03f5c2a4(&DAT_0917c0a8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516e4d = 1;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  iVar3 = 0;
  if (param_5 != 0) {
    uVar1 = AnhPD_FoodOrder_IngCell__get_HasDirtyPlate(param_5);
    if ((uVar1 & 1) == 0) {
      iVar3 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(param_5 + 0x30);
      lVar2 = thunk_FUN_03f9944c(DAT_0917c0a8);
      FUN_057e053c(lVar2,uVar4,DAT_091ac688);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_057e185c(&local_78,lVar2,DAT_091ac6b0);
      iVar3 = 0;
      while (uVar1 = FUN_071bd28c(&local_78,DAT_091a2a58), lVar2 = local_68, (uVar1 & 1) != 0) {
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar1 = UnityEngine_Object__op_Implicit(lVar2,0);
        if ((uVar1 & 1) != 0) {
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(char *)(lVar2 + 0x92) != '\0') {
            AnhPD_FoodOrder_IngDirtyPlateCleaner__PlaySweepFx
                      (param_1,param_2,param_3,(float)(iVar3 + param_6) * 0.06,param_4,lVar2);
            iVar3 = iVar3 + 1;
          }
        }
      }
      FUN_071bd288(&local_78,DAT_091a2a50);
    }
  }
  return iVar3;
}

