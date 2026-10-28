// rea decompile_all
// name: CakeOrder.LevelIngredientQueuesConfig$$ParseLevel
// address: 0x4263fcc
// body: available
// range: 0x4263fcc-0x4264147 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4264144 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_LevelIngredientQueuesConfig__ParseLevel
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  
  if ((DAT_09516fa2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186c20);
    FUN_03f5c2a4(&DAT_0918b3a0);
    DAT_09516fa2 = 1;
  }
  local_40 = 0;
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_58 = 0;
  local_60 = 0;
  local_48 = 0;
  uStack_50 = 0;
  lVar1 = thunk_FUN_03f9944c(DAT_09186c20);
  *(undefined8 *)(lVar1 + 0x10) = 0x4000000000000005;
  System_Object___ctor(lVar1,0);
  if (*(int *)(DAT_0918b3a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  Utilities_StringExtension__SplitNonAlloc(&local_b8,param_2,param_3,0x24,0);
  local_70 = local_98;
  uStack_88 = uStack_b0;
  local_90 = local_b8;
  uStack_78 = uStack_a0;
  uStack_80 = local_a8;
  Utilities_StringExtension_StringSplitEnumerator__GetEnumerator(&local_60,&local_90,0);
  uVar2 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_60,0);
  if ((uVar2 & 1) != 0) {
    iVar5 = 0;
    do {
      if (iVar5 == 2) {
        uVar3 = CakeOrder_LevelIngredientQueuesConfig__ParseSlotGroup(uVar2,local_48,local_40);
        *(undefined8 *)(lVar1 + 0x28) = uVar3;
        lVar4 = lVar1 + 0x28;
LAB_04264104:
        thunk_FUN_03f5d7b8(lVar4,uVar3);
      }
      else {
        if (iVar5 == 1) {
          uVar3 = CakeOrder_LevelIngredientQueuesConfig__ParseSlotGroup(uVar2,local_48,local_40);
          *(undefined8 *)(lVar1 + 0x20) = uVar3;
          lVar4 = lVar1 + 0x20;
          goto LAB_04264104;
        }
        if (iVar5 == 0) {
          uVar3 = CakeOrder_LevelIngredientQueuesConfig__ParseQueues();
          *(undefined8 *)(lVar1 + 0x18) = uVar3;
          lVar4 = lVar1 + 0x18;
          goto LAB_04264104;
        }
      }
      iVar5 = iVar5 + 1;
      uVar2 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_60,0);
    } while ((uVar2 & 1) != 0);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  *(undefined8 *)(lVar1 + 0x10) = 0x3f80000000000005;
  return lVar1;
}

