// rea decompile_all
// name: IapAdsSystem.DataTrackingManager$$FlushPendingCheckpoints
// address: 0x7309818
// body: available
// range: 0x7309818-0x7309e13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7309df4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_DataTrackingManager__FlushPendingCheckpoints(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  if ((DAT_095204ab & 1) == 0) {
    FUN_03f5c2a4(&DAT_091aee10);
    FUN_03f5c2a4(&DAT_091b4080);
    FUN_03f5c2a4(&DAT_091aee20);
    FUN_03f5c2a4(&DAT_091aedf8);
    FUN_03f5c2a4(&DAT_091b4088);
    FUN_03f5c2a4(&DAT_091b4090);
    FUN_03f5c2a4(&DAT_0917c878);
    FUN_03f5c2a4(&DAT_09188e48);
    FUN_03f5c2a4(&DAT_09218bd0);
    FUN_03f5c2a4(&DAT_09221a88);
    FUN_03f5c2a4(&DAT_09218bc8);
    FUN_03f5c2a4(&DAT_0921a2d0);
    FUN_03f5c2a4(&DAT_09218ec8);
    FUN_03f5c2a4(&DAT_0921aae8);
    FUN_03f5c2a4(&DAT_0921e6b0);
    FUN_03f5c2a4(&DAT_09217290);
    FUN_03f5c2a4(&DAT_09218320);
    DAT_095204ab = 1;
  }
  if ((((*(int *)(param_1 + 0x30) != 2) ||
       (uVar3 = IapAdsSystem_IapAdsGlobalConfig__get_IsAllowTrackingData(0), (uVar3 & 1) == 0)) ||
      (lVar8 = *(long *)(param_1 + 0x28), lVar8 == 0)) ||
     ((*(long *)(lVar8 + 0x58) == 0 || (*(int *)(*(long *)(lVar8 + 0x58) + 0x18) == 0)))) {
    return;
  }
  while (lVar8 = *(long *)(lVar8 + 0x58), lVar8 != 0) {
    if (*(int *)(lVar8 + 0x18) < 1) {
      return;
    }
    lVar8 = FUN_057e0998(lVar8,0,DAT_091b4090);
    lVar4 = thunk_FUN_03f9944c(DAT_0917c878);
    FUN_057e0400(lVar4,DAT_091aedf8);
    uVar7 = DAT_0921e6b0;
    if (lVar8 == 0) break;
    lVar10 = *(long *)(lVar8 + 0x18);
    if (lVar10 == 0) {
      lVar10 = **(long **)(DAT_09535468 + 0xb8);
    }
    uVar5 = thunk_FUN_03f9944c(DAT_09188e48);
    Firebase_Analytics_Parameter___ctor(uVar5,uVar7,lVar10,0);
    lVar10 = DAT_091aee10;
    if (lVar4 == 0) break;
    lVar9 = *(long *)(lVar4 + 0x10);
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar9 == 0) break;
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
      puVar6 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
      *puVar6 = uVar5;
      thunk_FUN_03f5d7b8(puVar6,uVar5);
    }
    else {
      FUN_057e0c68(lVar4,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
    iVar2 = *(int *)(lVar8 + 0x20);
    uVar7 = thunk_FUN_03f9944c(DAT_09188e48);
    Firebase_Analytics_Parameter___ctor(uVar7,DAT_0921a2d0,(long)iVar2,0);
    lVar10 = DAT_091aee10;
    lVar9 = *(long *)(lVar4 + 0x10);
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar9 == 0) break;
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
      puVar6 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
      *puVar6 = uVar7;
      thunk_FUN_03f5d7b8(puVar6,uVar7);
    }
    else {
      FUN_057e0c68(lVar4,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
    if (*(char *)(lVar8 + 0x10) != '\0') {
      iVar2 = *(int *)(lVar8 + 0x24);
      uVar7 = thunk_FUN_03f9944c(DAT_09188e48);
      Firebase_Analytics_Parameter___ctor(uVar7,DAT_09221a88,(long)iVar2,0);
      lVar10 = DAT_091aee10;
      lVar9 = *(long *)(lVar4 + 0x10);
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar9 == 0) break;
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        puVar6 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
        *puVar6 = uVar7;
        thunk_FUN_03f5d7b8(puVar6,uVar7);
      }
      else {
        FUN_057e0c68(lVar4,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
        ;
      }
      iVar2 = *(int *)(lVar8 + 0x28);
      uVar7 = thunk_FUN_03f9944c(DAT_09188e48);
      Firebase_Analytics_Parameter___ctor(uVar7,DAT_0921aae8,(long)iVar2,0);
      lVar10 = DAT_091aee10;
      lVar9 = *(long *)(lVar4 + 0x10);
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar9 == 0) break;
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        puVar6 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
        *puVar6 = uVar7;
        thunk_FUN_03f5d7b8(puVar6,uVar7);
      }
      else {
        FUN_057e0c68(lVar4,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
        ;
      }
      iVar2 = *(int *)(lVar8 + 0x2c);
      uVar7 = thunk_FUN_03f9944c(DAT_09188e48);
      Firebase_Analytics_Parameter___ctor(uVar7,DAT_09218320,(long)iVar2,0);
      lVar10 = DAT_091aee10;
      lVar9 = *(long *)(lVar4 + 0x10);
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar9 == 0) break;
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        puVar6 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
        *puVar6 = uVar7;
        thunk_FUN_03f5d7b8(puVar6,uVar7);
      }
      else {
        FUN_057e0c68(lVar4,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
        ;
      }
      iVar2 = *(int *)(lVar8 + 0x30);
      uVar7 = thunk_FUN_03f9944c(DAT_09188e48);
      Firebase_Analytics_Parameter___ctor(uVar7,DAT_09218ec8,(long)iVar2,0);
      lVar10 = DAT_091aee10;
      lVar9 = *(long *)(lVar4 + 0x10);
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar9 == 0) break;
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        puVar6 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
        *puVar6 = uVar7;
        thunk_FUN_03f5d7b8(puVar6,uVar7);
      }
      else {
        FUN_057e0c68(lVar4,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
        ;
      }
      iVar2 = *(int *)(lVar8 + 0x34);
      uVar7 = thunk_FUN_03f9944c(DAT_09188e48);
      Firebase_Analytics_Parameter___ctor(uVar7,DAT_09217290,(long)iVar2,0);
      lVar10 = DAT_091aee10;
      lVar9 = *(long *)(lVar4 + 0x10);
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar9 == 0) break;
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        puVar6 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
        *puVar6 = uVar7;
        thunk_FUN_03f5d7b8(puVar6,uVar7);
      }
      else {
        FUN_057e0c68(lVar4,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
        ;
      }
    }
    puVar6 = &DAT_09218bd0;
    if (*(char *)(lVar8 + 0x10) != '\0') {
      puVar6 = &DAT_09218bc8;
    }
    uVar5 = *puVar6;
    uVar7 = FUN_057e28a4(lVar4,DAT_091aee20);
    IapAdsSystem_DataTrackingManager__LogEvent(param_1,uVar5,uVar7);
    if ((*(long *)(param_1 + 0x28) == 0) ||
       (lVar8 = *(long *)(*(long *)(param_1 + 0x28) + 0x58), lVar8 == 0)) break;
    FUN_057e251c(lVar8,0,DAT_091b4080);
    if (*(long *)(param_1 + 0x28) == 0) break;
    IapAdsSystem_UserAnalyticsState__Save(*(long *)(param_1 + 0x28),1,0);
    lVar8 = *(long *)(param_1 + 0x28);
    if (lVar8 == 0) break;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

