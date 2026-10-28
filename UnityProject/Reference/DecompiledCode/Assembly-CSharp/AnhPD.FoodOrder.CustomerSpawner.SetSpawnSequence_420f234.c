// rea decompile_all
// name: AnhPD.FoodOrder.CustomerSpawner$$SetSpawnSequence
// address: 0x420f234
// body: available
// range: 0x420f234-0x420f3b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x420f3b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CustomerSpawner__SetSpawnSequence(long param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if ((DAT_09516c65 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a28b8);
    FUN_03f5c2a4(&DAT_091a28c0);
    FUN_03f5c2a4(&DAT_091a28c8);
    FUN_03f5c2a4(&DAT_091ac268);
    FUN_03f5c2a4(&DAT_091ac270);
    FUN_03f5c2a4(&DAT_091ac278);
    FUN_03f5c2a4(&DAT_091ac288);
    DAT_09516c65 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x88);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  if (lVar5 != 0) {
    iVar2 = *(int *)(lVar5 + 0x18);
    *(undefined4 *)(lVar5 + 0x18) = 0;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (0 < iVar2) {
      System_Array__Clear(*(undefined8 *)(lVar5 + 0x10),0,iVar2,0);
    }
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xa8),0);
    if (param_2 != 0) {
      if (*(long *)(param_1 + 0x88) == 0) goto LAB_0420f3b0;
      FUN_057e0e78(*(long *)(param_1 + 0x88),param_2,DAT_091ac268);
    }
    uVar3 = DAT_091ac278;
    lVar5 = *(long *)(param_1 + 0x88);
    if (lVar5 != 0) {
      iVar2 = param_3;
      if (*(int *)(lVar5 + 0x18) <= param_3) {
        iVar2 = *(int *)(lVar5 + 0x18);
      }
      iVar1 = 0;
      if (-1 < param_3) {
        iVar1 = iVar2;
      }
      *(int *)(param_1 + 0x90) = iVar1;
      FUN_057e185c(&local_48,lVar5,uVar3);
      while (uVar4 = FUN_071bd28c(&local_48,DAT_091a28c0), (uVar4 & 1) != 0) {
        AnhPD_FoodOrder_CustomerSpawner__ApplyStaffId(param_1,local_38);
      }
      FUN_071bd288(&local_48,DAT_091a28b8);
      return;
    }
  }
LAB_0420f3b0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

