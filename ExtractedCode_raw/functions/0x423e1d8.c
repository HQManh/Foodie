// rea decompile_all
// name: AnhPD.FoodOrder.GridIngController.<SpiderCleanRoutine>d__102$$MoveNext
// address: 0x423e1d8
// body: available
// range: 0x423e1d8-0x423e62b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x423e628 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
AnhPD_FoodOrder_GridIngController_<SpiderCleanRoutine>d__102__MoveNext
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long *param_4)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined4 extraout_s0;
  float fVar12;
  float fVar13;
  float local_54;
  
  plVar2 = param_4;
  if ((DAT_09516e0b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174650);
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091ac6f8);
    FUN_03f5c2a4(&DAT_091b4c88);
    FUN_03f5c2a4(&DAT_091d4fc0);
    FUN_03f5c2a4(&DAT_091eaee0);
    FUN_03f5c2a4(&DAT_091eaee8);
    FUN_03f5c2a4(&DAT_091910c0);
    FUN_03f5c2a4(&DAT_091910b8);
    plVar2 = (long *)FUN_03f5c2a4(&DAT_0918ce90);
    DAT_09516e0b = 1;
  }
  iVar1 = (int)param_4[2];
  lVar6 = param_4[4];
  local_54 = 0.0;
  if (iVar1 == 2) {
    *(undefined4 *)(param_4 + 2) = 0xffffffff;
LAB_0423e574:
    plVar2 = param_4 + 5;
    if (*plVar2 == 0) goto LAB_0423e628;
    if ((*(char *)(*plVar2 + 0x10) == '\0') && (fVar13 = *(float *)(param_4 + 8), fVar13 < 10.0)) {
      fVar12 = (float)UnityEngine_Time__get_deltaTime(0);
      param_4[3] = 0;
      *(float *)(param_4 + 8) = fVar13 + fVar12;
      thunk_FUN_03f5d7b8(param_4 + 3,0);
      *(undefined4 *)(param_4 + 2) = 2;
      return 1;
    }
    *plVar2 = 0;
    plVar2 = (long *)thunk_FUN_03f5d7b8(plVar2,0);
  }
  else {
    if (iVar1 == 1) {
      *(undefined4 *)(param_4 + 2) = 0xffffffff;
    }
    else {
      plVar2 = (long *)0x0;
      if (iVar1 != 0) {
        return 0;
      }
      *(undefined4 *)(param_4 + 2) = 0xffffffff;
      if (lVar6 == 0) goto LAB_0423e628;
      *(undefined1 *)(lVar6 + 0x120) = 1;
      AnhPD_FoodOrder_GridIngController__SetInteractBlocked(lVar6,1);
      plVar2 = *(long **)(lVar6 + 0xd8);
      local_54 = 0.0;
      if (*(char *)(lVar6 + 0x50) == '\0') {
        if (plVar2 == (long *)0x0) goto LAB_0423e628;
        lVar3 = AnhPD_FoodOrder_IngDirtyPlateCleaner__TallestStackOnly();
        param_4[7] = lVar3;
        plVar2 = (long *)thunk_FUN_03f5d7b8();
      }
      else {
        if (plVar2 == (long *)0x0) goto LAB_0423e628;
        lVar3 = AnhPD_FoodOrder_IngDirtyPlateCleaner__GatherByType(plVar2,&local_54);
        fVar13 = local_54;
        param_4[7] = lVar3;
        plVar2 = (long *)thunk_FUN_03f5d7b8();
        if (0.0 < fVar13) {
          lVar6 = thunk_FUN_03f9944c(DAT_0918ce90);
          UnityEngine_WaitForSeconds___ctor(fVar13,lVar6,0);
          param_4[3] = lVar6;
          thunk_FUN_03f5d7b8(param_4 + 3,lVar6);
          *(undefined4 *)(param_4 + 2) = 1;
          return 1;
        }
      }
    }
    if (param_4[7] == 0) goto LAB_0423e628;
    if (0 < *(int *)(param_4[7] + 0x18)) {
      lVar3 = thunk_FUN_03f9944c(DAT_091910c0);
      System_Object___ctor(lVar3,0);
      plVar8 = param_4 + 5;
      *plVar8 = lVar3;
      plVar2 = (long *)thunk_FUN_03f5d7b8(plVar8,lVar3);
      if (*plVar8 == 0) goto LAB_0423e628;
      *(undefined1 *)(*plVar8 + 0x10) = 0;
      lVar3 = *(long *)(DAT_091b4c88 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      plVar2 = *(long **)(*(long *)(lVar3 + 0xc0) + 0x10);
      if ((*(ushort *)((long)plVar2 + 0x135) & 1) == 0) {
        plVar2 = (long *)FUN_03f95a6c();
      }
      if (lVar6 == 0) goto LAB_0423e628;
      uVar9 = *(undefined8 *)(lVar6 + 0x48);
      lVar7 = *(long *)plVar2[0x17];
      lVar3 = UnityEngine_Component__get_transform(lVar6,0);
      plVar2 = (long *)0x0;
      if (lVar3 == 0) goto LAB_0423e628;
      plVar2 = (long *)UnityEngine_Transform__get_position(lVar3,0);
      if (DAT_09515ed5 == '\0') {
        plVar2 = (long *)FUN_03f5c2a4(&DAT_091898c0);
        DAT_09515ed5 = '\x01';
      }
      if (lVar7 == 0) goto LAB_0423e628;
      puVar4 = *(undefined4 **)(DAT_091898c0 + 0xb8);
      lVar3 = FUN_04c37c04(extraout_s0,param_2,param_3,*puVar4,puVar4[1],puVar4[2],puVar4[3],lVar7,
                           uVar9,0,DAT_091d4fc0);
      plVar2 = (long *)0x0;
      if (lVar3 == 0) goto LAB_0423e628;
      lVar7 = UnityEngine_Component__get_gameObject(lVar3,0);
      plVar2 = (long *)0x0;
      if (lVar7 == 0) goto LAB_0423e628;
      UnityEngine_GameObject__SetActive(lVar7,1,0);
      lVar7 = param_4[7];
      if (*(int *)(DAT_091910b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar5 = *(undefined8 **)(DAT_091910b8 + 0xb8);
      lVar10 = puVar5[2];
      if (lVar10 == 0) {
        if (*(int *)(DAT_091910b8 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar5 = *(undefined8 **)(DAT_091910b8 + 0xb8);
        }
        uVar9 = *puVar5;
        lVar10 = thunk_FUN_03f9944c(DAT_09174650);
        FUN_070a8c30(lVar10,uVar9,DAT_091eaee0,0);
        plVar2 = (long *)(*(long *)(DAT_091910b8 + 0xb8) + 0x10);
        *plVar2 = lVar10;
        thunk_FUN_03f5d7b8(plVar2,lVar10);
      }
      lVar11 = param_4[5];
      uVar9 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(uVar9,lVar11,DAT_091eaee8,0);
      AnhPD_FoodOrder_SpiderCleanerFx__Play(lVar3,lVar7,lVar10,uVar9);
      *(undefined4 *)(param_4 + 8) = 0;
      goto LAB_0423e574;
    }
  }
  if (lVar6 != 0) {
    AnhPD_FoodOrder_GridIngController__RefreshCellDishes(lVar6);
    *(undefined1 *)(lVar6 + 0x120) = 0;
    AnhPD_FoodOrder_GridIngController__SetInteractBlocked(lVar6,0);
    lVar6 = param_4[6];
    if (lVar6 != 0) {
      (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
    }
    return 0;
  }
LAB_0423e628:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550(plVar2);
}

