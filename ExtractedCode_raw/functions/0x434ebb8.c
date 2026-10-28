// rea decompile_all
// name: CakeOrder.Home.Map.HomeLevelPathMapSection.<SetUp>d__36$$MoveNext
// address: 0x434ebb8
// body: available
// range: 0x434ebb8-0x434eec3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x434eea8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x434eeac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x434eeb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x434eeb4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x434eeb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x434eebc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x434eec0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_Map_HomeLevelPathMapSection_<SetUp>d__36__MoveNext(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined4 uVar13;
  undefined8 local_48;
  
  if ((DAT_095177a9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091747c0);
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091c2270);
    FUN_03f5c2a4(&DAT_091cea08);
    FUN_03f5c2a4(&DAT_091cea10);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_095177a9 = 1;
  }
  local_48 = 0;
  if (*param_1 == 0) {
    local_48._4_4_ = param_1[0x10];
    param_1[0x10] = 0;
    *param_1 = -1;
    local_48._0_4_ = 0;
  }
  else {
    lVar9 = *(long *)(param_1 + 6);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar3 = param_1[8];
    *(undefined8 *)(lVar9 + 0x70) = *(undefined8 *)(param_1 + 10);
    *(int *)(lVar9 + 0x28) = iVar3;
    thunk_FUN_03f5d7b8();
    *(undefined8 *)(lVar9 + 0x68) = *(undefined8 *)(param_1 + 0xc);
    thunk_FUN_03f5d7b8();
    lVar4 = *(long *)(param_1 + 0xe);
    *(undefined1 *)(lVar9 + 0x7c) = 0;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar12 = *(long *)(lVar9 + 0x40);
    uVar10 = *(undefined8 *)(lVar9 + 0x20);
    uVar13 = *(undefined4 *)(lVar9 + 0x2c);
    uVar2 = CakeOrder_MapLevelMetadataConfig__get_NumLevels(lVar4,0);
    if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar11 = *(undefined8 *)(*(long *)(param_1 + 0xc) + 0x20);
    *(undefined8 *)(lVar12 + 0x90) = uVar10;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar12 + 0x90),uVar10);
    *(undefined8 *)(lVar12 + 0x70) = uVar11;
    *(undefined4 *)(lVar12 + 0x6c) = uVar13;
    *(undefined4 *)(lVar12 + 0x98) = uVar2;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar12 + 0x70),uVar11);
    lVar4 = *(long *)(lVar9 + 0x40);
    *(undefined1 *)(lVar12 + 0x78) = 0;
    uVar10 = thunk_FUN_03f9944c(DAT_091747c0);
    FUN_070a7580(uVar10,lVar9,DAT_091cea08,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    CakeOrder_Home_Map_HomeLevelPathNodesControl__add_onSelectLevelNode(lVar4,uVar10);
    lVar4 = *(long *)(lVar9 + 0x40);
    uVar10 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar10,lVar9,DAT_091cea10,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    CakeOrder_Home_Map_HomeLevelPathNodesControl__add_onDoneShowAllLevelNodes(lVar4,uVar10);
    if (*(long *)(lVar9 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_Rendering_SortingGroup__set_sortingOrder(*(long *)(lVar9 + 0x48),-param_1[8],0);
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = Cysharp_Threading_Tasks_UniTask__Yield(0);
    local_48 = CONCAT44(local_48._4_4_,uVar2);
    iVar3 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter(&local_48,0);
    local_48._4_4_ = iVar3;
    uVar5 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted((long)&local_48 + 4,0);
    if ((uVar5 & 1) == 0) {
      *param_1 = 0;
      uVar10 = DAT_091c2270;
      param_1[0x10] = local_48._4_4_;
      FUN_04358bf0(param_1 + 2,(long)&local_48 + 4,param_1,uVar10);
      return;
    }
  }
  Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult((long)&local_48 + 4,0);
  cVar1 = DAT_095162d8;
  *param_1 = -2;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar8 = *(long **)(param_1 + 2);
  if (plVar8 != (long *)0x0) {
    lVar9 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091866a8) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_0434ee80;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar8,DAT_091866a8,2);
LAB_0434ee80:
    (*(code *)*puVar6)(plVar8,puVar6[1]);
  }
  return;
}

