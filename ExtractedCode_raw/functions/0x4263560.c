// rea decompile_all
// name: CakeOrder.LevelGridConfig$$ImportQueueData
// address: 0x4263560
// body: available
// range: 0x4263560-0x4263723 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4263720 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_LevelGridConfig__ImportQueueData(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  
  if ((DAT_09516f9e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091acf80);
    FUN_03f5c2a4(&DAT_091acf88);
    FUN_03f5c2a4(&DAT_091acf78);
    FUN_03f5c2a4(&DAT_0917c260);
    FUN_03f5c2a4(&DAT_0918b3a0);
    DAT_09516f9e = 1;
  }
  local_50 = 0;
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_68 = 0;
  local_70 = 0;
  local_58 = 0;
  uStack_60 = 0;
  lVar3 = thunk_FUN_03f9944c(DAT_0917c260);
  FUN_057e0400(lVar3,DAT_091acf78);
  if (*(int *)(DAT_0918b3a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  Utilities_StringExtension__SplitNonAlloc(&local_c8,param_1,param_2,0x2c,0);
  local_80 = local_a8;
  uStack_98 = uStack_c0;
  local_a0 = local_c8;
  uStack_88 = uStack_b0;
  uStack_90 = local_b8;
  Utilities_StringExtension_StringSplitEnumerator__GetEnumerator(&local_70,&local_a0,0);
  uVar4 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_70,0);
  if ((uVar4 & 1) == 0) {
    if (lVar3 == 0) {
LAB_04263720:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  else {
    do {
      Utilities_StringExtension_StringSplitEntry__op_Implicit(local_58,local_50,0);
      uVar5 = CakeOrder_LevelGridConfig__ParseCellData();
      lVar2 = DAT_091acf80;
      if (lVar3 == 0) goto LAB_04263720;
      lVar6 = *(long *)(lVar3 + 0x10);
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar6 == 0) goto LAB_04263720;
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
        thunk_FUN_03f5d7b8();
      }
      else {
        FUN_057e0c68(lVar3,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      uVar4 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_70,0);
    } while ((uVar4 & 1) != 0);
  }
  FUN_057e28a4(lVar3,DAT_091acf88);
  return;
}

