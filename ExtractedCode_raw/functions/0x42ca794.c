// rea decompile_all
// name: CakeOrder.UI.UIListUpgradeBuildingOptionCards.<IESpawnCoinFlight>d__64$$MoveNext
// address: 0x42ca794
// body: available
// range: 0x42ca794-0x42cab1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42cab18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CakeOrder_UI_UIListUpgradeBuildingOptionCards_<IESpawnCoinFlight>d__64__MoveNext(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int local_64;
  
  if ((DAT_09517369 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174f58);
    FUN_03f5c2a4(&DAT_091af738);
    FUN_03f5c2a4(&DAT_091d4c40);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091f1748);
    FUN_03f5c2a4(&DAT_09195710);
    FUN_03f5c2a4(&DAT_09226568);
    DAT_09517369 = 1;
  }
  lVar8 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    iVar6 = *(int *)(param_1 + 0x54) + 1;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    lVar4 = thunk_FUN_03f9944c(DAT_09195710);
    System_Object___ctor(lVar4,0);
    plVar10 = (long *)(param_1 + 0x38);
    *plVar10 = lVar4;
    thunk_FUN_03f5d7b8(plVar10,lVar4);
    if (*plVar10 == 0) goto LAB_042cab18;
    *(undefined8 *)(*plVar10 + 0x10) = *(undefined8 *)(param_1 + 0x20);
    thunk_FUN_03f5d7b8();
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_042cab18;
    *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x20) = *(undefined8 *)(param_1 + 0x28);
    thunk_FUN_03f5d7b8();
    if (lVar8 == 0) goto LAB_042cab18;
    iVar6 = *(int *)(lVar8 + 0xb8);
    if (iVar6 < 2) {
      iVar6 = 1;
    }
    *(int *)(param_1 + 0x40) = iVar6;
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_042cab18;
    lVar4 = *(long *)(lVar8 + 0xe8);
    *(int *)(*(long *)(param_1 + 0x38) + 0x18) = iVar6;
    if (lVar4 == 0) goto LAB_042cab18;
    iVar6 = *(int *)(lVar4 + 0x18);
    lVar4 = *(long *)(lVar8 + 0x130);
    if (iVar6 < 2) {
      iVar6 = 1;
    }
    *(int *)(param_1 + 0x44) = iVar6;
    if (lVar4 == 0) goto LAB_042cab18;
    uVar15 = 0;
    uVar14 = *(undefined4 *)(param_1 + 0x34);
    uVar13 = UnityEngine_Transform__InverseTransformPoint(*(undefined4 *)(param_1 + 0x30),lVar4,0);
    iVar6 = 0;
    *(undefined4 *)(param_1 + 0x48) = uVar13;
    *(undefined4 *)(param_1 + 0x4c) = uVar14;
    *(undefined4 *)(param_1 + 0x50) = uVar15;
  }
  while( true ) {
    *(int *)(param_1 + 0x54) = iVar6;
    if (*(int *)(param_1 + 0x40) <= iVar6) {
      return 0;
    }
    if (lVar8 == 0) break;
    uVar9 = *(undefined8 *)(lVar8 + 0xb0);
    uVar11 = *(undefined8 *)(lVar8 + 0x130);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = FUN_04c35338(uVar9,uVar11,DAT_091d4c40);
    if (*(long *)(lVar8 + 0xb0) == 0) break;
    uVar9 = UnityEngine_Object__GetName(*(long *)(lVar8 + 0xb0),0);
    local_64 = *(int *)(param_1 + 0x54) + 1;
    uVar11 = FUN_03f5c42c(DAT_09535420,&local_64);
    uVar9 = System_String__Format(DAT_09226568,uVar9,uVar11,0);
    if (lVar4 == 0) break;
    UnityEngine_Object__SetName(lVar4,uVar9,0);
    UnityEngine_Transform__set_localPosition
              (*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
               *(undefined4 *)(param_1 + 0x50),lVar4,0);
    if (*(long *)(lVar8 + 0xe8) == 0) break;
    Utilities_UIFlyExplodeConfig__Prepare(*(long *)(lVar8 + 0xe8),lVar4,0);
    lVar12 = DAT_091af738;
    lVar5 = *(long *)(lVar8 + 0x138);
    if (lVar5 == 0) break;
    lVar7 = *(long *)(lVar5 + 0x10);
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar7 == 0) break;
    uVar2 = *(uint *)(lVar5 + 0x18);
    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar2 + 1;
      plVar10 = (long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
      *plVar10 = lVar4;
      thunk_FUN_03f5d7b8(plVar10,lVar4);
    }
    else {
      FUN_057e0c68(lVar5,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
    }
    lVar12 = *(long *)(param_1 + 0x38);
    if (lVar12 == 0) break;
    uVar13 = *(undefined4 *)(param_1 + 0x54);
    uVar11 = *(undefined8 *)(lVar12 + 0x20);
    uVar9 = thunk_FUN_03f9944c(DAT_09174f58);
    FUN_071d010c(uVar9,lVar12,DAT_091f1748,0);
    uVar9 = CakeOrder_UI_UIListUpgradeBuildingOptionCards__IECoinExplodeThenFly
                      (lVar8,lVar4,uVar13,uVar11,uVar9);
    CakeOrder_UI_UIListUpgradeBuildingOptionCards__StartCoinRoutine(lVar8,uVar9);
    iVar1 = *(int *)(param_1 + 0x44);
    iVar6 = *(int *)(param_1 + 0x54) + 1;
    iVar3 = 0;
    if (iVar1 != 0) {
      iVar3 = iVar6 / iVar1;
    }
    if ((iVar6 == iVar3 * iVar1) && (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0x40) + -1)) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
LAB_042cab18:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

