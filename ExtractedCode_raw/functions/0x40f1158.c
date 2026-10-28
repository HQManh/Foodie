// rea decompile_all
// name: AnhPD.FoodOrder.IngredientSpawnerController$$EnsureBeltSegments
// address: 0x40f1158
// body: available
// range: 0x40f1158-0x40f1537 inclusive
// range: 0x40f15a4-0x40f165b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40f1534 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f1658 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IngredientSpawnerController__EnsureBeltSegments(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  
  if ((DAT_095160ed & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a44a8);
    FUN_03f5c2a4(&DAT_091a44b0);
    FUN_03f5c2a4(&DAT_091a44b8);
    FUN_03f5c2a4(&DAT_09186c40);
    FUN_03f5c2a4(&DAT_091b30a8);
    FUN_03f5c2a4(&DAT_091b30b0);
    FUN_03f5c2a4(&DAT_091b30b8);
    FUN_03f5c2a4(&DAT_091b0410);
    FUN_03f5c2a4(&DAT_091b0418);
    FUN_03f5c2a4(&DAT_091b30d0);
    FUN_03f5c2a4(&DAT_0917e060);
    FUN_03f5c2a4(&DAT_0917e1d0);
    FUN_03f5c2a4(&DAT_091eba20);
    FUN_03f5c2a4(&DAT_091eba28);
    FUN_03f5c2a4(&DAT_091917e0);
    DAT_095160ed = 1;
  }
  lVar7 = *(long *)(param_1 + 0x48);
  local_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  local_60 = 0;
  if (lVar7 == 0) goto LAB_040f1658;
  if (0 < *(int *)(lVar7 + 0x18)) {
    if (*(int *)(DAT_091917e0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_091917e0 + 0xb8);
    lVar8 = puVar5[2];
    if (lVar8 == 0) {
      if (*(int *)(DAT_091917e0 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar5 = *(undefined8 **)(DAT_091917e0 + 0xb8);
      }
      uVar9 = *puVar5;
      lVar8 = thunk_FUN_03f9944c(DAT_0917e1d0);
      FUN_05d78cfc(lVar8,uVar9,DAT_091eba20,0);
      plVar3 = (long *)(*(long *)(DAT_091917e0 + 0xb8) + 0x10);
      *plVar3 = lVar8;
      thunk_FUN_03f5d7b8(plVar3,lVar8);
    }
    uVar4 = FUN_057e1304(lVar7,lVar8,DAT_091b30b8);
    lVar7 = *(long *)(param_1 + 0x48);
    if ((uVar4 & 1) != 0) {
      if (lVar7 == 0) goto LAB_040f1658;
      iVar1 = *(int *)(lVar7 + 0x18);
      *(undefined4 *)(lVar7 + 0x18) = 0;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (iVar1 < 1) goto LAB_040f132c;
      System_Array__Clear(*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
      lVar7 = *(long *)(param_1 + 0x48);
    }
    if (lVar7 == 0) goto LAB_040f1658;
  }
LAB_040f132c:
  if (*(int *)(lVar7 + 0x18) == 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(DAT_09186c40 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar9 = AnhPD_FoodOrder_IngredientSpawnerController__NewSegment(uVar9);
    lVar8 = DAT_091b30a8;
    lVar6 = *(long *)(lVar7 + 0x10);
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar6 == 0) goto LAB_040f1658;
    uVar2 = *(uint *)(lVar7 + 0x18);
    if (uVar2 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
      thunk_FUN_03f5d7b8();
    }
    else {
      FUN_057e0c68(lVar7,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
    lVar7 = *(long *)(param_1 + 0x40);
    if (*(int *)(DAT_091917e0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_091917e0 + 0xb8);
    lVar8 = puVar5[3];
    if (lVar8 == 0) {
      if (*(int *)(DAT_091917e0 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar5 = *(undefined8 **)(DAT_091917e0 + 0xb8);
      }
      uVar9 = *puVar5;
      lVar8 = thunk_FUN_03f9944c(DAT_0917e060);
      FUN_05d78cfc(lVar8,uVar9,DAT_091eba28,0);
      plVar3 = (long *)(*(long *)(DAT_091917e0 + 0xb8) + 0x18);
      *plVar3 = lVar8;
      thunk_FUN_03f5d7b8(plVar3,lVar8);
    }
    if (lVar7 == 0) goto LAB_040f1658;
    FUN_057e23b0(lVar7,lVar8,DAT_091b0418);
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_040f1658;
    FUN_057e185c(&local_88,*(long *)(param_1 + 0x40),DAT_091b0410);
    puStack_68 = puStack_80;
    local_70 = local_88;
    local_60 = local_78;
    local_88 = 0;
    puStack_80 = &local_70;
    while (uVar4 = FUN_071bd28c(&local_70,DAT_091a44b0), uVar9 = local_60, (uVar4 & 1) != 0) {
      lVar7 = *(long *)(param_1 + 0x48);
      if (*(int *)(DAT_09186c40 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar9 = AnhPD_FoodOrder_IngredientSpawnerController__NewSegment(uVar9);
      lVar8 = DAT_091b30a8;
      if (lVar7 == 0) {
LAB_040f1534:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *(long *)(lVar7 + 0x10);
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar6 == 0) goto LAB_040f1534;
      uVar2 = *(uint *)(lVar7 + 0x18);
      if (uVar2 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
        thunk_FUN_03f5d7b8();
      }
      else {
        FUN_057e0c68(lVar7,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
    }
    FUN_071bd288(&local_70,DAT_091a44a8);
  }
  while (lVar7 = *(long *)(param_1 + 0x48), lVar7 != 0) {
    if (param_2 <= *(int *)(lVar7 + 0x18)) {
      return;
    }
    uVar9 = AnhPD_FoodOrder_IngredientSpawnerController__CreateSegmentClone(param_1);
    if (*(int *)(DAT_09186c40 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09186c40);
    }
    uVar9 = AnhPD_FoodOrder_IngredientSpawnerController__NewSegment(uVar9);
    lVar8 = DAT_091b30a8;
    if (lVar7 == 0) break;
    lVar6 = *(long *)(lVar7 + 0x10);
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar6 == 0) break;
    uVar2 = *(uint *)(lVar7 + 0x18);
    if (uVar2 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
      thunk_FUN_03f5d7b8();
    }
    else {
      FUN_057e0c68(lVar7,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
  }
LAB_040f1658:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

