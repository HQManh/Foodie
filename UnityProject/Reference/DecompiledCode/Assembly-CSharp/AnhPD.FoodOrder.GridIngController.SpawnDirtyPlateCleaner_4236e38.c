// rea decompile_all
// name: AnhPD.FoodOrder.GridIngController$$SpawnDirtyPlateCleaner
// address: 0x4236e38
// body: available
// range: 0x4236e38-0x423706b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4237068 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
AnhPD_FoodOrder_GridIngController__SpawnDirtyPlateCleaner
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 local_60;
  undefined4 local_58;
  
  if ((DAT_09516de7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091ce2f0);
    FUN_03f5c2a4(&DAT_091b4c88);
    FUN_03f5c2a4(&DAT_091d4fa0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516de7 = 1;
  }
  local_58 = 0;
  local_60 = 0;
  if (*(long *)(param_4 + 0xd8) != 0) {
    uVar8 = *(undefined8 *)(param_4 + 0x58);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Implicit(uVar8,0);
    if ((uVar4 & 1) != 0) {
      if (*(long *)(param_4 + 0xd8) != 0) {
        uVar4 = AnhPD_FoodOrder_IngDirtyPlateCleaner__TryGetTallestStackPos
                          (*(long *)(param_4 + 0xd8),&local_60);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        lVar5 = *(long *)(DAT_091b4c88 + 0x20);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03f95a6c();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03f95a6c();
        }
        uVar8 = *(undefined8 *)(param_4 + 0x58);
        lVar5 = **(long **)(lVar5 + 0xb8);
        if (DAT_09515ed5 == '\0') {
          FUN_03f5c2a4(&DAT_091898c0);
          DAT_09515ed5 = '\x01';
        }
        if (lVar5 != 0) {
          puVar7 = *(undefined4 **)(DAT_091898c0 + 0xb8);
          lVar5 = FUN_04c37c04(param_1,param_2,param_3,*puVar7,puVar7[1],puVar7[2],puVar7[3],lVar5,
                               uVar8,0,DAT_091d4fa0);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar4 = UnityEngine_Object__op_Implicit(lVar5,0);
          if ((uVar4 & 1) == 0) {
            return 0;
          }
          if ((lVar5 != 0) && (lVar6 = UnityEngine_Component__get_gameObject(lVar5,0), lVar6 != 0))
          {
            UnityEngine_GameObject__SetActive(lVar6,1,0);
            uVar3 = local_58;
            uVar1 = (undefined4)local_60;
            uVar2 = local_60._4_4_;
            uVar8 = thunk_FUN_03f9944c(DAT_09180e78);
            System_Action___ctor(uVar8,param_4,DAT_091ce2f0,0);
            AnhPD_FoodOrder_DirtyPlateCleanerItem__FlyTo(uVar1,uVar2,uVar3,lVar5,uVar8);
            return 1;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return 0;
}

