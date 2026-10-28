// rea decompile_all
// name: AnhPD.FoodOrder.IngCellFinder$$PurgeStalePending
// address: 0x4240d24
// body: available
// range: 0x4240d24-0x4240eef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4240eec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IngCellFinder__PurgeStalePending(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined4 local_74;
  
  if ((DAT_09516e28 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091affc0);
    FUN_03f5c2a4(&DAT_091b05d8);
    FUN_03f5c2a4(&DAT_091b0608);
    FUN_03f5c2a4(&DAT_091b0610);
    FUN_03f5c2a4(&DAT_091affe0);
    FUN_03f5c2a4(&DAT_09213d08);
    DAT_09516e28 = 1;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    iVar3 = *(int *)(*(long *)(param_1 + 0x30) + 0x18);
    if (-1 < iVar3 + -1) {
      do {
        fVar4 = (float)UnityEngine_Time__get_time(0);
        if (*(long *)(param_1 + 0x38) == 0) goto LAB_04240eec;
        iVar3 = iVar3 + -1;
        fVar5 = (float)FUN_05863308(*(long *)(param_1 + 0x38),iVar3,DAT_091affe0);
        if (5.0 < fVar4 - fVar5) {
          if (*(long *)(param_1 + 0x30) == 0) goto LAB_04240eec;
          uVar1 = FUN_057e0998(*(long *)(param_1 + 0x30),iVar3,DAT_091b0610);
          local_74 = 0x40a00000;
          uVar2 = FUN_03f5c42c(DAT_09535450,&local_74);
          uVar1 = System_String__Format(DAT_09213d08,uVar1,uVar2,0);
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_091835d0);
          }
          UnityEngine_Debug__LogWarning(uVar1,0);
          if (*(long *)(param_1 + 0x30) == 0) goto LAB_04240eec;
          FUN_057e251c(*(long *)(param_1 + 0x30),iVar3,DAT_091b05d8);
          if (*(long *)(param_1 + 0x38) == 0) goto LAB_04240eec;
          FUN_05864e60(*(long *)(param_1 + 0x38),iVar3,DAT_091affc0);
        }
      } while (0 < iVar3);
    }
    return;
  }
LAB_04240eec:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

