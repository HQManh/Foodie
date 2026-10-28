// rea decompile_all
// name: AnhPD.FoodOrder.AutoCompleteOrderFx$$PickBestCandidate
// address: 0x41e1888
// body: available
// range: 0x41e1888-0x41e1a6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41e1a5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e1a60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e1a64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e1a68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_AutoCompleteOrderFx__PickBestCandidate(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined8 local_a0;
  undefined8 *puStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  
  if ((DAT_09516ae6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4f70);
    FUN_03f5c2a4(&DAT_091a4f78);
    FUN_03f5c2a4(&DAT_091a4f80);
    FUN_03f5c2a4(&DAT_091b20f0);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09516ae6 = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_057e185c(&local_90,param_1,DAT_091b20f0);
  local_60 = local_80;
  puStack_98 = &local_70;
  uStack_68 = uStack_88;
  local_70 = local_90;
  local_a0 = 0;
  lVar2 = 0;
LAB_041e195c:
  lVar5 = lVar2;
  uVar4 = FUN_071bd28c(&local_70,DAT_091a4f78);
  lVar1 = local_60;
  if ((uVar4 & 1) == 0) {
    FUN_071bd288(&local_70,DAT_091a4f70);
    return lVar5;
  }
  if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar6 = *(long *)(local_60 + 0x10);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar2 = lVar5;
  if (*(char *)(lVar6 + 0x28) != '\0') goto code_r0x041e1984;
  goto LAB_041e19c4;
code_r0x041e1984:
  uStack_88 = *(undefined8 *)(lVar6 + 0x18);
  local_90 = *(undefined8 *)(lVar6 + 0x10);
  local_80 = *(long *)(lVar6 + 0x20);
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uStack_b8 = uStack_88;
  local_c0 = local_90;
  local_b0 = local_80;
  uVar4 = AnhPD_FoodOrder_PieceSet__Covers(param_2,&local_c0);
  if ((uVar4 & 1) != 0) {
LAB_041e19c4:
    uStack_88 = *(undefined8 *)(lVar6 + 0x18);
    local_90 = *(undefined8 *)(lVar6 + 0x10);
    local_80 = *(long *)(lVar6 + 0x20);
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uStack_d8 = uStack_88;
    local_e0 = local_90;
    local_d0 = local_80;
    iVar3 = AnhPD_FoodOrder_PieceSet__IntersectCount(param_2,&local_e0);
    if ((iVar3 != 0) && (lVar2 = lVar1, lVar5 != 0)) {
      if (*(long *)(lVar5 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar3 = *(int *)(*(long *)(lVar5 + 0x10) + 0x2c);
      if ((iVar3 <= *(int *)(lVar6 + 0x2c)) && (lVar2 = lVar5, *(int *)(lVar6 + 0x2c) == iVar3)) {
        lVar2 = lVar1;
      }
    }
  }
  goto LAB_041e195c;
}

