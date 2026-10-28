// rea decompile_all
// name: AnhPD.FoodOrder.CustomerSpawner$$AdmitToOrderArea
// address: 0x4210bec
// body: available
// range: 0x4210bec-0x4210e63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4210e48 to 0x4210adc AnhPD.FoodOrder.CustomerSpawner$$ScheduleAdmitRecheck (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4210e60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CustomerSpawner__AdmitToOrderArea
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               long param_5)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if ((DAT_09516c73 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091e8450);
    FUN_03f5c2a4(&DAT_0918f9d0);
    DAT_09516c73 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_0918f9d0);
  System_Object___ctor(lVar2,0);
  if (lVar2 == 0) goto LAB_04210e60;
  *(long *)(lVar2 + 0x10) = param_4;
  thunk_FUN_03f5d7b8((long *)(lVar2 + 0x10),param_4);
  plVar7 = (long *)(lVar2 + 0x18);
  *plVar7 = param_5;
  thunk_FUN_03f5d7b8(plVar7,param_5);
  lVar5 = *plVar7;
  if ((lVar5 == 0) || (*(long *)(lVar5 + 0x10) == 0)) goto LAB_04210e60;
  AnhPD_FoodOrder_FCustomerLine__ClaimOrderBoards
            (*(long *)(lVar5 + 0x10),*(undefined8 *)(lVar5 + 0x20));
  lVar5 = *plVar7;
  if (lVar5 == 0) goto LAB_04210e60;
  if (*(long *)(lVar5 + 0x18) == 0) {
LAB_04210d2c:
    lVar2 = *(long *)(param_4 + 0x30);
    if (*(char *)(lVar5 + 0x2c) == '\0') {
      if (lVar2 == 0) goto LAB_04210e60;
      uVar10 = AnhPD_FoodOrder_CustomerLineLayout__RelayoutSnapping
                         (lVar2,*(undefined8 *)(lVar5 + 0x10));
    }
    else {
      if (lVar2 == 0) goto LAB_04210e60;
      AnhPD_FoodOrder_CustomerLineLayout__Relayout(lVar2,0);
      if (DAT_09515ce6 == '\0') {
        FUN_03f5c2a4(&DAT_0918cbd0);
        DAT_09515ce6 = '\x01';
      }
      puVar6 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
      uVar10 = *puVar6;
      param_2 = puVar6[1];
      param_3 = puVar6[2];
    }
    uVar4 = 0;
    bVar1 = true;
  }
  else {
    uVar3 = CakeOrder_InGame_CustomerSpawnData__get_IsBoss(*(long *)(lVar5 + 0x18),0);
    if ((uVar3 & 1) == 0) {
      lVar5 = *plVar7;
      if (lVar5 == 0) goto LAB_04210e60;
      goto LAB_04210d2c;
    }
    if (DAT_09515ce6 == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      DAT_09515ce6 = '\x01';
    }
    puVar6 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
    uVar10 = *puVar6;
    param_2 = puVar6[1];
    param_3 = puVar6[2];
    uVar4 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar4,lVar2,DAT_091e8450,0);
    bVar1 = false;
  }
  lVar2 = *plVar7;
  if (lVar2 != 0) {
    uVar9 = 0;
    uVar8 = 0;
    if (*(char *)(lVar2 + 0x2c) == '\0') {
      if (*(long *)(param_4 + 0x30) == 0) goto LAB_04210e60;
      uVar8 = *(undefined4 *)(*(long *)(param_4 + 0x30) + 0x34);
    }
    if (!bVar1) {
      uVar9 = *(undefined4 *)(param_4 + 0x74);
    }
    if (*(long *)(lVar2 + 0x10) != 0) {
      AnhPD_FoodOrder_FCustomerLine__AdmitFromWaiting
                (uVar10,param_2,param_3,uVar8,uVar9,*(long *)(lVar2 + 0x10),
                 *(undefined8 *)(lVar2 + 0x18),*(undefined8 *)(lVar2 + 0x20),uVar4);
      lVar2 = *plVar7;
      if (((lVar2 != 0) && (*(long *)(lVar2 + 0x18) != 0)) && (*(long *)(lVar2 + 0x10) != 0)) {
        AnhPD_FoodOrder_FCustomerLine__InitWaitTime
                  (*(float *)(*(long *)(lVar2 + 0x18) + 0x24) * *(float *)(param_4 + 0xc0));
        if (*plVar7 != 0) {
          AnhPD_FoodOrder_CustomerSpawner__NotifyCustomerArrived
                    (param_4,*(undefined8 *)(*plVar7 + 0x18));
          AnhPD_FoodOrder_CustomerSpawner__PromoteWaitingQueue(param_4);
          AnhPD_FoodOrder_CustomerSpawner__FillWaiting(param_4);
          AnhPD_FoodOrder_CustomerSpawner__ScheduleAdmitRecheck(0,param_4);
          return;
        }
      }
    }
  }
LAB_04210e60:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

